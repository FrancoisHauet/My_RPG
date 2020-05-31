/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** map3.c
*/

#include "my_rpg.h"

void draw_glenn_map3(draw_sprite_t *my_sprite, setup_t *window)
{
    if (my_sprite->s_player.select == 2) {
        mouv_glenn_mini(my_sprite);
        collision_map3_glenn(my_sprite);
        collision_map3_glenn2(my_sprite, window);
        collision_map3_glenn3(my_sprite);
        animate_char(my_sprite, 282, 376, &my_sprite->s_glen2);
        sfSprite_setPosition(my_sprite->s_glen2.s, my_sprite->s_glen2.posi);
        sfSprite_setTextureRect(my_sprite->s_glen2.s, my_sprite->s_glen2.rect);
        sfRenderWindow_drawSprite(window->window, my_sprite->s_glen2.s, NULL);
    }
}

void draw_chrono_map3(draw_sprite_t *my_sprite, setup_t *window)
{
    if (my_sprite->s_player.select == 1) {
        mouv_chrono_mini(my_sprite);
        collision_map3_chrono(my_sprite);
        collision_map3_chrono2(my_sprite, window);
        collision_map3_chrono3(my_sprite);
        animate_char(my_sprite, 280, 520, &my_sprite->s_chro2);
        sfSprite_setPosition(my_sprite->s_chro2.s, my_sprite->s_chro2.posi);
        sfSprite_setTextureRect(my_sprite->s_chro2.s, my_sprite->s_chro2.rect);
        sfRenderWindow_drawSprite(window->window, my_sprite->s_chro2.s, NULL);
    }
}

void draw_map3(draw_sprite_t *my_sprite, setup_t *window)
{
    window->posi_mouse = sfMouse_getPositionRenderWindow(window->window);
    sfRenderWindow_drawSprite(window->window, my_sprite->s_map3.s, NULL);
    sfRenderWindow_drawSprite(window->window, my_sprite->s_boss2.s, NULL);
    draw_chrono_map3(my_sprite, window);
    draw_glenn_map3(my_sprite, window);
}