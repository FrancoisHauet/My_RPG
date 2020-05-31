/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** collision_map3_glenn.c
*/

#include "my_rpg.h"

void collision_map3_glenn3(draw_sprite_t *my_spri)
{
    if ((my_spri->s_glen2.posi.y >= 67.5 && my_spri->s_glen2.posi.y <= 280.5)
    && my_spri->s_glen2.posi.x == 879)
        my_spri->s_glen2.stop_right = 1;
    if ((my_spri->s_glen2.posi.y >= 67.5 && my_spri->s_glen2.posi.y <= 280.5)
    && my_spri->s_glen2.posi.x == 76.5)
        my_spri->s_glen2.stop_left = 1;
    if ((my_spri->s_glen2.posi.x >= 76.5 && my_spri->s_glen2.posi.x <= 525)
    && my_spri->s_glen2.posi.y == 237)
        my_spri->s_glen2.stop_up = 1;
    if ((my_spri->s_glen2.posi.x >= 570 && my_spri->s_glen2.posi.x <= 879)
    && my_spri->s_glen2.posi.y == 237)
        my_spri->s_glen2.stop_up = 1;
    if ((my_spri->s_glen2.posi.y >= 199.5 && my_spri->s_glen2.posi.y <= 237)
    && my_spri->s_glen2.posi.x == 525)
        my_spri->s_glen2.stop_left = 1;
    if ((my_spri->s_glen2.posi.y >= 199.5 && my_spri->s_glen2.posi.y <= 237)
    && my_spri->s_glen2.posi.x == 570)
        my_spri->s_glen2.stop_right = 1;
    if ((my_spri->s_glen2.posi.x >= 76.5 && my_spri->s_glen2.posi.x <= 879)
    && my_spri->s_glen2.posi.y == 67.5)
        my_spri->s_glen2.stop_up = 1;
}

void collision_map3_glenn2(draw_sprite_t *my_spri, setup_t *window)
{
    if ((my_spri->s_glen2.posi.x >= 708 &&
    my_spri->s_glen2.posi.x <= 748.5) && my_spri->s_glen2.posi.y == 775.5) {
        window->scene = 3;
        my_spri->s_glen2.posi.x = 426;
        my_spri->s_glen2.posi.y = 19.5;
    } if ((my_spri->s_glen2.posi.y >= 276 && my_spri->s_glen2.posi.y <= 433.5)
    && my_spri->s_glen2.posi.x == 240)
        my_spri->s_glen2.stop_left = 1;
    if ((my_spri->s_glen2.posi.y >= 276 && my_spri->s_glen2.posi.y <= 402)
    && my_spri->s_glen2.posi.x == 280.5)
        my_spri->s_glen2.stop_right = 1;
    if ((my_spri->s_glen2.posi.x >= 76.5 && my_spri->s_glen2.posi.x <= 240)
    && my_spri->s_glen2.posi.y == 276)
        my_spri->s_glen2.stop_down = 1;
    if ((my_spri->s_glen2.posi.x >= 280.5 && my_spri->s_glen2.posi.x <= 879)
    && my_spri->s_glen2.posi.y == 276)
        my_spri->s_glen2.stop_down = 1;
    if (my_spri->s_glen2.posi.y == 216) {
        window->scene = 8;
        play_music_fight(my_spri);
    }
}

void collision_map3_glenn(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_glen2.posi.x >= 280.5 &&
    my_sprite->s_glen2.posi.x <= 748.5) && my_sprite->s_glen2.posi.y == 402)
        my_sprite->s_glen2.stop_up = 1;
    else
        my_sprite->s_glen2.stop_up = 0;
    if ((my_sprite->s_glen2.posi.y >= 402 &&
    my_sprite->s_glen2.posi.y <= 775.5) && my_sprite->s_glen2.posi.x == 748.5)
        my_sprite->s_glen2.stop_right = 1;
    else
        my_sprite->s_glen2.stop_right = 0;
    if ((my_sprite->s_glen2.posi.x >= 240 &&
    my_sprite->s_glen2.posi.x <= 708) && my_sprite->s_glen2.posi.y == 433.5)
        my_sprite->s_glen2.stop_down = 1;
    else
        my_sprite->s_glen2.stop_down = 0;
    if ((my_sprite->s_glen2.posi.y >= 433.5 &&
    my_sprite->s_glen2.posi.y <= 775.5) && my_sprite->s_glen2.posi.x == 708)
        my_sprite->s_glen2.stop_left = 1;
    else
        my_sprite->s_glen2.stop_left = 0;
}