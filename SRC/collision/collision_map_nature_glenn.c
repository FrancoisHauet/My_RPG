/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** collision_map_nature_glenn.c
*/

#include "my_rpg.h"

void bush_fencing_collision2_glenn(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_glen2.posi.x >= 151.5 &&
    my_sprite->s_glen2.posi.x <= 408) && my_sprite->s_glen2.posi.y == 315)
        my_sprite->s_glen2.stop_up = 1;
    if ((my_sprite->s_glen2.posi.y >= 82.5 &&
    my_sprite->s_glen2.posi.y <= 315) && my_sprite->s_glen2.posi.x == 408)
        my_sprite->s_glen2.stop_left = 1;
    if ((my_sprite->s_glen2.posi.x >= 156 &&
    my_sprite->s_glen2.posi.x <= 400.5) && my_sprite->s_glen2.posi.y == 82.5)
        my_sprite->s_glen2.stop_down = 1;
    if ((my_sprite->s_glen2.posi.y >= 82.5 &&
    my_sprite->s_glen2.posi.y <= 315) && my_sprite->s_glen2.posi.x == 156)
        my_sprite->s_glen2.stop_right = 1;
}

void water_collision_glenn(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_glen2.posi.x >= 132 && my_sprite->s_glen2.posi.x <= 216)
    && my_sprite->s_glen2.posi.y == 415.5)
        my_sprite->s_glen2.stop_down = 1;
    if ((my_sprite->s_glen2.posi.y >= 415.5 &&
    my_sprite->s_glen2.posi.y <= 436.5) && my_sprite->s_glen2.posi.x == 216)
        my_sprite->s_glen2.stop_left = 1;
    if ((my_sprite->s_glen2.posi.x >= 216 &&
    my_sprite->s_glen2.posi.x <= 277.5) && my_sprite->s_glen2.posi.y == 436.5)
        my_sprite->s_glen2.stop_down = 1;
    if ((my_sprite->s_glen2.posi.y >= 436.5 &&
    my_sprite->s_glen2.posi.y <= 495) && my_sprite->s_glen2.posi.x == 277.5)
        my_sprite->s_glen2.stop_left = 1;
    if ((my_sprite->s_glen2.posi.x >= 277.5 &&
    my_sprite->s_glen2.posi.x <= 342) && my_sprite->s_glen2.posi.y == 495)
        my_sprite->s_glen2.stop_down = 1;
    if ((my_sprite->s_glen2.posi.y >= 495 && my_sprite->s_glen2.posi.y <= 606)
    && my_sprite->s_glen2.posi.x == 342)
        my_sprite->s_glen2.stop_left = 1;
}

void rock_collision_glenn(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_glen2.posi.y >= 370.5 &&
    my_sprite->s_glen2.posi.y <= 646.5) && my_sprite->s_glen2.posi.x == 132)
        my_sprite->s_glen2.stop_left = 1;
    if ((my_sprite->s_glen2.posi.x >= -7 && my_sprite->s_glen2.posi.x <= 137)
    && my_sprite->s_glen2.posi.y == 370.5)
        my_sprite->s_glen2.stop_down = 1;
    if ((my_sprite->s_glen2.posi.x >= -6 && my_sprite->s_glen2.posi.x <= 111)
    && my_sprite->s_glen2.posi.y == 297)
        my_sprite->s_glen2.stop_up = 1;
    if ((my_sprite->s_glen2.posi.y >= 274.5 &&
    my_sprite->s_glen2.posi.y <= 297) && my_sprite->s_glen2.posi.x == 111)
        my_sprite->s_glen2.stop_left = 1;
    if ((my_sprite->s_glen2.posi.x >= 111 &&
    my_sprite->s_glen2.posi.x <= 154.5) && my_sprite->s_glen2.posi.y == 274.5)
        my_sprite->s_glen2.stop_up = 1;
    if ((my_sprite->s_glen2.posi.y >= 63 &&
    my_sprite->s_glen2.posi.y <= 274.5) && my_sprite->s_glen2.posi.x == 154.5)
        my_sprite->s_glen2.stop_left = 1;
}

void bush_top_glenn_collision(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_glen2.posi.x >= 576 &&
    my_sprite->s_glen2.posi.x <= 838.5) && my_sprite->s_glen2.posi.y == 48)
        my_sprite->s_glen2.stop_up = 1;
    if ((my_sprite->s_glen2.posi.y >= 48 && my_sprite->s_glen2.posi.y <= 63)
    && my_sprite->s_glen2.posi.x == 576)
        my_sprite->s_glen2.stop_left = 1;
    if ((my_sprite->s_glen2.posi.x >= 466.5 && my_sprite->s_glen2.posi.x <= 576)
    && my_sprite->s_glen2.posi.y == 63)
        my_sprite->s_glen2.stop_up = 1;
    if ((my_sprite->s_glen2.posi.y >= 1.5 && my_sprite->s_glen2.posi.y <= 63)
    && my_sprite->s_glen2.posi.x == 466.5)
        my_sprite->s_glen2.stop_right = 1;
}

void bush_glenn_collision(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_glen2.posi.y >= 48 &&
    my_sprite->s_glen2.posi.y <= 685.5) && my_sprite->s_glen2.posi.x == 838.5)
        my_sprite->s_glen2.stop_right = 1;
    if ((my_sprite->s_glen2.posi.x >= 501 &&
    my_sprite->s_glen2.posi.x <= 838.5) && my_sprite->s_glen2.posi.y == 685.5)
        my_sprite->s_glen2.stop_down = 1;
    if ((my_sprite->s_glen2.posi.y >= 685.5 &&
    my_sprite->s_glen2.posi.y <= 787.5) && my_sprite->s_glen2.posi.x == 501)
        my_sprite->s_glen2.stop_right = 1;
    if ((my_sprite->s_glen2.posi.y >= 685.5 &&
    my_sprite->s_glen2.posi.y <= 787.5) && my_sprite->s_glen2.posi.x == 448.5)
        my_sprite->s_glen2.stop_left = 1;
    if ((my_sprite->s_glen2.posi.x >= 280.5 &&
    my_sprite->s_glen2.posi.x <= 448.5) && my_sprite->s_glen2.posi.y == 685.5)
        my_sprite->s_glen2.stop_down = 1;
    if ((my_sprite->s_glen2.posi.y >= 646.5 &&
    my_sprite->s_glen2.posi.y <= 685.5) && my_sprite->s_glen2.posi.x == 280.5)
        my_sprite->s_glen2.stop_left = 1;
    if ((my_sprite->s_glen2.posi.x >= 132 &&
    my_sprite->s_glen2.posi.x <= 280.5) && my_sprite->s_glen2.posi.y == 646.5)
        my_sprite->s_glen2.stop_down = 1;
}