/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** collision_map_nature2.c
*/

#include "my_rpg.h"

void bush_fencing_collision2_chrono(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_chro2.posi.x >= 179 && my_sprite->s_chro2.posi.x <= 409)
    && my_sprite->s_chro2.posi.y == 300)
        my_sprite->s_chro2.stop_up = 1;
    if ((my_sprite->s_chro2.posi.y >= 68 && my_sprite->s_chro2.posi.y <= 300)
    && my_sprite->s_chro2.posi.x == 409)
        my_sprite->s_chro2.stop_left = 1;
    if ((my_sprite->s_chro2.posi.x >= 155 && my_sprite->s_chro2.posi.x <= 409)
    && my_sprite->s_chro2.posi.y == 68)
        my_sprite->s_chro2.stop_down = 1;
    if ((my_sprite->s_chro2.posi.y >= 68 && my_sprite->s_chro2.posi.y <= 300)
    && my_sprite->s_chro2.posi.x == 155)
        my_sprite->s_chro2.stop_right = 1;
}

void bush_fencing_collision(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_chro2.posi.x >= 155 && my_sprite->s_chro2.posi.x <= 389)
    && my_sprite->s_chro2.posi.y == 48)
        my_sprite->s_chro2.stop_up = 1;
    if ((my_sprite->s_chro2.posi.y >= 0 && my_sprite->s_chro2.posi.y <= 48)
    && my_sprite->s_chro2.posi.x == 389)
        my_sprite->s_chro2.stop_left = 1;
    if ((my_sprite->s_glen2.posi.x >= 154.5 && my_sprite->s_glen2.posi.x <= 387)
    && my_sprite->s_glen2.posi.y == 63)
        my_sprite->s_glen2.stop_up = 1;
    if ((my_sprite->s_glen2.posi.y >= 1.5 && my_sprite->s_glen2.posi.y <= 63)
    && my_sprite->s_glen2.posi.x == 387)
        my_sprite->s_glen2.stop_left = 1;
}

void water_collision_chrono(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_chro2.posi.x >= 137 && my_sprite->s_chro2.posi.x <= 219)
    && my_sprite->s_chro2.posi.y == 402)
        my_sprite->s_chro2.stop_down = 1;
    if ((my_sprite->s_chro2.posi.y >= 402 && my_sprite->s_chro2.posi.y <= 424)
    && my_sprite->s_chro2.posi.x == 219)
        my_sprite->s_chro2.stop_left = 1;
    if ((my_sprite->s_chro2.posi.x >= 219 && my_sprite->s_chro2.posi.x <= 281)
    && my_sprite->s_chro2.posi.y == 424)
        my_sprite->s_chro2.stop_down = 1;
    if ((my_sprite->s_chro2.posi.y >= 424 && my_sprite->s_chro2.posi.y <= 482)
    && my_sprite->s_chro2.posi.x == 281)
        my_sprite->s_chro2.stop_left = 1;
    if ((my_sprite->s_chro2.posi.x >= 281 && my_sprite->s_chro2.posi.x <= 343)
    && my_sprite->s_chro2.posi.y == 482)
        my_sprite->s_chro2.stop_down = 1;
    if ((my_sprite->s_chro2.posi.y >= 482 && my_sprite->s_chro2.posi.y <= 576)
    && my_sprite->s_chro2.posi.x == 343)
        my_sprite->s_chro2.stop_left = 1;
}