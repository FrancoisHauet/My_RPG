/*
** EPITECH PROJECT, 2019
** my_RPG
** File description:
** choose_scene.c
*/

#include "my_rpg.h"

void init_scene(setup_t *window, draw_sprite_t *my_sprite)
{
    window->scene = 0;
    window->rec = 1;
    my_sprite->button = 0;
    my_sprite->text_numb = 0;
    my_sprite->text_numb2 = 0;
    my_sprite->timer = 0;
    my_sprite->choose = 4;
    my_sprite->s_player.select = 0;
    my_sprite->key_select = 0;
    my_sprite->level = 0;
    my_sprite->sword = 0;
    my_sprite->back = 0;
    my_sprite->lose = 0;
    my_sprite->anim_fight = 0;
    my_sprite->fight_turn = 0;
    my_sprite->boss_life = 100;
    sfRenderWindow_setFramerateLimit(window->window, 60);
}

void choose3(setup_t *window, draw_sprite_t *my_sprite)
{
    switch (window->scene) {
        case 6:
            draw_arena(my_sprite, window);
            display_hud(window, my_sprite);
            break;
        case 5:
            draw_second_map(window, my_sprite);
            display_hud(window, my_sprite);
            break;
        case 4:
            draw_tuto(window, my_sprite);
            break;
    }
}

void choose2(setup_t *window, draw_sprite_t *my_sprite)
{
    switch (window->scene) {
        case 12:
            draw_end2(window, my_sprite);
            break;
        case 11:
            draw_lose(window, my_sprite);
            break;
        case 10:
            draw_end(window, my_sprite);
            break;
        case 9:
            draw_map3(my_sprite, window);
            display_hud(window, my_sprite);
            break;
        case 8:
            disp_fight_map(window, my_sprite);
            break;
        case 7:
            draw_inventory(my_sprite, window);
            break;
    }
}

void choose(setup_t *window, draw_sprite_t *my_sprite)
{
    switch (window->scene) {
        case 3:
            draw_first_map(window, my_sprite);
            display_hud(window, my_sprite);
            break;
        case 2:
            draw_house(window, my_sprite);
            display_hud(window, my_sprite);
            break;
        case 1:
            draw_choose_player(window, my_sprite);
            break;
        case 0:
            draw_home(window, my_sprite);
            break;
    }
    choose3(window, my_sprite);
    choose2(window, my_sprite);
}