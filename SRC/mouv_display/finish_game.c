/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** finish_game.c
*/

#include "my_rpg.h"

void draw_lose(setup_t *window, draw_sprite_t *my_sprite)
{
    window->posi_mouse = sfMouse_getPositionRenderWindow(window->window);
    sfRenderWindow_drawSprite(window->window, my_sprite->s_lose.s, NULL);
    sfRenderWindow_drawSprite(window->window, my_sprite->s_retry.s, NULL);
    color_retry(window, my_sprite);
    click_retry(window, my_sprite);
}

void draw_end2(setup_t *window, draw_sprite_t *my_sprite)
{
    window->posi_mouse = sfMouse_getPositionRenderWindow(window->window);
    my_sprite->s_exit.posi.x = 637;
    my_sprite->s_exit.posi.y = 700;
    sfRenderWindow_drawSprite(window->window, my_sprite->s_credi.s, NULL);
    sfSprite_setPosition(my_sprite->s_exit.s, my_sprite->s_exit.posi);
    sfRenderWindow_drawSprite(window->window, my_sprite->s_exit.s, NULL);
    color_bottom(window, my_sprite);
    click_bottom(window, my_sprite);
}

void draw_end(setup_t *window, draw_sprite_t *my_sprite)
{
    if (my_sprite->s_player.select == 1)
        sfRenderWindow_drawSprite(window->window, my_sprite->s_endc.s, NULL);
    else
        sfRenderWindow_drawSprite(window->window, my_sprite->s_endg.s, NULL);
    if (sfKeyboard_isKeyPressed(sfKeySpace))
        window->scene = 12;
}