/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** animate_characters.c
*/

#include "my_rpg.h"

void animate_char(draw_sprite_t *my_sprite, int x, int y, set_sprite_t *c)
{
    if (!sfKeyboard_isKeyPressed(sfKeyLeft) &&
    !sfKeyboard_isKeyPressed(sfKeyRight) &&
    !sfKeyboard_isKeyPressed(sfKeyUp) &&
    !sfKeyboard_isKeyPressed(sfKeyDown)) {
        if (my_sprite->immobile == 1) {
            c->rect.left = 0;
            my_sprite->immobile = 0;
        }
        if (my_sprite->side == 0)
            animate_down(my_sprite, x, y, c);
        else if (my_sprite->side == 1)
            animate_up(my_sprite, x, y, c);
        if (my_sprite->side == 2)
            animate_left(my_sprite, x, y, c);
        else if (my_sprite->side == 3)
            animate_right(my_sprite, x, y, c);
    }
}