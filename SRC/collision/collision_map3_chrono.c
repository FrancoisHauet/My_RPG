/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** collision_map3_chrono.c
*/

#include "my_rpg.h"

void collision_map3_chrono3(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_chro2.posi.y >= 52 && my_sprite->s_chro2.posi.y <= 266)
    && my_sprite->s_chro2.posi.x == 879)
        my_sprite->s_chro2.stop_right = 1;
    if ((my_sprite->s_chro2.posi.y >= 52 && my_sprite->s_chro2.posi.y <= 266)
    && my_sprite->s_chro2.posi.x == 79)
        my_sprite->s_chro2.stop_left = 1;
    if ((my_sprite->s_chro2.posi.x >= 79 && my_sprite->s_chro2.posi.x <= 521)
    && my_sprite->s_chro2.posi.y == 222)
        my_sprite->s_chro2.stop_up = 1;
    if ((my_sprite->s_chro2.posi.x >= 567 && my_sprite->s_chro2.posi.x <= 879)
    && my_sprite->s_chro2.posi.y == 222)
        my_sprite->s_chro2.stop_up = 1;
    if ((my_sprite->s_chro2.posi.y >= 186 && my_sprite->s_chro2.posi.y <= 222)
    && my_sprite->s_chro2.posi.x == 521)
        my_sprite->s_chro2.stop_left = 1;
    if ((my_sprite->s_chro2.posi.y >= 186 && my_sprite->s_chro2.posi.y <= 222)
    && my_sprite->s_chro2.posi.x == 567)
        my_sprite->s_chro2.stop_right = 1;
    if ((my_sprite->s_chro2.posi.x >= 79 && my_sprite->s_chro2.posi.x <= 879)
    && my_sprite->s_chro2.posi.y == 52)
        my_sprite->s_chro2.stop_up = 1;
}

void collision_map3_chrono2(draw_sprite_t *my_sprite, setup_t *window)
{
    if ((my_sprite->s_chro2.posi.x >= 701 && my_sprite->s_chro2.posi.x <= 749)
    && my_sprite->s_chro2.posi.y == 754) {
        window->scene = 3;
        my_sprite->s_chro2.posi.x = 425;
        my_sprite->s_chro2.posi.y = 4;
    } if ((my_sprite->s_chro2.posi.y >= 266 && my_sprite->s_chro2.posi.y <= 422)
    && my_sprite->s_chro2.posi.x == 237)
        my_sprite->s_chro2.stop_left = 1;
    if ((my_sprite->s_chro2.posi.y >= 266 && my_sprite->s_chro2.posi.y <= 382)
    && my_sprite->s_chro2.posi.x == 283)
        my_sprite->s_chro2.stop_right = 1;
    if ((my_sprite->s_chro2.posi.x >= 79 && my_sprite->s_chro2.posi.x <= 237)
    && my_sprite->s_chro2.posi.y == 266)
        my_sprite->s_chro2.stop_down = 1;
    if ((my_sprite->s_chro2.posi.x >= 283 && my_sprite->s_chro2.posi.x <= 879)
    && my_sprite->s_chro2.posi.y == 266)
        my_sprite->s_chro2.stop_down = 1;
    if (my_sprite->s_chro2.posi.y == 220) {
        window->scene = 8;
        play_music_fight(my_sprite);
    }
}

void collision_map3_chrono(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_chro2.posi.x >= 283 && my_sprite->s_chro2.posi.x <= 749)
    && my_sprite->s_chro2.posi.y == 382)
        my_sprite->s_chro2.stop_up = 1;
    else
        my_sprite->s_chro2.stop_up = 0;
    if ((my_sprite->s_chro2.posi.y >= 382 && my_sprite->s_chro2.posi.y <= 754)
    && my_sprite->s_chro2.posi.x == 749)
        my_sprite->s_chro2.stop_right = 1;
    else
        my_sprite->s_chro2.stop_right = 0;
    if ((my_sprite->s_chro2.posi.x >= 237 && my_sprite->s_chro2.posi.x <= 701)
    && my_sprite->s_chro2.posi.y == 422)
        my_sprite->s_chro2.stop_down = 1;
    else
        my_sprite->s_chro2.stop_down = 0;
    if ((my_sprite->s_chro2.posi.y >= 422 && my_sprite->s_chro2.posi.y <= 754)
    && my_sprite->s_chro2.posi.x == 701)
        my_sprite->s_chro2.stop_left = 1;
    else
        my_sprite->s_chro2.stop_left = 0;
}