/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** collision_arena_glenn.c
*/

#include "my_rpg.h"

void collision_woman_glenn(draw_sprite_t *my_sprite, setup_t *window)
{
    if ((my_sprite->s_glenn.posi.y >= 79 &&
    my_sprite->s_glenn.posi.y <= 107.5) && my_sprite->s_glenn.posi.x == 435.5)
        my_sprite->s_glenn.stop_right = 1;
    if ((my_sprite->s_glenn.posi.y >= 79 &&
    my_sprite->s_glenn.posi.y <= 107.5) && my_sprite->s_glenn.posi.x == 506)
        my_sprite->s_glenn.stop_left = 1;
    if ((my_sprite->s_glenn.posi.x >= 437 &&
    my_sprite->s_glenn.posi.x <= 504.5) && my_sprite->s_glenn.posi.y == 107.5)
        my_sprite->s_glenn.stop_up = 1;
    if ((my_sprite->s_glenn.posi.x >= 442 &&
    my_sprite->s_glenn.posi.x <= 497) && my_sprite->s_glenn.posi.y == 764.5) {
        sfSound_play(my_sprite->sound_dor.sound);
        window->scene = 5;
        my_sprite->s_glen2.posi.x = 240.5;
        my_sprite->s_glen2.posi.y = 159.5;
    }
}

void collision_end_glenn(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_glenn.posi.y >= 160 &&
    my_sprite->s_glenn.posi.y <= 202) && my_sprite->s_glenn.posi.x == 455)
        my_sprite->s_glenn.stop_left = 1;
    if ((my_sprite->s_glenn.posi.y >= 160 &&
    my_sprite->s_glenn.posi.y <= 202) && my_sprite->s_glenn.posi.x == 485)
        my_sprite->s_glenn.stop_right = 1;
    if ((my_sprite->s_glenn.posi.x >= 435.5 &&
    my_sprite->s_glenn.posi.x <= 455) && my_sprite->s_glenn.posi.y == 160)
        my_sprite->s_glenn.stop_down = 1;
    if ((my_sprite->s_glenn.posi.x >= 485 &&
    my_sprite->s_glenn.posi.x <= 506) && my_sprite->s_glenn.posi.y == 160)
        my_sprite->s_glenn.stop_down = 1;
    if ((my_sprite->s_glenn.posi.y >= 79 &&
    my_sprite->s_glenn.posi.y <= 160) && my_sprite->s_glenn.posi.x == 435.5)
        my_sprite->s_glenn.stop_left = 1;
    if ((my_sprite->s_glenn.posi.y >= 79 &&
    my_sprite->s_glenn.posi.y <= 160) && my_sprite->s_glenn.posi.x == 506)
        my_sprite->s_glenn.stop_right = 1;
    if ((my_sprite->s_glenn.posi.x >= 435.5 &&
    my_sprite->s_glenn.posi.x <= 506) && my_sprite->s_glenn.posi.y == 79)
        my_sprite->s_glenn.stop_up = 1;
}

void collision_enter_glenn_right(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_glenn.posi.x >= 539 &&
    my_sprite->s_glenn.posi.x <= 588.5) && my_sprite->s_glenn.posi.y == 680.5)
        my_sprite->s_glenn.stop_down = 1;
    if ((my_sprite->s_glenn.posi.y >= 643 &&
    my_sprite->s_glenn.posi.y <= 680.5) && my_sprite->s_glenn.posi.x == 588.5)
        my_sprite->s_glenn.stop_right = 1;
    if ((my_sprite->s_glenn.posi.x >= 588.5 &&
    my_sprite->s_glenn.posi.x <= 839) && my_sprite->s_glenn.posi.y == 643)
        my_sprite->s_glenn.stop_down = 1;
    if ((my_sprite->s_glenn.posi.y >= 602.5 &&
    my_sprite->s_glenn.posi.y <= 643) && my_sprite->s_glenn.posi.x == 839)
        my_sprite->s_glenn.stop_right = 1;
    if ((my_sprite->s_glenn.posi.x >= 654 &&
    my_sprite->s_glenn.posi.x <= 839) && my_sprite->s_glenn.posi.y == 602.5)
        my_sprite->s_glenn.stop_up = 1;
    if ((my_sprite->s_glenn.posi.y >= 602.5 &&
    my_sprite->s_glenn.posi.y <= 625) && my_sprite->s_glenn.posi.x == 654.5)
        my_sprite->s_glenn.stop_left = 1;
    if ((my_sprite->s_glenn.posi.x >= 483.5 &&
    my_sprite->s_glenn.posi.x <= 654) && my_sprite->s_glenn.posi.y == 625)
        my_sprite->s_glenn.stop_up = 1;
}

void collision_enter_glenn_left(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_glenn.posi.x >= 345.5 &&
    my_sprite->s_glenn.posi.x <= 392) && my_sprite->s_glenn.posi.y == 680.5)
        my_sprite->s_glenn.stop_down = 1;
    if ((my_sprite->s_glenn.posi.y >= 643 &&
    my_sprite->s_glenn.posi.y <= 680.5) && my_sprite->s_glenn.posi.x == 345.5)
        my_sprite->s_glenn.stop_left = 1;
    if ((my_sprite->s_glenn.posi.x >= 96.5 &&
    my_sprite->s_glenn.posi.x <= 345.5) && my_sprite->s_glenn.posi.y == 643)
        my_sprite->s_glenn.stop_down = 1;
    if ((my_sprite->s_glenn.posi.y >= 602.5 &&
    my_sprite->s_glenn.posi.y <= 643) && my_sprite->s_glenn.posi.x == 96.5)
        my_sprite->s_glenn.stop_left = 1;
    if ((my_sprite->s_glenn.posi.x >= 96.5 &&
    my_sprite->s_glenn.posi.x <= 300) && my_sprite->s_glenn.posi.y == 602.5)
        my_sprite->s_glenn.stop_up = 1;
    if ((my_sprite->s_glenn.posi.y >= 602.5 &&
    my_sprite->s_glenn.posi.y <= 625) && my_sprite->s_glenn.posi.x == 288.5)
        my_sprite->s_glenn.stop_right = 1;
    if ((my_sprite->s_glenn.posi.y >= 575.5 &&
    my_sprite->s_glenn.posi.y <= 625) && my_sprite->s_glenn.posi.x == 447.5)
        my_sprite->s_glenn.stop_left = 1;
}

void collision_init_glenn(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_glenn.posi.x >= 392 &&
    my_sprite->s_glenn.posi.x <= 539) && my_sprite->s_glenn.posi.y == 767.5)
        my_sprite->s_glenn.stop_down = 1;
    else
        my_sprite->s_glenn.stop_down = 0;
    if ((my_sprite->s_glenn.posi.y >= 680.5 &&
    my_sprite->s_glenn.posi.y <= 767.5) && my_sprite->s_glenn.posi.x == 392)
        my_sprite->s_glenn.stop_left = 1;
    else
        my_sprite->s_glenn.stop_left = 0;
    if ((my_sprite->s_glenn.posi.y >= 680.5 &&
    my_sprite->s_glenn.posi.y <= 767.5) && my_sprite->s_glenn.posi.x == 539)
        my_sprite->s_glenn.stop_right = 1;
    else
        my_sprite->s_glenn.stop_right = 0;
    if ((my_sprite->s_glenn.posi.x >= 297.5 &&
    my_sprite->s_glenn.posi.x <= 447.5) && my_sprite->s_glenn.posi.y == 625)
        my_sprite->s_glenn.stop_up = 1;
    else
        my_sprite->s_glenn.stop_up = 0;
}