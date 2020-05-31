/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** display_fight_map.c
*/

#include "my_rpg.h"

void animate_death(setup_t *window, draw_sprite_t *my_sprite)
{
    if (my_sprite->death == 0) {
        my_sprite->death = 1;
        my_sprite->sboss.rect = (sfIntRect) {1643, 0, 221, 272};
    }
    if (sfClock_getElapsedTime(my_sprite->move_clock.clock).microseconds
        > 200000) {
            my_sprite->sboss.rect.left -= 221;
            sfClock_restart(my_sprite->move_clock.clock);
        }
    if (my_sprite->sboss.rect.left <= 96) {
        window->scene = 10;
        sfMusic_stop(my_sprite->musicf.music);
        sfMusic_play(my_sprite->musicw.music);
    }
}

void check_end(setup_t *window, draw_sprite_t *my_sprite)
{
    if (my_sprite->boss_life <= 0) {
        sfSound_play(my_sprite->sound_crak.sound);
        animate_death(window, my_sprite);
    } else if (my_sprite->hp1 <= 0 || my_sprite->hp2 <= 0) {
        sfSound_play(my_sprite->sound_death.sound);
        window->scene = 11;
    }
}

void disp_fight_life(setup_t *window, draw_sprite_t *my_sprite)
{
    if (my_sprite->s_player.select == 1) {
        sfText_setString(my_sprite->text18.text, my_itoa(my_sprite->hp1));
        sfText_setPosition(my_sprite->text18.text, (sfVector2f) {280, 185});
        sfText_setColor(my_sprite->text18.text, sfBlack);
        sfRenderWindow_drawText(window->window, my_sprite->text18.text, NULL);
    } if (my_sprite->s_player.select == 2) {
        sfText_setString(my_sprite->text18.text, my_itoa(my_sprite->hp2));
        sfText_setPosition(my_sprite->text18.text, (sfVector2f) {280, 185});
        sfText_setColor(my_sprite->text18.text, sfBlack);
        sfRenderWindow_drawText(window->window, my_sprite->text18.text, NULL);
    }
}

void boss_turn(setup_t *window, draw_sprite_t *my_sprite)
{
    if (my_sprite->fight_turn == 1 && my_sprite->death == 0) {
        my_sprite->sboss.posi.x -= 10;
        if (my_sprite->sboss.posi.x <= 250) {
            sfSound_play(my_sprite->sound_hit.sound);
            if (my_sprite->s_player.select == 1)
                my_sprite->hp1 -= rand() % 4 + 3;
            if (my_sprite->s_player.select == 2)
                my_sprite->hp2 -= rand() % 4 + 3;
            my_sprite->fight_turn = 0;
            my_sprite->sboss.posi = (sfVector2f) {750, 580};
        }
    }
    if (my_sprite->boss_life < 80 && my_sprite->boss_life > 25)
        my_sprite->sboss.rect = (sfIntRect) {2066, 0, 212, 272};
    if (my_sprite->boss_life <= 25 && my_sprite->boss_life > 0)
        my_sprite->sboss.rect = (sfIntRect) {1886, 0, 185, 272};
    sfSprite_setPosition(my_sprite->sboss.s, my_sprite->sboss.posi);
    sfSprite_setTextureRect(my_sprite->sboss.s, my_sprite->sboss.rect);
    sfRenderWindow_drawSprite(window->window, my_sprite->sboss.s, NULL);
}

void disp_fight_map(setup_t *window, draw_sprite_t *my_sprite)
{
    sfRenderWindow_drawSprite(window->window, my_sprite->smap_boss.s, NULL);
    window->posi_mouse = sfMouse_getPositionRenderWindow(window->window);
    sfRenderWindow_drawSprite(window->window, my_sprite->smap_boss.s, NULL);
    sfRenderWindow_drawSprite(window->window, my_sprite->s_atack.s, NULL);
    sfRenderWindow_drawSprite(window->window, my_sprite->s_care.s, NULL);
    color_attack_care(window, my_sprite);
    click_attack_care(window, my_sprite);
    sfText_setString(my_sprite->text19.text, my_itoa(my_sprite->boss_life));
    sfText_setPosition(my_sprite->text19.text, (sfVector2f) {780, 185});
    sfText_setColor(my_sprite->text19.text, sfBlack);
    sfRenderWindow_drawText(window->window, my_sprite->text19.text, NULL);
    disp_fight_life(window, my_sprite);
    check_end(window, my_sprite);
    boss_turn(window, my_sprite);
    animate_persos_fight(window, my_sprite);
}