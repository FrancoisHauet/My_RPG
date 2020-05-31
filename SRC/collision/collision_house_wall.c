/*
** EPITECH PROJECT, 2019
** my_RPG
** File description:
** collision_house.c
*/

#include "my_rpg.h"

void wall_collision(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_glenn.posi.y >= 187 &&
    my_sprite->s_glenn.posi.y <= 308.5) && my_sprite->s_glenn.posi.x == 629)
        my_sprite->s_glenn.stop_left = 1;
    if ((my_sprite->s_glenn.posi.x >= 498.5
    && my_sprite->s_glenn.posi.x <= 629) && my_sprite->s_glenn.posi.y == 308.5)
        my_sprite->s_glenn.stop_up = 1;
    if ((my_sprite->s_glenn.posi.y >= 139 &&
    my_sprite->s_glenn.posi.y <= 308.5)
    && my_sprite->s_glenn.posi.x == 498.5)
        my_sprite->s_glenn.stop_right = 1;
    if ((my_sprite->s_chro.posi.y >= 162 &&
    my_sprite->s_chro.posi.y <= 290) && my_sprite->s_chro.posi.x == 636)
        my_sprite->s_chro.stop_left = 1;
    if ((my_sprite->s_chro.posi.x >= 500
    && my_sprite->s_chro.posi.x <= 636) && my_sprite->s_chro.posi.y == 290)
        my_sprite->s_chro.stop_up = 1;
    if ((my_sprite->s_chro.posi.y >= 130 &&
    my_sprite->s_chro.posi.y <= 290)
    && my_sprite->s_chro.posi.x == 500)
        my_sprite->s_chro.stop_right = 1;
}

void wall_collision_glenn(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_glenn.posi.y >= 431 && my_sprite->s_glenn.posi.y <= 530)
    && my_sprite->s_glenn.posi.x >= 551)
        my_sprite->s_glenn.stop_down = 1;
    if ((my_sprite->s_glenn.posi.y >= 431 && my_sprite->s_glenn.posi.y <= 563)
    && my_sprite->s_glenn.posi.x == 548)
        my_sprite->s_glenn.stop_right = 1;
    if ((my_sprite->s_glenn.posi.y >= 450 && my_sprite->s_glenn.posi.y <= 563)
    && my_sprite->s_glenn.posi.x >= 551)
        my_sprite->s_glenn.stop_up = 1;
    if ((my_sprite->s_glenn.posi.y >= 431 && my_sprite->s_glenn.posi.y <= 530)
    && my_sprite->s_glenn.posi.x <= 386)
        my_sprite->s_glenn.stop_down = 1;
    if ((my_sprite->s_glenn.posi.y >= 431 && my_sprite->s_glenn.posi.y <= 563)
    && my_sprite->s_glenn.posi.x == 386)
        my_sprite->s_glenn.stop_left = 1;
    if ((my_sprite->s_glenn.posi.y >= 450 && my_sprite->s_glenn.posi.y <= 563)
    && my_sprite->s_glenn.posi.x < 386)
        my_sprite->s_glenn.stop_up = 1;
}

void wall_collision_chrono(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_chro.posi.y >= 412 && my_sprite->s_chro.posi.y <= 530)
    && my_sprite->s_chro.posi.x >= 551)
        my_sprite->s_chro.stop_down = 1;
    if ((my_sprite->s_chro.posi.y >= 414 && my_sprite->s_chro.posi.y <= 542)
    && my_sprite->s_chro.posi.x == 548)
        my_sprite->s_chro.stop_right = 1;
    if ((my_sprite->s_chro.posi.y >= 450 && my_sprite->s_chro.posi.y <= 542)
    && my_sprite->s_chro.posi.x >= 551)
        my_sprite->s_chro.stop_up = 1;
    if ((my_sprite->s_chro.posi.y >= 412 && my_sprite->s_chro.posi.y <= 530)
    && my_sprite->s_chro.posi.x <= 386)
        my_sprite->s_chro.stop_down = 1;
    if ((my_sprite->s_chro.posi.y >= 414 && my_sprite->s_chro.posi.y <= 542)
    && my_sprite->s_chro.posi.x == 390)
        my_sprite->s_chro.stop_left = 1;
    if ((my_sprite->s_chro.posi.y >= 450 && my_sprite->s_chro.posi.y <= 542)
    && my_sprite->s_chro.posi.x <= 386)
        my_sprite->s_chro.stop_up = 1;
}

void wall_x_collision(draw_sprite_t *my_sprite)
{
    if (my_sprite->s_chro.posi.x <= 134 || my_sprite->s_glenn.posi.x <= 134) {
        my_sprite->s_chro.stop_left = 1;
        my_sprite->s_glenn.stop_left = 1;
    } else {
        my_sprite->s_chro.stop_left = 0;
        my_sprite->s_glenn.stop_left = 0;
    }
    if (my_sprite->s_chro.posi.x >= 803 || my_sprite->s_glenn.posi.x >= 803) {
        my_sprite->s_chro.stop_right = 1;
        my_sprite->s_glenn.stop_right = 1;
    } else {
        my_sprite->s_chro.stop_right = 0;
        my_sprite->s_glenn.stop_right = 0;
    }
}

void wall_y_collision(draw_sprite_t *my_sprite)
{
    if (my_sprite->s_chro.posi.y <= 130 || my_sprite->s_glenn.posi.y <= 140) {
        my_sprite->s_chro.stop_up = 1;
        my_sprite->s_glenn.stop_up = 1;
    } else {
        my_sprite->s_chro.stop_up = 0;
        my_sprite->s_glenn.stop_up = 0;
    }
    if (my_sprite->s_chro.posi.y >= 700 || my_sprite->s_glenn.posi.y >= 725) {
        my_sprite->s_chro.stop_down = 1;
        my_sprite->s_glenn.stop_down = 1;
    } else {
        my_sprite->s_chro.stop_down = 0;
        my_sprite->s_glenn.stop_down = 0;
    }
}