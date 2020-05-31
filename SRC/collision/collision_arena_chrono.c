/*
** EPITECH PROJECT, 2019
** my_RPG
** File description:
** collision_arena_chrono.c
*/

#include "my_rpg.h"

void collision_woman_chrono(draw_sprite_t *my_sprite, setup_t *window)
{
    if ((my_sprite->s_chro.posi.y >= 46 && my_sprite->s_chro.posi.y <= 80)
    && my_sprite->s_chro.posi.x == 432)
        my_sprite->s_chro.stop_right = 1;
    if ((my_sprite->s_chro.posi.y >= 46 && my_sprite->s_chro.posi.y <= 80)
    && my_sprite->s_chro.posi.x == 506)
        my_sprite->s_chro.stop_left = 1;
    if ((my_sprite->s_chro.posi.x >= 433 && my_sprite->s_chro.posi.x <= 505)
    && my_sprite->s_chro.posi.y == 80)
        my_sprite->s_chro.stop_up = 1;
    if ((my_sprite->s_chro.posi.x >= 442 && my_sprite->s_chro.posi.x <= 594)
    && my_sprite->s_chro.posi.y == 742) {
        sfSound_play(my_sprite->sound_dor.sound);
        window->scene = 5;
        my_sprite->s_chro2.posi.x = 237;
        my_sprite->s_chro2.posi.y = 150;
    }
}

void collision_end_chrono(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_chro.posi.y >= 136 && my_sprite->s_chro.posi.y <= 176)
    && my_sprite->s_chro.posi.x == 456)
        my_sprite->s_chro.stop_left = 1;
    if ((my_sprite->s_chro.posi.y >= 136 && my_sprite->s_chro.posi.y <= 176)
    && my_sprite->s_chro.posi.x == 484)
        my_sprite->s_chro.stop_right = 1;
    if ((my_sprite->s_chro.posi.x >= 432 && my_sprite->s_chro.posi.x <= 456)
    && my_sprite->s_chro.posi.y == 136)
        my_sprite->s_chro.stop_down = 1;
    if ((my_sprite->s_chro.posi.x >= 484 && my_sprite->s_chro.posi.x <= 506)
    && my_sprite->s_chro.posi.y == 136)
        my_sprite->s_chro.stop_down = 1;
    if ((my_sprite->s_chro.posi.y >= 46 && my_sprite->s_chro.posi.y <= 136)
    && my_sprite->s_chro.posi.x == 432)
        my_sprite->s_chro.stop_left = 1;
    if ((my_sprite->s_chro.posi.y >= 46 && my_sprite->s_chro.posi.y <= 136)
    && my_sprite->s_chro.posi.x == 506)
        my_sprite->s_chro.stop_right = 1;
    if ((my_sprite->s_chro.posi.x >= 432 && my_sprite->s_chro.posi.x <= 506)
    && my_sprite->s_chro.posi.y == 46)
        my_sprite->s_chro.stop_up = 1;
}

void collision_enter_chrono_right(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_chro.posi.x >= 542 && my_sprite->s_chro.posi.x <= 586)
    && my_sprite->s_chro.posi.y == 658)
        my_sprite->s_chro.stop_down = 1;
    if ((my_sprite->s_chro.posi.y >= 620 && my_sprite->s_chro.posi.y <= 658)
    && my_sprite->s_chro.posi.x == 586)
        my_sprite->s_chro.stop_right = 1;
    if ((my_sprite->s_chro.posi.x >= 586 && my_sprite->s_chro.posi.x <= 840)
    && my_sprite->s_chro.posi.y == 620)
        my_sprite->s_chro.stop_down = 1;
    if ((my_sprite->s_chro.posi.y >= 580 && my_sprite->s_chro.posi.y <= 620)
    && my_sprite->s_chro.posi.x == 840)
        my_sprite->s_chro.stop_right = 1;
    if ((my_sprite->s_chro.posi.x >= 654 && my_sprite->s_chro.posi.x <= 840)
    && my_sprite->s_chro.posi.y == 580)
        my_sprite->s_chro.stop_up = 1;
    if ((my_sprite->s_chro.posi.y >= 580 && my_sprite->s_chro.posi.y <= 604)
    && my_sprite->s_chro.posi.x == 654)
        my_sprite->s_chro.stop_left = 1;
    if ((my_sprite->s_chro.posi.x >= 488 && my_sprite->s_chro.posi.x <= 654)
    && my_sprite->s_chro.posi.y == 604)
        my_sprite->s_chro.stop_up = 1;
}

void collision_enter_chrono_left(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_chro.posi.x >= 346 && my_sprite->s_chro.posi.x <= 394)
    && my_sprite->s_chro.posi.y == 656)
        my_sprite->s_chro.stop_down = 1;
    if ((my_sprite->s_chro.posi.y >= 620 && my_sprite->s_chro.posi.y <= 656)
    && my_sprite->s_chro.posi.x == 346)
        my_sprite->s_chro.stop_left = 1;
    if ((my_sprite->s_chro.posi.x >= 96 && my_sprite->s_chro.posi.x <= 346)
    && my_sprite->s_chro.posi.y == 620)
        my_sprite->s_chro.stop_down = 1;
    if ((my_sprite->s_chro.posi.y >= 576 && my_sprite->s_chro.posi.y <= 620)
    && my_sprite->s_chro.posi.x == 96)
        my_sprite->s_chro.stop_left = 1;
    if ((my_sprite->s_chro.posi.x >= 96 && my_sprite->s_chro.posi.x <= 288)
    && my_sprite->s_chro.posi.y == 576)
        my_sprite->s_chro.stop_up = 1;
    if ((my_sprite->s_chro.posi.y >= 576 && my_sprite->s_chro.posi.y <= 604)
    && my_sprite->s_chro.posi.x == 288)
        my_sprite->s_chro.stop_right = 1;
    if ((my_sprite->s_chro.posi.y >= 552 && my_sprite->s_chro.posi.y <= 604)
    && my_sprite->s_chro.posi.x == 452)
        my_sprite->s_chro.stop_left = 1;
}

void collision_init_chrono(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_chro.posi.x >= 394 && my_sprite->s_chro.posi.x <= 542)
    && my_sprite->s_chro.posi.y == 742)
        my_sprite->s_chro.stop_down = 1;
    else
        my_sprite->s_chro.stop_down = 0;
    if ((my_sprite->s_chro.posi.y >= 658 && my_sprite->s_chro.posi.y <= 742)
    && my_sprite->s_chro.posi.x == 394)
        my_sprite->s_chro.stop_left = 1;
    else
        my_sprite->s_chro.stop_left = 0;
    if ((my_sprite->s_chro.posi.y >= 658 && my_sprite->s_chro.posi.y <= 742)
    && my_sprite->s_chro.posi.x == 542)
        my_sprite->s_chro.stop_right = 1;
    else
        my_sprite->s_chro.stop_right = 0;
    if ((my_sprite->s_chro.posi.x >= 288 && my_sprite->s_chro.posi.x <= 452)
    && my_sprite->s_chro.posi.y == 604)
        my_sprite->s_chro.stop_up = 1;
    else
        my_sprite->s_chro.stop_up = 0;
}