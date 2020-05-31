/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** collision_map2.c
*/

#include "my_rpg.h"

void water_tree_chrono_map2(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_chro2.posi.x >= 141 && my_sprite->s_chro2.posi.x <= 341)
    && my_sprite->s_chro2.posi.y == 308)
        my_sprite->s_chro2.stop_down = 1;
    if ((my_sprite->s_chro2.posi.y >= 176 && my_sprite->s_chro2.posi.y <= 308)
    && my_sprite->s_chro2.posi.x == 141)
        my_sprite->s_chro2.stop_left = 1;
    if ((my_sprite->s_chro2.posi.x >= 141 && my_sprite->s_chro2.posi.x <= 201)
    && my_sprite->s_chro2.posi.y == 176)
        my_sprite->s_chro2.stop_up = 1;
    if ((my_sprite->s_chro2.posi.y >= 136 && my_sprite->s_chro2.posi.y <= 176)
    && my_sprite->s_chro2.posi.x == 201)
        my_sprite->s_chro2.stop_left = 1;
    if ((my_sprite->s_chro2.posi.x >= 201 && my_sprite->s_chro2.posi.x <= 299)
    && my_sprite->s_chro2.posi.y == 136)
        my_sprite->s_chro2.stop_up = 1;
    if ((my_sprite->s_chro2.posi.y >= 136 && my_sprite->s_chro2.posi.y <= 176)
    && my_sprite->s_chro2.posi.x == 299)
        my_sprite->s_chro2.stop_right = 1;
    if ((my_sprite->s_chro2.posi.x >= 299 && my_sprite->s_chro2.posi.x <= 387)
    && my_sprite->s_chro2.posi.y == 176)
        my_sprite->s_chro2.stop_up = 1;
}

void rock_map2(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_chro2.posi.x >= 555 && my_sprite->s_chro2.posi.x <= 655)
    && my_sprite->s_chro2.posi.y == 402)
        my_sprite->s_chro2.stop_down = 1;
    if ((my_sprite->s_chro2.posi.y >= 218 && my_sprite->s_chro2.posi.y <= 402)
    && my_sprite->s_chro2.posi.x == 555)
        my_sprite->s_chro2.stop_left = 1;
    if ((my_sprite->s_chro2.posi.y >= 218 && my_sprite->s_chro2.posi.y <= 333)
    && my_sprite->s_chro2.posi.x == 341)
        my_sprite->s_chro2.stop_right = 1;
    if ((my_sprite->s_glen2.posi.x >= 552.5 &&
    my_sprite->s_chro2.posi.x <= 650) && my_sprite->s_glen2.posi.y == 416)
        my_sprite->s_glen2.stop_down = 1;
    if ((my_sprite->s_glen2.posi.y >= 233 &&
    my_sprite->s_glen2.posi.y <= 416) && my_sprite->s_glen2.posi.x == 552.5)
        my_sprite->s_glen2.stop_left = 1;
    if ((my_sprite->s_glen2.posi.y >= 233 &&
    my_sprite->s_glen2.posi.y <= 323) && my_sprite->s_glen2.posi.x == 333.5)
        my_sprite->s_glen2.stop_right = 1;
}

void enter_map2(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_chro2.posi.y >= 0 && my_sprite->s_chro2.posi.y <= 106)
    && my_sprite->s_chro2.posi.x == 617)
        my_sprite->s_chro2.stop_left = 1;
    if ((my_sprite->s_chro2.posi.y >= 0 && my_sprite->s_chro2.posi.y <= 86)
    && my_sprite->s_chro2.posi.x == 633)
        my_sprite->s_chro2.stop_right = 1;
    if ((my_sprite->s_chro2.posi.x >= 633 && my_sprite->s_chro2.posi.x <= 655)
    && my_sprite->s_chro2.posi.y == 86)
        my_sprite->s_chro2.stop_up = 1;
    if ((my_sprite->s_glen2.posi.y >= 0.5 &&
    my_sprite->s_glen2.posi.y <= 120.5) && my_sprite->s_glen2.posi.x == 615.5)
        my_sprite->s_glen2.stop_left = 1;
    if ((my_sprite->s_glen2.posi.y >= 0.5 &&
    my_sprite->s_glen2.posi.y <= 101) && my_sprite->s_glen2.posi.x == 629)
        my_sprite->s_glen2.stop_right = 1;
    if ((my_sprite->s_glen2.posi.x >= 629 &&
    my_sprite->s_glen2.posi.x <= 650) && my_sprite->s_glen2.posi.y == 101)
        my_sprite->s_glen2.stop_up = 1;
}

void limit_map2(draw_sprite_t *my_sprite, setup_t *window)
{
    if ((my_sprite->s_chro2.posi.x >= 617 && my_sprite->s_chro2.posi.x <= 633)
    && my_sprite->s_chro2.posi.y == 0) {
        my_sprite->s_chro2.posi.x = 479;
        my_sprite->s_chro2.posi.y = 770;
        window->scene = 3;
    }
    if ((my_sprite->s_chro2.posi.x >= 231 && my_sprite->s_chro2.posi.x <= 249)
    && my_sprite->s_chro2.posi.y == 136) {
        sfSound_play(my_sprite->sound_dor.sound);
        window->scene = 6;
    } if ((my_sprite->s_glen2.posi.x >= 615.5 &&
    my_sprite->s_glen2.posi.x <= 629) && my_sprite->s_glen2.posi.y == 0.5) {
        my_sprite->s_glen2.posi.x = 477;
        my_sprite->s_glen2.posi.y = 775.5;
        window->scene = 3;
    }
    if ((my_sprite->s_glen2.posi.x >= 233 &&
    my_sprite->s_glen2.posi.x <= 243) && my_sprite->s_glen2.posi.y == 147.5) {
        sfSound_play(my_sprite->sound_dor.sound);
        window->scene = 6;
    }
}

void collision_map2_chrono(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_chro2.posi.x >= 387 && my_sprite->s_chro2.posi.x <= 617)
    && my_sprite->s_chro2.posi.y == 106)
        my_sprite->s_chro2.stop_up = 1;
    else
        my_sprite->s_chro2.stop_up = 0;
    if ((my_sprite->s_chro2.posi.y >= 86 && my_sprite->s_chro2.posi.y <= 402)
    && my_sprite->s_chro2.posi.x == 655)
        my_sprite->s_chro2.stop_right = 1;
    else
        my_sprite->s_chro2.stop_right = 0;
    if ((my_sprite->s_chro2.posi.x >= 341 && my_sprite->s_chro2.posi.x <= 551)
    && my_sprite->s_chro2.posi.y == 218)
        my_sprite->s_chro2.stop_down = 1;
    else
        my_sprite->s_chro2.stop_down = 0;
    if ((my_sprite->s_chro2.posi.y >= 106 && my_sprite->s_chro2.posi.y <= 176)
    && my_sprite->s_chro2.posi.x == 387)
        my_sprite->s_chro2.stop_left = 1;
    else
        my_sprite->s_chro2.stop_left = 0;
}