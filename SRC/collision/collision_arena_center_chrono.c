/*
** EPITECH PROJECT, 2019
** my_RPG
** File description:
** collision_arena_center_chrono.c
*/

#include "my_rpg.h"

void collision_center_chrono5(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_chro.posi.y >= 496 && my_sprite->s_chro.posi.y <= 526)
    && my_sprite->s_chro.posi.x == 624)
        my_sprite->s_chro.stop_right = 1;
    if ((my_sprite->s_chro.posi.x >= 586 && my_sprite->s_chro.posi.x <= 624)
    && my_sprite->s_chro.posi.y == 526)
        my_sprite->s_chro.stop_down = 1;
    if ((my_sprite->s_chro.posi.y >= 526 && my_sprite->s_chro.posi.y <= 552)
    && my_sprite->s_chro.posi.x == 586)
        my_sprite->s_chro.stop_right = 1;
    if ((my_sprite->s_chro.posi.x >= 488 && my_sprite->s_chro.posi.x <= 586)
    && my_sprite->s_chro.posi.y == 552)
        my_sprite->s_chro.stop_down = 1;
}

void collision_center_chrono4(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_chro.posi.x >= 624 && my_sprite->s_chro.posi.x <= 664)
    && my_sprite->s_chro.posi.y == 236)
        my_sprite->s_chro.stop_up = 1;
    if ((my_sprite->s_chro.posi.y >= 236 && my_sprite->s_chro.posi.y <= 266)
    && my_sprite->s_chro.posi.x == 664)
        my_sprite->s_chro.stop_right = 1;
    if ((my_sprite->s_chro.posi.x >= 664 && my_sprite->s_chro.posi.x <= 702)
    && my_sprite->s_chro.posi.y == 266)
        my_sprite->s_chro.stop_up = 1;
    if ((my_sprite->s_chro.posi.y >= 266 && my_sprite->s_chro.posi.y <= 464)
    && my_sprite->s_chro.posi.x == 702)
        my_sprite->s_chro.stop_right = 1;
    if ((my_sprite->s_chro.posi.x >= 664 && my_sprite->s_chro.posi.x <= 702)
    && my_sprite->s_chro.posi.y == 464)
        my_sprite->s_chro.stop_down = 1;
    if ((my_sprite->s_chro.posi.y >= 464 && my_sprite->s_chro.posi.y <= 496)
    && my_sprite->s_chro.posi.x == 664)
        my_sprite->s_chro.stop_right = 1;
    if ((my_sprite->s_chro.posi.x >= 624 && my_sprite->s_chro.posi.x <= 664)
    && my_sprite->s_chro.posi.y == 496)
        my_sprite->s_chro.stop_down = 1;
}

void collision_center_chrono3(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_chro.posi.x >= 310 && my_sprite->s_chro.posi.x <= 350)
    && my_sprite->s_chro.posi.y == 208)
        my_sprite->s_chro.stop_up = 1;
    if ((my_sprite->s_chro.posi.y >= 176 && my_sprite->s_chro.posi.y <= 208)
    && my_sprite->s_chro.posi.x == 350)
        my_sprite->s_chro.stop_left = 1;
    if ((my_sprite->s_chro.posi.x >= 350 && my_sprite->s_chro.posi.x <= 456)
    && my_sprite->s_chro.posi.y == 176)
        my_sprite->s_chro.stop_up = 1;
    if ((my_sprite->s_chro.posi.x >= 484 && my_sprite->s_chro.posi.x <= 586)
    && my_sprite->s_chro.posi.y == 176)
        my_sprite->s_chro.stop_up = 1;
    if ((my_sprite->s_chro.posi.y >= 176 && my_sprite->s_chro.posi.y <= 208)
    && my_sprite->s_chro.posi.x == 586)
        my_sprite->s_chro.stop_right = 1;
    if ((my_sprite->s_chro.posi.x >= 586 && my_sprite->s_chro.posi.x <= 624)
    && my_sprite->s_chro.posi.y == 208)
        my_sprite->s_chro.stop_up = 1;
    if ((my_sprite->s_chro.posi.y >= 208 && my_sprite->s_chro.posi.y <= 236)
    && my_sprite->s_chro.posi.x == 624)
        my_sprite->s_chro.stop_right = 1;
}

void collision_center_chrono2(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_chro.posi.y >= 464 && my_sprite->s_chro.posi.y <= 496)
    && my_sprite->s_chro.posi.x == 274)
        my_sprite->s_chro.stop_left = 1;
    if ((my_sprite->s_chro.posi.x >= 236 && my_sprite->s_chro.posi.x <= 274)
    && my_sprite->s_chro.posi.y == 464)
        my_sprite->s_chro.stop_down = 1;
    if ((my_sprite->s_chro.posi.y >= 266 && my_sprite->s_chro.posi.y <= 464)
    && my_sprite->s_chro.posi.x == 240)
        my_sprite->s_chro.stop_left = 1;
    if ((my_sprite->s_chro.posi.x >= 240 && my_sprite->s_chro.posi.x <= 272)
    && my_sprite->s_chro.posi.y == 266)
        my_sprite->s_chro.stop_up = 1;
    if ((my_sprite->s_chro.posi.y >= 236 && my_sprite->s_chro.posi.y <= 266)
    && my_sprite->s_chro.posi.x == 272)
        my_sprite->s_chro.stop_left = 1;
    if ((my_sprite->s_chro.posi.x >= 272 && my_sprite->s_chro.posi.x <= 310)
    && my_sprite->s_chro.posi.y == 236)
        my_sprite->s_chro.stop_up = 1;
    if ((my_sprite->s_chro.posi.y >= 208 && my_sprite->s_chro.posi.y <= 236)
    && my_sprite->s_chro.posi.x == 310)
        my_sprite->s_chro.stop_left = 1;
}

void collision_center_chrono(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_chro.posi.y >= 552 && my_sprite->s_chro.posi.y <= 604)
    && my_sprite->s_chro.posi.x == 488)
        my_sprite->s_chro.stop_right = 1;
    if ((my_sprite->s_chro.posi.x >= 288 && my_sprite->s_chro.posi.x <= 452)
    && my_sprite->s_chro.posi.y == 552)
        my_sprite->s_chro.stop_down = 1;
    if ((my_sprite->s_chro.posi.y >= 526 && my_sprite->s_chro.posi.y <= 552)
    && my_sprite->s_chro.posi.x == 350)
        my_sprite->s_chro.stop_left = 1;
    if ((my_sprite->s_chro.posi.x >= 312 && my_sprite->s_chro.posi.x <= 350)
    && my_sprite->s_chro.posi.y == 526)
        my_sprite->s_chro.stop_down = 1;
    if ((my_sprite->s_chro.posi.y >= 496 && my_sprite->s_chro.posi.y <= 526)
    && my_sprite->s_chro.posi.x == 312)
        my_sprite->s_chro.stop_left = 1;
    if ((my_sprite->s_chro.posi.x >= 274 && my_sprite->s_chro.posi.x <= 312)
    && my_sprite->s_chro.posi.y == 496)
        my_sprite->s_chro.stop_down = 1;
}