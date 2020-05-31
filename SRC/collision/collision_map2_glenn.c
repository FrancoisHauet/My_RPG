/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** collision_map2_glenn.c
*/

#include "my_rpg.h"

void water_tree_glenn_map2(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_glen2.posi.x >= 138.5 &&
    my_sprite->s_glen2.posi.x <= 333.5) && my_sprite->s_glen2.posi.y == 323)
        my_sprite->s_glen2.stop_down = 1;
    if ((my_sprite->s_glen2.posi.y >= 194 && my_sprite->s_glen2.posi.y <= 323)
    && my_sprite->s_glen2.posi.x == 138.5)
        my_sprite->s_glen2.stop_left = 1;
    if ((my_sprite->s_glen2.posi.x >= 138.5 &&
    my_sprite->s_glen2.posi.x <= 198.5) && my_sprite->s_glen2.posi.y == 194)
        my_sprite->s_glen2.stop_up = 1;
    if ((my_sprite->s_glen2.posi.y >= 147.5 &&
    my_sprite->s_glen2.posi.y <= 194) && my_sprite->s_glen2.posi.x == 198.5)
        my_sprite->s_glen2.stop_left = 1;
    if ((my_sprite->s_glen2.posi.x >= 198.5 &&
    my_sprite->s_glen2.posi.x <= 296) && my_sprite->s_glen2.posi.y == 147.5)
        my_sprite->s_glen2.stop_up = 1;
    if ((my_sprite->s_glen2.posi.y >= 147.5 &&
    my_sprite->s_glen2.posi.y <= 189.5) && my_sprite->s_glen2.posi.x == 296)
        my_sprite->s_glen2.stop_right = 1;
    if ((my_sprite->s_glen2.posi.x >= 296 &&
    my_sprite->s_glen2.posi.x <= 384.5) && my_sprite->s_glen2.posi.y == 189.5)
        my_sprite->s_glen2.stop_up = 1;
}

void collision_map2_glenn(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_glen2.posi.x >= 384.5 &&
    my_sprite->s_glen2.posi.x <= 615.5) && my_sprite->s_glen2.posi.y == 120.5)
        my_sprite->s_glen2.stop_up = 1;
    else
        my_sprite->s_glen2.stop_up = 0;
    if ((my_sprite->s_glen2.posi.y >= 99.5 &&
    my_sprite->s_glen2.posi.y <= 416) && my_sprite->s_glen2.posi.x == 650)
        my_sprite->s_glen2.stop_right = 1;
    else
        my_sprite->s_glen2.stop_right = 0;
    if ((my_sprite->s_glen2.posi.x >= 333.5 &&
    my_sprite->s_glen2.posi.x <= 552.5) && my_sprite->s_glen2.posi.y == 233)
        my_sprite->s_glen2.stop_down = 1;
    else
        my_sprite->s_glen2.stop_down = 0;
    if ((my_sprite->s_glen2.posi.y >= 120.5 &&
    my_sprite->s_glen2.posi.y <= 189.5) && my_sprite->s_glen2.posi.x == 384.5)
        my_sprite->s_glen2.stop_left = 1;
    else
        my_sprite->s_glen2.stop_left = 0;
}