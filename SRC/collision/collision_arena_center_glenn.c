/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** collision_arena_center_glenn.c
*/

#include "my_rpg.h"

void collision_center_glenn5(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_glenn.posi.y >= 524.5 &&
    my_sprite->s_glenn.posi.y <= 550) && my_sprite->s_glenn.posi.x == 627.5)
        my_sprite->s_glenn.stop_right = 1;
    if ((my_sprite->s_glenn.posi.x >= 593 &&
    my_sprite->s_glenn.posi.x <= 627.5) && my_sprite->s_glenn.posi.y == 550)
        my_sprite->s_glenn.stop_down = 1;
    if ((my_sprite->s_glenn.posi.y >= 550 &&
    my_sprite->s_glenn.posi.y <= 578.5) && my_sprite->s_glenn.posi.x == 593)
        my_sprite->s_glenn.stop_right = 1;
    if ((my_sprite->s_glenn.posi.x >= 483.5 &&
    my_sprite->s_glenn.posi.x <= 593) && my_sprite->s_glenn.posi.y == 578.5)
        my_sprite->s_glenn.stop_down = 1;
}

void collision_center_glenn4(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_glenn.posi.x >= 630.5 &&
    my_sprite->s_glenn.posi.x <= 668) && my_sprite->s_glenn.posi.y == 257.5)
        my_sprite->s_glenn.stop_up = 1;
    if ((my_sprite->s_glenn.posi.y >= 257.5 &&
    my_sprite->s_glenn.posi.y <= 289) && my_sprite->s_glenn.posi.x == 668)
        my_sprite->s_glenn.stop_right = 1;
    if ((my_sprite->s_glenn.posi.x >= 668 &&
    my_sprite->s_glenn.posi.x <= 702.5) && my_sprite->s_glenn.posi.y == 289)
        my_sprite->s_glenn.stop_up = 1;
    if ((my_sprite->s_glenn.posi.y >= 289 &&
    my_sprite->s_glenn.posi.y <= 493) && my_sprite->s_glenn.posi.x == 702.5)
        my_sprite->s_glenn.stop_right = 1;
    if ((my_sprite->s_glenn.posi.x >= 663.5 &&
    my_sprite->s_glenn.posi.x <= 702.5) && my_sprite->s_glenn.posi.y == 493)
        my_sprite->s_glenn.stop_down = 1;
    if ((my_sprite->s_glenn.posi.y >= 493 &&
    my_sprite->s_glenn.posi.y <= 524.5) && my_sprite->s_glenn.posi.x == 663.5)
        my_sprite->s_glenn.stop_right = 1;
    if ((my_sprite->s_glenn.posi.x >= 627.5 &&
    my_sprite->s_glenn.posi.x <= 663.5) && my_sprite->s_glenn.posi.y == 524.5)
        my_sprite->s_glenn.stop_down = 1;
}

void collision_center_glenn3(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_glenn.posi.x >= 314 &&
    my_sprite->s_glenn.posi.x <= 351.5) && my_sprite->s_glenn.posi.y == 233.5)
        my_sprite->s_glenn.stop_up = 1;
    if ((my_sprite->s_glenn.posi.y >= 202 &&
    my_sprite->s_glenn.posi.y <= 233.5) && my_sprite->s_glenn.posi.x == 351.5)
        my_sprite->s_glenn.stop_left = 1;
    if ((my_sprite->s_glenn.posi.x >= 351 &&
    my_sprite->s_glenn.posi.x <= 455) && my_sprite->s_glenn.posi.y == 202)
        my_sprite->s_glenn.stop_up = 1;
    if ((my_sprite->s_glenn.posi.x >= 485 &&
    my_sprite->s_glenn.posi.x <= 590) && my_sprite->s_glenn.posi.y == 202)
        my_sprite->s_glenn.stop_up = 1;
    if ((my_sprite->s_glenn.posi.y >= 202 &&
    my_sprite->s_glenn.posi.y <= 232) && my_sprite->s_glenn.posi.x == 590)
        my_sprite->s_glenn.stop_right = 1;
    if ((my_sprite->s_glenn.posi.x >= 590 &&
    my_sprite->s_glenn.posi.x <= 630.5) && my_sprite->s_glenn.posi.y == 232)
        my_sprite->s_glenn.stop_up = 1;
    if ((my_sprite->s_glenn.posi.y >= 232 &&
    my_sprite->s_glenn.posi.y <= 257.5) && my_sprite->s_glenn.posi.x == 630.5)
        my_sprite->s_glenn.stop_right = 1;
}

void collision_center_glenn2(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_glenn.posi.y >= 491.5 &&
    my_sprite->s_glenn.posi.y <= 521.5) && my_sprite->s_glenn.posi.x == 273.5)
        my_sprite->s_glenn.stop_left = 1;
    if ((my_sprite->s_glenn.posi.x >= 239 &&
    my_sprite->s_glenn.posi.x <= 273.5) && my_sprite->s_glenn.posi.y == 491.5)
        my_sprite->s_glenn.stop_down = 1;
    if ((my_sprite->s_glenn.posi.y >= 293.5 &&
    my_sprite->s_glenn.posi.y <= 491.5) && my_sprite->s_glenn.posi.x == 239)
        my_sprite->s_glenn.stop_left = 1;
    if ((my_sprite->s_glenn.posi.x >= 239 &&
    my_sprite->s_glenn.posi.x <= 273.5) && my_sprite->s_glenn.posi.y == 293.5)
        my_sprite->s_glenn.stop_up = 1;
    if ((my_sprite->s_glenn.posi.y >= 263.5 &&
    my_sprite->s_glenn.posi.y <= 293.5) && my_sprite->s_glenn.posi.x == 273.5)
        my_sprite->s_glenn.stop_left = 1;
    if ((my_sprite->s_glenn.posi.x >= 273.5 &&
    my_sprite->s_glenn.posi.x <= 314) && my_sprite->s_glenn.posi.y == 263.5)
        my_sprite->s_glenn.stop_up = 1;
    if ((my_sprite->s_glenn.posi.y >= 233.5 &&
    my_sprite->s_glenn.posi.y <= 264.5) && my_sprite->s_glenn.posi.x == 314)
        my_sprite->s_glenn.stop_left = 1;
}

void collision_center_glenn(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_glenn.posi.y >= 575.5 &&
    my_sprite->s_glenn.posi.y <= 625) && my_sprite->s_glenn.posi.x == 483.5)
        my_sprite->s_glenn.stop_right = 1;
    if ((my_sprite->s_glenn.posi.x >= 350 &&
    my_sprite->s_glenn.posi.x <= 432.5) && my_sprite->s_glenn.posi.y == 575.5)
        my_sprite->s_glenn.stop_down = 1;
    if ((my_sprite->s_glenn.posi.y >= 548.5 &&
    my_sprite->s_glenn.posi.y <= 575.5) && my_sprite->s_glenn.posi.x == 350)
        my_sprite->s_glenn.stop_left = 1;
    if ((my_sprite->s_glenn.posi.x >= 314 &&
    my_sprite->s_glenn.posi.x <= 350) && my_sprite->s_glenn.posi.y == 548.5)
        my_sprite->s_glenn.stop_down = 1;
    if ((my_sprite->s_glenn.posi.y >= 521.5 &&
    my_sprite->s_glenn.posi.y <= 548.5) && my_sprite->s_glenn.posi.x == 314)
        my_sprite->s_glenn.stop_left = 1;
    if ((my_sprite->s_glenn.posi.x >= 273.5 &&
    my_sprite->s_glenn.posi.x <= 314) && my_sprite->s_glenn.posi.y == 521.5)
        my_sprite->s_glenn.stop_down = 1;
}