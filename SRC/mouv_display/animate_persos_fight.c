/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** animate_persos_fight.c
*/

#include "my_rpg.h"

void animate_persos_fight(setup_t *window, draw_sprite_t *my_sprite)
{
    if (my_sprite->s_player.select == 1) {
        animate_chrono_fight(my_sprite);
        animate_chrono_fight2(my_sprite);
        animate_chrono_fight3(my_sprite);
        sfSprite_setPosition(my_sprite->s_chro.s, my_sprite->s_chro.posi);
        sfSprite_setTextureRect(my_sprite->s_chro.s, my_sprite->s_chro.rect);
        sfRenderWindow_drawSprite(window->window, my_sprite->s_chro.s, NULL);
    }
    if (my_sprite->s_player.select == 2) {
        animate_glenn_fight(my_sprite);
        animate_glenn_fight2(my_sprite);
        animate_glenn_fight3(my_sprite);
        sfSprite_setPosition(my_sprite->s_glenn.s, my_sprite->s_glenn.posi);
        sfSprite_setTextureRect(my_sprite->s_glenn.s, my_sprite->s_glenn.rect);
        sfRenderWindow_drawSprite(window->window, my_sprite->s_glenn.s, NULL);
    }
}