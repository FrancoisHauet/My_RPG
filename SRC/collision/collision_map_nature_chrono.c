/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** collisin_map_nature.c
*/

#include "my_rpg.h"

void rock_collision_chrono(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_chro2.posi.y >= 356 && my_sprite->s_chro2.posi.y <= 632)
    && my_sprite->s_chro2.posi.x == 137)
        my_sprite->s_chro2.stop_left = 1;
    if ((my_sprite->s_chro2.posi.x >= -7 && my_sprite->s_chro2.posi.x <= 137)
    && my_sprite->s_chro2.posi.y == 356)
        my_sprite->s_chro2.stop_down = 1;
    if ((my_sprite->s_chro2.posi.x >= -7 && my_sprite->s_chro2.posi.x <= 113)
    && my_sprite->s_chro2.posi.y == 280)
        my_sprite->s_chro2.stop_up = 1;
    if ((my_sprite->s_chro2.posi.y >= 260 && my_sprite->s_chro2.posi.y <= 280)
    && my_sprite->s_chro2.posi.x == 113)
        my_sprite->s_chro2.stop_left = 1;
    if ((my_sprite->s_chro2.posi.x >= 113 && my_sprite->s_chro2.posi.x <= 155)
    && my_sprite->s_chro2.posi.y == 260)
        my_sprite->s_chro2.stop_up = 1;
    if ((my_sprite->s_chro2.posi.y >= 48 && my_sprite->s_chro2.posi.y <= 260)
    && my_sprite->s_chro2.posi.x == 155)
        my_sprite->s_chro2.stop_left = 1;
}

void limit_map_chrono(draw_sprite_t *my_sprite, setup_t *window)
{
    if ((my_sprite->s_chro2.posi.x >= 389 && my_sprite->s_chro2.posi.x <= 467)
    && my_sprite->s_chro2.posi.y == 0 && my_sprite->lose == 0)
        my_sprite->s_chro2.stop_up = 1;
    if ((my_sprite->s_chro2.posi.x >= 389 && my_sprite->s_chro2.posi.x <= 467)
    && my_sprite->s_chro2.posi.y == 0 && my_sprite->lose == 3) {
        my_sprite->s_chro2.posi.x = 729;
        my_sprite->s_chro2.posi.y = 748;
        window->scene = 9;
    }
    if ((my_sprite->s_chro2.posi.x >= 449 && my_sprite->s_chro2.posi.x <= 509)
    && my_sprite->s_chro2.posi.y == 774) {
        window->scene = 5;
        my_sprite->s_chro2.posi.x = 625;
        my_sprite->s_chro2.posi.y = 2;
    }
    if ((my_sprite->s_chro2.posi.y >= 278 && my_sprite->s_chro2.posi.y <= 356)
    && my_sprite->s_chro2.posi.x == -7)
        my_sprite->s_chro2.stop_left = 1;
}

void bush_top_collision_chrono(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_chro2.posi.x >= 581 && my_sprite->s_chro2.posi.x <= 843)
    && my_sprite->s_chro2.posi.y == 32)
        my_sprite->s_chro2.stop_up = 1;
    if ((my_sprite->s_chro2.posi.y >= 32 && my_sprite->s_chro2.posi.y <= 48)
    && my_sprite->s_chro2.posi.x == 581)
        my_sprite->s_chro2.stop_left = 1;
    if ((my_sprite->s_chro2.posi.x >= 467 && my_sprite->s_chro2.posi.x <= 581)
    && my_sprite->s_chro2.posi.y == 48)
        my_sprite->s_chro2.stop_up = 1;
    if ((my_sprite->s_chro2.posi.y >= 0 && my_sprite->s_chro2.posi.y <= 48)
    && my_sprite->s_chro2.posi.x == 467)
        my_sprite->s_chro2.stop_right = 1;
}

void bush_chrono_collision(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_chro2.posi.y >= 32 && my_sprite->s_chro2.posi.y <= 680)
    && my_sprite->s_chro2.posi.x == 843)
        my_sprite->s_chro2.stop_right = 1;
    if ((my_sprite->s_chro2.posi.x >= 509 && my_sprite->s_chro2.posi.x <= 843)
    && my_sprite->s_chro2.posi.y == 674)
        my_sprite->s_chro2.stop_down = 1;
    if ((my_sprite->s_chro2.posi.y >= 674 && my_sprite->s_chro2.posi.y <= 776)
    && my_sprite->s_chro2.posi.x == 509)
        my_sprite->s_chro2.stop_right = 1;
    if ((my_sprite->s_chro2.posi.y >= 674 && my_sprite->s_chro2.posi.y <= 776)
    && my_sprite->s_chro2.posi.x == 449)
        my_sprite->s_chro2.stop_left = 1;
    if ((my_sprite->s_chro2.posi.x >= 285 && my_sprite->s_chro2.posi.x <= 449)
    && my_sprite->s_chro2.posi.y == 674)
        my_sprite->s_chro2.stop_down = 1;
    if ((my_sprite->s_chro2.posi.y >= 632 && my_sprite->s_chro2.posi.y <= 674)
    && my_sprite->s_chro2.posi.x == 285)
        my_sprite->s_chro2.stop_left = 1;
    if ((my_sprite->s_chro2.posi.x >= 137 && my_sprite->s_chro2.posi.x <= 285)
    && my_sprite->s_chro2.posi.y == 632)
        my_sprite->s_chro2.stop_down = 1;
}

void stopper_collision(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_chro2.posi.x >= 597 && my_sprite->s_chro2.posi.x <= 847)
    && my_sprite->s_chro2.posi.y == 214)
        my_sprite->s_chro2.stop_up = 1;
    if ((my_sprite->s_chro2.posi.x >= 443 && my_sprite->s_chro2.posi.x <= 843)
    && my_sprite->s_chro2.posi.y == 592)
        my_sprite->s_chro2.stop_up = 1;
    if ((my_sprite->s_chro2.posi.x >= 133 && my_sprite->s_chro2.posi.x <= 385)
    && my_sprite->s_chro2.posi.y == 592)
        my_sprite->s_chro2.stop_up = 1;
    if ((my_sprite->s_glen2.posi.x >= 594 &&
    my_sprite->s_glen2.posi.x <= 844.5) && my_sprite->s_glen2.posi.y == 231)
        my_sprite->s_glen2.stop_up = 1;
    if ((my_sprite->s_glen2.posi.x >= 444 &&
    my_sprite->s_glen2.posi.x <= 844.5) && my_sprite->s_glen2.posi.y == 609)
        my_sprite->s_glen2.stop_up = 1;
    if ((my_sprite->s_glen2.posi.x >= 132 &&
    my_sprite->s_glen2.posi.x <= 400.5) && my_sprite->s_glen2.posi.y == 609)
        my_sprite->s_glen2.stop_up = 1;
}