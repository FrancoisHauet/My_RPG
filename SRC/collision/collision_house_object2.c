/*
** EPITECH PROJECT, 2019
** my_RPG
** File description:
** collision_house_object2.c
*/

#include "my_rpg.h"

void mother_collision(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_chro.posi.y >= 322 && my_sprite->s_chro.posi.y <= 402)
    && my_sprite->s_chro.posi.x == 222)
        my_sprite->s_chro.stop_right = 1;
    if ((my_sprite->s_chro.posi.x >= 222 && my_sprite->s_chro.posi.x <= 304)
    && my_sprite->s_chro.posi.y == 402)
        my_sprite->s_chro.stop_up = 1;
    if ((my_sprite->s_chro.posi.y >= 322 && my_sprite->s_chro.posi.y <= 402)
    && my_sprite->s_chro.posi.x == 304)
        my_sprite->s_chro.stop_left = 1;
    if ((my_sprite->s_glenn.posi.y >= 349 && my_sprite->s_glenn.posi.y <= 422)
    && my_sprite->s_glenn.posi.x == 216.5)
        my_sprite->s_glenn.stop_right = 1;
    if ((my_sprite->s_glenn.posi.x >= 216 && my_sprite->s_glenn.posi.x <= 302)
    && my_sprite->s_glenn.posi.y == 422.5)
        my_sprite->s_glenn.stop_up = 1;
    if ((my_sprite->s_glenn.posi.y >= 349 && my_sprite->s_glenn.posi.y <= 422)
    && my_sprite->s_glenn.posi.x == 302)
        my_sprite->s_glenn.stop_left = 1;
}

void plant_collision_chrono(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_chro.posi.x >= 716 &&
    my_sprite->s_chro.posi.x <= 804)
    && my_sprite->s_chro.posi.y == 646)
        my_sprite->s_chro.stop_down = 1;
    if ((my_sprite->s_chro.posi.y >= 646 &&
    my_sprite->s_chro.posi.y <= 700)
    && my_sprite->s_chro.posi.x == 716)
        my_sprite->s_chro.stop_right = 1;
    if ((my_sprite->s_chro.posi.x >= 134 &&
    my_sprite->s_chro.posi.x <= 222)
    && my_sprite->s_chro.posi.y == 646)
        my_sprite->s_chro.stop_down = 1;
    if ((my_sprite->s_chro.posi.y >= 646 &&
    my_sprite->s_chro.posi.y <= 700)
    && my_sprite->s_chro.posi.x == 222)
        my_sprite->s_chro.stop_left = 1;
}

void carpet_collision(draw_sprite_t *my_sprite, setup_t *window)
{
    if ((my_sprite->s_glenn.posi.x >= 441.5 &&
    my_sprite->s_glenn.posi.x <= 488)
    && my_sprite->s_glenn.posi.y == 725.5) {
        sfSound_play(my_sprite->sound_dor.sound);
        window->scene = 3;
    }
    if ((my_sprite->s_chro.posi.x >= 441.5 &&
    my_sprite->s_chro.posi.x <= 488)
    && my_sprite->s_chro.posi.y == 700) {
        sfSound_play(my_sprite->sound_dor.sound);
        window->scene = 3;
    }
}

void plant_collision_glenn(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_glenn.posi.x >= 714.5 &&
    my_sprite->s_glenn.posi.x <= 803)
    && my_sprite->s_glenn.posi.y == 670)
        my_sprite->s_glenn.stop_down = 1;
    if ((my_sprite->s_glenn.posi.y >= 670 &&
    my_sprite->s_glenn.posi.y <= 725.5)
    && my_sprite->s_glenn.posi.x == 714.5)
        my_sprite->s_glenn.stop_right = 1;
    if ((my_sprite->s_glenn.posi.x >= 134 &&
    my_sprite->s_glenn.posi.x <= 218)
    && my_sprite->s_glenn.posi.y == 670)
        my_sprite->s_glenn.stop_down = 1;
    if ((my_sprite->s_glenn.posi.y >= 670 &&
    my_sprite->s_glenn.posi.y <= 725.5)
    && my_sprite->s_glenn.posi.x == 218)
        my_sprite->s_glenn.stop_left = 1;
}