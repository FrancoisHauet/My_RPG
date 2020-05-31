/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** collision_map_house_glenn.c
*/

#include "my_rpg.h"

void limit_map_gleen(draw_sprite_t *my_sprite, setup_t *window)
{
    if ((my_sprite->s_glen2.posi.x >= 385.5 &&
    my_sprite->s_glen2.posi.x <= 466.5) && my_sprite->s_glen2.posi.y == 1.5)
        my_sprite->s_glen2.stop_up = 1;
    if ((my_sprite->s_glen2.posi.x >= 385.5 &&
    my_sprite->s_glen2.posi.x <= 466.5) && my_sprite->s_glen2.posi.y == 1.5) {
        my_sprite->s_glen2.posi.x = 729;
        my_sprite->s_glen2.posi.y = 762;
        window->scene = 9;
    }
    if ((my_sprite->s_glen2.posi.x >= 448.5 &&
    my_sprite->s_glen2.posi.x <= 501) && my_sprite->s_glen2.posi.y == 787.5) {
        my_sprite->s_glen2.posi.x = 620;
        my_sprite->s_glen2.posi.y = 5;
        window->scene = 5;
    }
    if ((my_sprite->s_glen2.posi.y >= 295.5 &&
    my_sprite->s_glen2.posi.y <= 370.5) && my_sprite->s_glen2.posi.x == -6)
        my_sprite->s_glen2.stop_left = 1;
}

void pokestop_collision_glenn2(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_glen2.posi.y >= 424.5 && my_sprite->s_glen2.posi.y <= 525)
    && my_sprite->s_glen2.posi.x == 462)
        my_sprite->s_glen2.stop_right = 1;
    if ((my_sprite->s_glen2.posi.x >= 462 && my_sprite->s_glen2.posi.x <= 597)
    && my_sprite->s_glen2.posi.y == 525)
        my_sprite->s_glen2.stop_up = 1;
    if ((my_sprite->s_glen2.posi.y >= 410 && my_sprite->s_glen2.posi.y <= 525)
    && my_sprite->s_glen2.posi.x == 597)
        my_sprite->s_glen2.stop_left = 1;
    if ((my_sprite->s_glen2.posi.x >= 462 && my_sprite->s_glen2.posi.x <= 597)
    && my_sprite->s_glen2.posi.y == 424.5)
        my_sprite->s_glen2.stop_down = 1;
}

void house_collision_glenn2(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_glen2.posi.x >= 441 &&
    my_sprite->s_glen2.posi.x <= 838.5) && my_sprite->s_glen2.posi.y == 270)
        my_sprite->s_glen2.stop_down = 1;
    if ((my_sprite->s_glen2.posi.y >= 270 &&
    my_sprite->s_glen2.posi.y <= 376.5) && my_sprite->s_glen2.posi.x == 441)
        my_sprite->s_glen2.stop_right = 1;
    if ((my_sprite->s_glen2.posi.x >= 441 &&
    my_sprite->s_glen2.posi.x <= 576) && my_sprite->s_glen2.posi.y == 376.5)
        my_sprite->s_glen2.stop_up = 1;
    if ((my_sprite->s_glen2.posi.y >= 294 &&
    my_sprite->s_glen2.posi.y <= 376.5) && my_sprite->s_glen2.posi.x == 576)
        my_sprite->s_glen2.stop_left = 1;
    if ((my_sprite->s_glen2.posi.x >= 576 &&
    my_sprite->s_glen2.posi.x <= 838.5) && my_sprite->s_glen2.posi.y == 294)
        my_sprite->s_glen2.stop_up = 1;
}

void pokestop_collision_glenn(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_glen2.posi.x >= 628.5 &&
    my_sprite->s_glen2.posi.x <= 805.5) && my_sprite->s_glen2.posi.y == 187.5)
        my_sprite->s_glen2.stop_up = 1;
    if ((my_sprite->s_glen2.posi.y >= 82.5 &&
    my_sprite->s_glen2.posi.y <= 187.5) && my_sprite->s_glen2.posi.x == 805.5)
        my_sprite->s_glen2.stop_left = 1;
    if ((my_sprite->s_glen2.posi.x >= 649.5 &&
    my_sprite->s_glen2.posi.x <= 805.5) && my_sprite->s_glen2.posi.y == 82.5)
        my_sprite->s_glen2.stop_down = 1;
    if ((my_sprite->s_glen2.posi.y >= 82.5 &&
    my_sprite->s_glen2.posi.y <= 154.5) && my_sprite->s_glen2.posi.x == 649.5)
        my_sprite->s_glen2.stop_right = 1;
    if ((my_sprite->s_glen2.posi.x >= 630 &&
    my_sprite->s_glen2.posi.x <= 649.5) && my_sprite->s_glen2.posi.y == 154.5)
        my_sprite->s_glen2.stop_down = 1;
    if ((my_sprite->s_glen2.posi.y >= 154.5 &&
    my_sprite->s_glen2.posi.y <= 187.5) && my_sprite->s_glen2.posi.x == 630)
        my_sprite->s_glen2.stop_right = 1;
}

void house_collision_glenn(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_glen2.posi.x >= 441 && my_sprite->s_glen2.posi.x <= 594)
    && my_sprite->s_glen2.posi.y == 231)
        my_sprite->s_glen2.stop_up = 1;
    else
        my_sprite->s_glen2.stop_up = 0;
    if ((my_sprite->s_glen2.posi.y >= 133.5 &&
    my_sprite->s_glen2.posi.y <= 231) && my_sprite->s_glen2.posi.x == 441)
        my_sprite->s_glen2.stop_right = 1;
    else
        my_sprite->s_glen2.stop_right = 0;
    if ((my_sprite->s_glen2.posi.x >= 441 && my_sprite->s_glen2.posi.x <= 594)
    && my_sprite->s_glen2.posi.y == 133.5)
        my_sprite->s_glen2.stop_down = 1;
    else
        my_sprite->s_glen2.stop_down = 0;
    if ((my_sprite->s_glen2.posi.y >= 133.5 &&
    my_sprite->s_glen2.posi.y <= 231) && my_sprite->s_glen2.posi.x == 594)
        my_sprite->s_glen2.stop_left = 1;
    else
        my_sprite->s_glen2.stop_left = 0;
}