/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** mouse_home.c
*/

#include "my_rpg.h"

void color_name(setup_t *window, draw_sprite_t *my_sprite)
{
    if (window->posi_mouse.x > my_sprite->s_name.posi.x &&
        window->posi_mouse.x < my_sprite->s_name.posi.x + 205
        && window->posi_mouse.y > my_sprite->s_name.posi.y &&
        window->posi_mouse.y < my_sprite->s_name.posi.y + 40)
        my_sprite->s_name.rect.top = 40;
    else
        my_sprite->s_name.rect.top = 0;
    sfSprite_setTextureRect(my_sprite->s_name.s, my_sprite->s_name.rect);
    if (window->posi_mouse.x > my_sprite->s_name2.posi.x &&
        window->posi_mouse.x < my_sprite->s_name2.posi.x + 150 &&
        window->posi_mouse.y > my_sprite->s_name2.posi.y &&
        window->posi_mouse.y < my_sprite->s_name2.posi.y + 40)
        my_sprite->s_name2.rect.top = 40;
    else
        my_sprite->s_name2.rect.top = 0;
    sfSprite_setTextureRect(my_sprite->s_name2.s, my_sprite->s_name2.rect);
}

void click_name2(setup_t *window, draw_sprite_t *my_sprite)
{
    if (window->event.type == sfEvtMouseButtonPressed) {
        if (window->posi_mouse.x > my_sprite->s_name2.posi.x &&
        window->posi_mouse.x < my_sprite->s_name2.posi.x + 150 &&
        window->posi_mouse.y > my_sprite->s_name2.posi.y &&
        window->posi_mouse.y < my_sprite->s_name2.posi.y + 40) {
            my_sprite->s_player.attack = 8;
            my_sprite->s_player.speed = 6;
            my_sprite->s_player.life = 20;
            my_sprite->s_player.select = 2;
            my_sprite->s_player.name = "Glenn";
            window->scene = 2;
            play_music_scene(my_sprite);
        }
    }
}

void click_name(setup_t *window, draw_sprite_t *my_sprite)
{
    if (window->event.type == sfEvtMouseButtonPressed) {
        if (window->posi_mouse.x > my_sprite->s_name.posi.x &&
        window->posi_mouse.x < my_sprite->s_name.posi.x + 205
        && window->posi_mouse.y > my_sprite->s_name.posi.y &&
        window->posi_mouse.y < my_sprite->s_name.posi.y + 40) {
            my_sprite->s_player.attack = 10;
            my_sprite->s_player.speed = 10;
            my_sprite->s_player.life = 15;
            my_sprite->s_player.select = 1;
            my_sprite->s_player.name = "Chrono";
            window->scene = 2;
            play_music_scene(my_sprite);
        }
    }
}

void color_bottom(setup_t *window, draw_sprite_t *my_sprite)
{
    if (window->posi_mouse.x > my_sprite->s_start.posi.x &&
        window->posi_mouse.x < my_sprite->s_start.posi.x + 330
        && window->posi_mouse.y > my_sprite->s_start.posi.y &&
        window->posi_mouse.y < my_sprite->s_start.posi.y + 88)
        my_sprite->s_start.rect.top = 88;
    else
        my_sprite->s_start.rect.top = 0;
    sfSprite_setTextureRect(my_sprite->s_start.s, my_sprite->s_start.rect);
    if (window->posi_mouse.x > my_sprite->s_exit.posi.x &&
        window->posi_mouse.x < my_sprite->s_exit.posi.x + 250 &&
        window->posi_mouse.y > my_sprite->s_exit.posi.y &&
        window->posi_mouse.y < my_sprite->s_exit.posi.y + 96)
        my_sprite->s_exit.rect.top = 96;
    else
        my_sprite->s_exit.rect.top = 0;
    sfSprite_setTextureRect(my_sprite->s_exit.s, my_sprite->s_exit.rect);
}

void click_bottom(setup_t *window, draw_sprite_t *my_sprite)
{
    if (window->event.type == sfEvtMouseButtonPressed) {
        if (window->posi_mouse.x > my_sprite->s_exit.posi.x &&
            window->posi_mouse.x < my_sprite->s_exit.posi.x + 250
            && window->posi_mouse.y > my_sprite->s_exit.posi.y &&
            window->posi_mouse.y < my_sprite->s_exit.posi.y + 96)
            sfRenderWindow_close(window->window);
        }
    if (window->event.type == sfEvtMouseButtonPressed) {
        if (window->posi_mouse.x > my_sprite->s_start.posi.x &&
        window->posi_mouse.x < my_sprite->s_start.posi.x + 330 &&
        window->posi_mouse.y > my_sprite->s_start.posi.y &&
        window->posi_mouse.y < my_sprite->s_start.posi.y + 88) {
            window->scene = 1;
        }
    }
}