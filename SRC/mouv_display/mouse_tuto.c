/*
** EPITECH PROJECT, 2019
** my_RPG
** File description:
** mouse_tuto.c
*/

#include "my_rpg.h"

void click_tuto(setup_t *window, draw_sprite_t *my_sprite)
{
    if (window->event.type == sfEvtMouseButtonPressed) {
        if (window->posi_mouse.x > my_sprite->s_tuto.posi.x &&
        window->posi_mouse.x < my_sprite->s_tuto.posi.x + 450 &&
        window->posi_mouse.y > my_sprite->s_tuto.posi.y &&
        window->posi_mouse.y < my_sprite->s_tuto.posi.y + 80) {
            window->scene = 4;
        }
    }
}

void color_tuto(setup_t *window, draw_sprite_t *my_sprite)
{
    if (window->posi_mouse.x > my_sprite->s_tuto.posi.x &&
        window->posi_mouse.x < my_sprite->s_tuto.posi.x + 450
        && window->posi_mouse.y > my_sprite->s_tuto.posi.y &&
        window->posi_mouse.y < my_sprite->s_tuto.posi.y + 80)
        my_sprite->s_tuto.rect.top = 82;
    else
        my_sprite->s_tuto.rect.top = 0;
    sfSprite_setTextureRect(my_sprite->s_tuto.s, my_sprite->s_tuto.rect);
}