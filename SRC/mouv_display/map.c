/*
** EPITECH PROJECT, 2019
** my_RPG
** File description:
** map.c
*/

#include "my_rpg.h"

void draw_glenn_first_map(setup_t *window, draw_sprite_t *my_sprite)
{
    if (my_sprite->s_player.select == 2) {
        mouv_glenn_mini(my_sprite);
        animate_char(my_sprite, 282, 376, &my_sprite->s_glen2);
        house_collision_glenn(my_sprite);
        stopper_collision(my_sprite);
        bush_glenn_collision(my_sprite);
        bush_top_glenn_collision(my_sprite);
        limit_map_gleen(my_sprite, window);
        rock_collision_glenn(my_sprite);
        water_collision_glenn(my_sprite);
        bush_fencing_collision(my_sprite);
        bush_fencing_collision2_glenn(my_sprite);
        pokestop_collision_glenn(my_sprite);
        house_collision_glenn2(my_sprite);
        shop_collision(my_sprite);
        pokestop_collision_glenn2(my_sprite);
        sfSprite_setPosition(my_sprite->s_glen2.s, my_sprite->s_glen2.posi);
        sfSprite_setTextureRect(my_sprite->s_glen2.s, my_sprite->s_glen2.rect);
        sfRenderWindow_drawSprite(window->window, my_sprite->s_glen2.s, NULL);
    }
}

void draw_chro_first_map(setup_t *window, draw_sprite_t *my_sprite)
{
    if (my_sprite->s_player.select == 1) {
        mouv_chrono_mini(my_sprite);
        animate_char(my_sprite, 280, 520, &my_sprite->s_chro2);
        house_collision_chrono(my_sprite);
        stopper_collision(my_sprite);
        bush_chrono_collision(my_sprite);
        bush_top_collision_chrono(my_sprite);
        limit_map_chrono(my_sprite, window);
        rock_collision_chrono(my_sprite);
        water_collision_chrono(my_sprite);
        bush_fencing_collision(my_sprite);
        bush_fencing_collision2_chrono(my_sprite);
        pokestop_collision_chrono(my_sprite);
        house_collision_chrono2(my_sprite);
        shop_collision(my_sprite);
        pokestop_collision_chrono2(my_sprite);
        sfSprite_setPosition(my_sprite->s_chro2.s, my_sprite->s_chro2.posi);
        sfSprite_setTextureRect(my_sprite->s_chro2.s, my_sprite->s_chro2.rect);
        sfRenderWindow_drawSprite(window->window, my_sprite->s_chro2.s, NULL);
    }
}

void draw_first_map(setup_t *window, draw_sprite_t *my_sprite)
{
    window->posi_mouse = sfMouse_getPositionRenderWindow(window->window);
    sfRenderWindow_drawSprite(window->window, my_sprite->s_map1.s, NULL);
    draw_glenn_first_map(window, my_sprite);
    draw_chro_first_map(window, my_sprite);
}