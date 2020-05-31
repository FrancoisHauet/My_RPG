/*
** EPITECH PROJECT, 2019
** my_RPG
** File description:
** collision_map_house.c
*/

#include "my_rpg.h"

void pokestop_collision_chrono2(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_chro2.posi.y >= 410 && my_sprite->s_chro2.posi.y <= 508)
    && my_sprite->s_chro2.posi.x == 467)
        my_sprite->s_chro2.stop_right = 1;
    if ((my_sprite->s_chro2.posi.x >= 467 && my_sprite->s_chro2.posi.x <= 597)
    && my_sprite->s_chro2.posi.y == 508)
        my_sprite->s_chro2.stop_up = 1;
    if ((my_sprite->s_chro2.posi.y >= 410 && my_sprite->s_chro2.posi.y <= 508)
    && my_sprite->s_chro2.posi.x == 597)
        my_sprite->s_chro2.stop_left = 1;
    if ((my_sprite->s_chro2.posi.x >= 467 && my_sprite->s_chro2.posi.x <= 597)
    && my_sprite->s_chro2.posi.y == 410)
        my_sprite->s_chro2.stop_down = 1;
}

void shop_collision(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_chro2.posi.y >= 282 && my_sprite->s_chro2.posi.y <= 366)
    && my_sprite->s_chro2.posi.x == 673)
        my_sprite->s_chro2.stop_right = 1;
    if ((my_sprite->s_chro2.posi.x >= 673 && my_sprite->s_chro2.posi.x <= 785)
    && my_sprite->s_chro2.posi.y == 366)
        my_sprite->s_chro2.stop_up = 1;
    if ((my_sprite->s_chro2.posi.y >= 282 && my_sprite->s_chro2.posi.y <= 366)
    && my_sprite->s_chro2.posi.x == 785)
        my_sprite->s_chro2.stop_left = 1;
    if ((my_sprite->s_glen2.posi.y >= 294 &&
    my_sprite->s_glen2.posi.y <= 379.5) && my_sprite->s_glen2.posi.x == 670.5)
        my_sprite->s_glen2.stop_right = 1;
    if ((my_sprite->s_glen2.posi.x >= 670.5 &&
    my_sprite->s_glen2.posi.x <= 784.5) && my_sprite->s_glen2.posi.y == 379.5)
        my_sprite->s_glen2.stop_up = 1;
    if ((my_sprite->s_glen2.posi.y >= 294 &&
    my_sprite->s_glen2.posi.y <= 379.5) && my_sprite->s_glen2.posi.x == 784.5)
        my_sprite->s_glen2.stop_left = 1;
}

void house_collision_chrono2(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_chro2.posi.x >= 443 && my_sprite->s_chro2.posi.x <= 843)
    && my_sprite->s_chro2.posi.y == 256)
        my_sprite->s_chro2.stop_down = 1;
    if ((my_sprite->s_chro2.posi.y >= 256 && my_sprite->s_chro2.posi.y <= 362)
    && my_sprite->s_chro2.posi.x == 443)
        my_sprite->s_chro2.stop_right = 1;
    if ((my_sprite->s_chro2.posi.x >= 433 && my_sprite->s_chro2.posi.x <= 577)
    && my_sprite->s_chro2.posi.y == 362)
        my_sprite->s_chro2.stop_up = 1;
    if ((my_sprite->s_chro2.posi.y >= 282 && my_sprite->s_chro2.posi.y <= 362)
    && my_sprite->s_chro2.posi.x == 577)
        my_sprite->s_chro2.stop_left = 1;
    if ((my_sprite->s_chro2.posi.x >= 577 && my_sprite->s_chro2.posi.x <= 843)
    && my_sprite->s_chro2.posi.y == 282)
        my_sprite->s_chro2.stop_up = 1;
}

void pokestop_collision_chrono(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_chro2.posi.x >= 655 && my_sprite->s_chro2.posi.x <= 805)
    && my_sprite->s_chro2.posi.y == 174)
        my_sprite->s_chro2.stop_up = 1;
    if ((my_sprite->s_chro2.posi.y >= 68 && my_sprite->s_chro2.posi.y <= 174)
    && my_sprite->s_chro2.posi.x == 805)
        my_sprite->s_chro2.stop_left = 1;
    if ((my_sprite->s_chro2.posi.x >= 653 && my_sprite->s_chro2.posi.x <= 805)
    && my_sprite->s_chro2.posi.y == 68)
        my_sprite->s_chro2.stop_down = 1;
    if ((my_sprite->s_chro2.posi.y >= 68 && my_sprite->s_chro2.posi.y <= 140)
    && my_sprite->s_chro2.posi.x == 653)
        my_sprite->s_chro2.stop_right = 1;
    if ((my_sprite->s_chro2.posi.x >= 631 && my_sprite->s_chro2.posi.x <= 653)
    && my_sprite->s_chro2.posi.y == 140)
        my_sprite->s_chro2.stop_down = 1;
    if ((my_sprite->s_chro2.posi.y >= 140 && my_sprite->s_chro2.posi.y <= 174)
    && my_sprite->s_chro2.posi.x == 653)
        my_sprite->s_chro2.stop_right = 1;
}

void house_collision_chrono(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_chro2.posi.x >= 445 && my_sprite->s_chro2.posi.x <= 597)
    && my_sprite->s_chro2.posi.y == 214)
        my_sprite->s_chro2.stop_up = 1;
    else
        my_sprite->s_chro2.stop_up = 0;
    if ((my_sprite->s_chro2.posi.y >= 124 && my_sprite->s_chro2.posi.y <= 214)
    && my_sprite->s_chro2.posi.x == 445)
        my_sprite->s_chro2.stop_right = 1;
    else
        my_sprite->s_chro2.stop_right = 0;
    if ((my_sprite->s_chro2.posi.x >= 445 && my_sprite->s_chro2.posi.x <= 597)
    && my_sprite->s_chro2.posi.y == 124)
        my_sprite->s_chro2.stop_down = 1;
    else
        my_sprite->s_chro2.stop_down = 0;
    if ((my_sprite->s_chro2.posi.y >= 124 && my_sprite->s_chro2.posi.y <= 214)
    && my_sprite->s_chro2.posi.x == 597)
        my_sprite->s_chro2.stop_left = 1;
    else
        my_sprite->s_chro2.stop_left = 0;
}