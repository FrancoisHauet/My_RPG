/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** click_inventory.c
*/

#include "my_rpg.h"

void click_sword(draw_sprite_t *my_sprite, setup_t *window)
{
    if (window->event.type == sfEvtMouseButtonPressed &&
    my_sprite->sword == 0) {
        if (window->posi_mouse.x > 86 && window->posi_mouse.x < 170 &&
        window->posi_mouse.y > 712 && window->posi_mouse.y < 800) {
            my_sprite->att1 += 2;
            my_sprite->att2 += 2;
            my_sprite->sword = 1;
        }
    }
}

void click_button2(draw_sprite_t *my_sprite, setup_t *window)
{
    if (window->event.type == sfEvtMouseButtonPressed &&
    my_sprite->level == 0) {
        if (window->posi_mouse.x > my_sprite->s_right3.posi.x &&
        window->posi_mouse.x < my_sprite->s_right3.posi.x + 37 &&
        window->posi_mouse.y > my_sprite->s_right3.posi.y &&
        window->posi_mouse.y < my_sprite->s_right3.posi.y + 36) {
            my_sprite->ms1 += 1;
            my_sprite->ms2 += 1;
            my_sprite->level = 1;
        }
    }
}

void click_button(draw_sprite_t *my_sprite, setup_t *window)
{
    if (window->event.type == sfEvtMouseButtonPressed &&
    my_sprite->level == 0) {
        if (window->posi_mouse.x > my_sprite->s_right.posi.x &&
        window->posi_mouse.x < my_sprite->s_right.posi.x + 37 &&
        window->posi_mouse.y > my_sprite->s_right.posi.y &&
        window->posi_mouse.y < my_sprite->s_right.posi.y + 36) {
            my_sprite->hp1 += 1;
            my_sprite->hp2 += 1;
            my_sprite->level = 1;
        }
    } if (window->event.type == sfEvtMouseButtonPressed &&
    my_sprite->level == 0) {
        if (window->posi_mouse.x > my_sprite->s_right2.posi.x &&
        window->posi_mouse.x < my_sprite->s_right2.posi.x + 37 &&
        window->posi_mouse.y > my_sprite->s_right2.posi.y &&
        window->posi_mouse.y < my_sprite->s_right2.posi.y + 36) {
            my_sprite->att1 += 1;
            my_sprite->att2 += 1;
            my_sprite->level = 1;
        }
    }
}

void draw_button(draw_sprite_t *my_sprite, setup_t *window)
{
    if (my_sprite->level == 0) {
        sfRenderWindow_drawSprite(window->window, my_sprite->s_right.s, NULL);
        sfRenderWindow_drawSprite(window->window, my_sprite->s_right2.s, NULL);
        sfRenderWindow_drawSprite(window->window, my_sprite->s_right3.s, NULL);
    }
    click_button(my_sprite, window);
    click_button2(my_sprite, window);
    click_sword(my_sprite, window);
}