/*
** EPITECH PROJECT, 2019
** my_RPG
** File description:
** menu.c
*/

#include "my_rpg.h"

void draw_tuto(setup_t *window, draw_sprite_t *my_sprite)
{
    window->posi_mouse = sfMouse_getPositionRenderWindow(window->window);
    sfRenderWindow_drawSprite(window->window, my_sprite->s_tut.s, NULL);
    sfRenderWindow_drawSprite(window->window, my_sprite->s_exit.s, NULL);
    color_bottom(window, my_sprite);
    click_bottom(window, my_sprite);
}

void draw_choose_player(setup_t *window, draw_sprite_t *my_sprite)
{
    window->posi_mouse = sfMouse_getPositionRenderWindow(window->window);
    sfRenderWindow_drawSprite(window->window, my_sprite->s_home2.s, NULL);
    sfRenderWindow_drawSprite(window->window, my_sprite->s_name.s, NULL);
    sfRenderWindow_drawSprite(window->window, my_sprite->s_name2.s, NULL);
    color_name(window, my_sprite);
    click_name(window, my_sprite);
    click_name2(window, my_sprite);
}

void draw_home(setup_t *window, draw_sprite_t *my_sprite)
{
    window->posi_mouse = sfMouse_getPositionRenderWindow(window->window);
    sfRenderWindow_drawSprite(window->window, my_sprite->s_home.s, NULL);
    sfRenderWindow_drawSprite(window->window, my_sprite->s_start.s, NULL);
    sfRenderWindow_drawSprite(window->window, my_sprite->s_exit.s, NULL);
    sfRenderWindow_drawSprite(window->window, my_sprite->s_tuto.s, NULL);
    click_tuto(window, my_sprite);
    color_tuto(window, my_sprite);
    color_bottom(window, my_sprite);
    click_bottom(window, my_sprite);
}