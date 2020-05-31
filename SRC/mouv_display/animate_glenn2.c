/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** animate_character.c
*/

#include "my_rpg.h"

void move_up_glenn2(draw_sprite_t *my_sprite, int width, int height)
{
    my_sprite->immobile = 1;
    my_sprite->side = 1;
    my_sprite->s_glen2.rect.top = 1 * height / 4;
    if (sfClock_getElapsedTime(my_sprite->move_clock.clock).microseconds
    > 140000) {
        my_sprite->s_glen2.rect.left += width / 7;
        if (my_sprite->s_glen2.rect.left >= width)
            my_sprite->s_glen2.rect.left = 0;
        sfClock_restart(my_sprite->move_clock.clock);
    }
}

void move_down_glenn2(draw_sprite_t *my_sprite, int width)
{
    my_sprite->immobile = 1;
    my_sprite->side = 0;
    my_sprite->s_glen2.rect.top = 0;
    if (sfClock_getElapsedTime(my_sprite->move_clock.clock).microseconds
    > 140000) {
        my_sprite->s_glen2.rect.left += width / 7;
        if (my_sprite->s_glen2.rect.left >= width)
            my_sprite->s_glen2.rect.left = 0;
        sfClock_restart(my_sprite->move_clock.clock);
    }
}

void move_right_glenn2(draw_sprite_t *my_sprite, int width, int height)
{
    my_sprite->immobile = 1;
    my_sprite->side = 3;
    my_sprite->s_glen2.rect.top = 3 * height / 4;
    if (sfClock_getElapsedTime(my_sprite->move_clock.clock).microseconds
    > 140000) {
        my_sprite->s_glen2.rect.left += width / 7;
        if (my_sprite->s_glen2.rect.left >= width)
            my_sprite->s_glen2.rect.left = 0;
        sfClock_restart(my_sprite->move_clock.clock);
    }
}

void move_left_glenn2(draw_sprite_t *my_sprite, int width, int height)
{
    my_sprite->immobile = 1;
    my_sprite->side = 2;
    my_sprite->s_glen2.rect.top = 2 * height / 4;
    if (sfClock_getElapsedTime(my_sprite->move_clock.clock).microseconds
    > 140000) {
        my_sprite->s_glen2.rect.left += width / 7;
        if (my_sprite->s_glen2.rect.left >= width)
            my_sprite->s_glen2.rect.left = 0;
        sfClock_restart(my_sprite->move_clock.clock);
    }
}
