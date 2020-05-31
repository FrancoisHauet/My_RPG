/*
** EPITECH PROJECT, 2019
** my_RPG
** File description:
** text_arena.c
*/

#include "my_rpg.h"

void draw_text_countdown_arena2(setup_t *window, draw_sprite_t *my_sprite)
{
    if (my_sprite->text_numb2 == 5) {
        sfText_setString(my_sprite->text10.text, "1");
        sfText_setPosition(my_sprite->text10.text, (sfVector2f) {480, 40});
        sfText_setColor(my_sprite->text10.text, sfBlack);
        sfRenderWindow_drawText(window->window, my_sprite->text10.text, NULL);
        my_sprite->timer++;
        if (my_sprite->timer >= 50) {
            my_sprite->text_numb2 = 6;
            my_sprite->timer = 0;
        }
    }
}

void draw_text_countdown_arena(setup_t *window, draw_sprite_t *my_sprite)
{
    if (my_sprite->text_numb2 == 4) {
        sfText_setString(my_sprite->text9.text, "2");
        sfText_setPosition(my_sprite->text9.text, (sfVector2f) {480, 40});
        sfText_setColor(my_sprite->text9.text, sfBlack);
        sfRenderWindow_drawText(window->window, my_sprite->text9.text, NULL);
        my_sprite->timer++;
        if (my_sprite->timer >= 50) {
            my_sprite->text_numb2 = 5;
            my_sprite->timer = 0;
        }
    } if (my_sprite->text_numb2 == 3) {
        sfText_setString(my_sprite->text8.text, "3");
        sfText_setPosition(my_sprite->text8.text, (sfVector2f) {480, 40});
        sfText_setColor(my_sprite->text8.text, sfBlack);
        sfRenderWindow_drawText(window->window, my_sprite->text8.text, NULL);
        my_sprite->timer++;
        if (my_sprite->timer >= 50) {
            my_sprite->text_numb2 = 4;
            my_sprite->timer = 0;
        }
    }
}

void draw_text_game_arena(setup_t *window, draw_sprite_t *my_sprite)
{
    if (my_sprite->text_numb2 == 2) {
        sfText_setString(my_sprite->text6.text,
        "AU PIERRE, PAPIER, CISEAUX\n");
        sfText_setPosition(my_sprite->text6.text, (sfVector2f) {270, 40});
        sfText_setColor(my_sprite->text6.text, sfBlack);
        sfRenderWindow_drawText(window->window, my_sprite->text6.text, NULL);
        sfText_setString(my_sprite->text7.text,
        "(Pour jouer il suffit de d'appuyer sur la touche 1 2 ou 3\n"
        "Avant que je reponde)");
        sfText_setPosition(my_sprite->text7.text, (sfVector2f) {160, 65});
        sfText_setColor(my_sprite->text7.text, sfBlack);
        sfRenderWindow_drawText(window->window, my_sprite->text7.text, NULL);
        my_sprite->button = 1;
        my_sprite->timer++;
        if (sfKeyboard_isKeyPressed(sfKeySpace) && my_sprite->timer >= 50) {
            my_sprite->text_numb2 = 3;
            my_sprite->timer = 0;
        }
    }
}

void draw_text_recover_chrono_arena(setup_t *window, draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_chro.posi.x >= 456 && my_sprite->s_chro.posi.x <= 484)
    && (my_sprite->s_chro.posi.y >= 40 && my_sprite->s_chro.posi.y <= 142)
    && my_sprite->text_numb2 != 2) {
        sfText_setString(my_sprite->text5.text,
        "Tu es la pour recuperer l'epee\nPour l'avoir il faut me battre");
        sfText_setPosition(my_sprite->text5.text, (sfVector2f) {225, 30});
        sfText_setColor(my_sprite->text5.text, sfBlack);
        sfRenderWindow_drawText(window->window, my_sprite->text5.text, NULL);
        my_sprite->text_numb2 = 1;
        if (sfKeyboard_isKeyPressed(sfKeySpace))
            my_sprite->text_numb2 = 2;
    }
}

void draw_text_enter_arena(setup_t *window, draw_sprite_t *my_sprite)
{
    if (my_sprite->text_numb2 == 0) {
        if (my_sprite->s_player.select == 2)
            sfText_setString(my_sprite->text4.text,
            "Glenn, tu es enfin la. Viens me voir");
        else
            sfText_setString(my_sprite->text4.text,
            "Chrono, tu es enfin la. Viens me voir");
        sfText_setPosition(my_sprite->text4.text, (sfVector2f) {160, 50});
        sfText_setColor(my_sprite->text4.text, sfBlack);
        sfRenderWindow_drawText(window->window, my_sprite->text4.text, NULL);
    }
}