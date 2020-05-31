/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** animate_tools.c
*/

#include "my_rpg.h"

void animate_up(draw_sprite_t *my_sprite, int x, int y, set_sprite_t *c)
{
    int max = (x / 7) * 4;

    c->rect.top = (y / 8) * 5;
    if (sfClock_getElapsedTime(my_sprite->move_clock.clock).microseconds
    > 400000) {
        c->rect.left += x / 7;
        if (c->rect.left >= max)
            c->rect.left = 0;
        sfClock_restart(my_sprite->move_clock.clock);
    }
}

void animate_right(draw_sprite_t *my_sprite, int x, int y, set_sprite_t *c)
{
    int max = (x / 7) * 4;

    c->rect.top = (y / 8) * 7;
    if (sfClock_getElapsedTime(my_sprite->move_clock.clock).microseconds
    > 400000) {
        c->rect.left += x / 7;
        if (c->rect.left >= max)
            c->rect.left = 0;
        sfClock_restart(my_sprite->move_clock.clock);
    }
}

void animate_left(draw_sprite_t *my_sprite, int x, int y, set_sprite_t *c)
{
    int max = (x / 7) * 4;

    c->rect.top = (y / 8) * 6;
    if (sfClock_getElapsedTime(my_sprite->move_clock.clock).microseconds
    > 400000) {
        c->rect.left += x / 7;
        if (c->rect.left >= max)
            c->rect.left = 0;
        sfClock_restart(my_sprite->move_clock.clock);
    }
}

void animate_down(draw_sprite_t *my_sprite, int x, int y, set_sprite_t *c)
{
    int max = (x / 7) * 4;

    c->rect.top = (y / 8) * 4;
    if (sfClock_getElapsedTime(my_sprite->move_clock.clock).microseconds
    > 400000) {
        c->rect.left += x / 7;
        if (c->rect.left >= max)
            c->rect.left = 0;
        sfClock_restart(my_sprite->move_clock.clock);
    }
}