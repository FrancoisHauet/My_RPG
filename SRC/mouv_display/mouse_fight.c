/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** mouse_fight.c
*/

#include "my_rpg.h"

void click_retry(setup_t *window, draw_sprite_t *my_sprite)
{
    if (window->event.type == sfEvtMouseButtonPressed) {
        if (window->posi_mouse.x > my_sprite->s_retry.posi.x &&
        window->posi_mouse.x < my_sprite->s_retry.posi.x + 210 &&
        window->posi_mouse.y > my_sprite->s_retry.posi.y &&
        window->posi_mouse.y < my_sprite->s_retry.posi.y + 64) {
            window->scene = 1;
            my_sprite->s_glenn.posi.x = 690;
            my_sprite->s_glenn.posi.y = 190;
            my_sprite->s_chro.posi.x = 690;
            my_sprite->s_chro.posi.y = 190;
            sfMusic_stop(my_sprite->musicf.music);
            init_txt_hud(my_sprite);
            init_scene(window, my_sprite);
        }
    }
}

void color_retry(setup_t *window, draw_sprite_t *my_sprite)
{
    if (window->posi_mouse.x > my_sprite->s_retry.posi.x &&
        window->posi_mouse.x < my_sprite->s_retry.posi.x + 210 &&
        window->posi_mouse.y > my_sprite->s_retry.posi.y &&
        window->posi_mouse.y < my_sprite->s_retry.posi.y + 66)
        my_sprite->s_retry.rect.top = 66;
    else
        my_sprite->s_retry.rect.top = 0;
    sfSprite_setTextureRect(my_sprite->s_retry.s, my_sprite->s_retry.rect);
}

void color_attack_care(setup_t *window, draw_sprite_t *my_sprite)
{
    if (window->posi_mouse.x > my_sprite->s_atack.posi.x &&
        window->posi_mouse.x < my_sprite->s_atack.posi.x + 176
        && window->posi_mouse.y > my_sprite->s_atack.posi.y &&
        window->posi_mouse.y < my_sprite->s_atack.posi.y + 40)
        my_sprite->s_atack.rect.top = 40;
    else
        my_sprite->s_atack.rect.top = 0;
    sfSprite_setTextureRect(my_sprite->s_atack.s, my_sprite->s_atack.rect);
    if (window->posi_mouse.x > my_sprite->s_care.posi.x &&
        window->posi_mouse.x < my_sprite->s_care.posi.x + 92 &&
        window->posi_mouse.y > my_sprite->s_care.posi.y &&
        window->posi_mouse.y < my_sprite->s_care.posi.y + 42)
        my_sprite->s_care.rect.top = 32;
    else
        my_sprite->s_care.rect.top = 0;
    sfSprite_setTextureRect(my_sprite->s_care.s, my_sprite->s_care.rect);
}

void click_attack_care(setup_t *window, draw_sprite_t *my_sprite)
{
    if (window->event.type == sfEvtMouseButtonPressed) {
        if (window->posi_mouse.x > my_sprite->s_atack.posi.x &&
            window->posi_mouse.x < my_sprite->s_atack.posi.x + 176
            && window->posi_mouse.y > my_sprite->s_atack.posi.y &&
            window->posi_mouse.y < my_sprite->s_atack.posi.y + 40 &&
            my_sprite->anim_fight == 0 && my_sprite->fight_turn == 0) {
                my_sprite->anim_fight = 1;
            }
        }
    if (window->event.type == sfEvtMouseButtonPressed) {
        if (window->posi_mouse.x > my_sprite->s_care.posi.x &&
        window->posi_mouse.x < my_sprite->s_care.posi.x + 92 &&
        window->posi_mouse.y > my_sprite->s_care.posi.y &&
        window->posi_mouse.y < my_sprite->s_care.posi.y + 42 &&
        my_sprite->anim_fight == 0 && my_sprite->fight_turn == 0) {
            sfSound_play(my_sprite->sound_health.sound);
            my_sprite->hp1 += rand() % 5 + 4;
            my_sprite->hp2 += rand() % 5 + 4;
            my_sprite->fight_turn = 1;
        }
    }
}