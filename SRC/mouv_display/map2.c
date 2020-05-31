/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** map2.c
*/

#include "my_rpg.h"

void draw_chrono_second_map(setup_t *window, draw_sprite_t *my_sprite)
{
    if (my_sprite->s_player.select == 1) {
        mouv_chrono_mini(my_sprite);
        animate_char(my_sprite, 280, 520, &my_sprite->s_chro2);
        collision_map2_chrono(my_sprite);
        limit_map2(my_sprite, window);
        enter_map2(my_sprite);
        rock_map2(my_sprite);
        water_tree_chrono_map2(my_sprite);
        sfSprite_setPosition(my_sprite->s_chro2.s, my_sprite->s_chro2.posi);
        sfSprite_setTextureRect(my_sprite->s_chro2.s, my_sprite->s_chro2.rect);
        sfRenderWindow_drawSprite(window->window, my_sprite->s_chro2.s, NULL);
    }
}

void draw_glenn_second_map(setup_t *window, draw_sprite_t *my_sprite)
{
    if (my_sprite->s_player.select == 2) {
        mouv_glenn_mini(my_sprite);
        animate_char(my_sprite, 282, 376, &my_sprite->s_glen2);
        collision_map2_glenn(my_sprite);
        limit_map2(my_sprite, window);
        enter_map2(my_sprite);
        rock_map2(my_sprite);
        water_tree_glenn_map2(my_sprite);
        sfSprite_setPosition(my_sprite->s_glen2.s, my_sprite->s_glen2.posi);
        sfSprite_setTextureRect(my_sprite->s_glen2.s, my_sprite->s_glen2.rect);
        sfRenderWindow_drawSprite(window->window, my_sprite->s_glen2.s, NULL);
    }
}

void draw_second_map(setup_t *window, draw_sprite_t *my_sprite)
{
    window->posi_mouse = sfMouse_getPositionRenderWindow(window->window);
    sfRenderWindow_drawSprite(window->window, my_sprite->s_map2.s, NULL);
    draw_glenn_second_map(window, my_sprite);
    draw_chrono_second_map(window, my_sprite);
}