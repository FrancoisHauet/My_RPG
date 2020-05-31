/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** inventory.c
*/

#include "my_rpg.h"

void draw_inventory_glenn(draw_sprite_t *my_sprite, setup_t *window)
{
    sfRenderWindow_drawSprite(window->window, my_sprite->s_invg.s, NULL);
    sfText_setString(my_sprite->text14.text, my_itoa(my_sprite->hp2));
    sfText_setPosition(my_sprite->text14.text, (sfVector2f) {630, 155});
    sfText_setColor(my_sprite->text14.text, sfBlack);
    sfRenderWindow_drawText(window->window, my_sprite->text14.text, NULL);
    sfText_setString(my_sprite->text15.text, my_itoa(my_sprite->att2));
    sfText_setPosition(my_sprite->text15.text, (sfVector2f) {800, 230});
    sfText_setColor(my_sprite->text15.text, sfBlack);
    sfRenderWindow_drawText(window->window, my_sprite->text15.text, NULL);
    sfText_setString(my_sprite->text16.text, my_itoa(my_sprite->ms2));
    sfText_setPosition(my_sprite->text16.text, (sfVector2f) {780, 314});
    sfText_setColor(my_sprite->text16.text, sfBlack);
    sfRenderWindow_drawText(window->window, my_sprite->text16.text, NULL);
    draw_button(my_sprite, window);
    if (sfKeyboard_isKeyPressed(sfKeyE) && my_sprite->level == 1 &&
    my_sprite->sword == 1) {
        my_sprite->s_glenn.posi.y = 142;
        my_sprite->s_glenn.posi.x = 467;
        window->scene = 6;
        my_sprite->back = 1;
    }
}

void draw_inventory_chrono(draw_sprite_t *my_sprite, setup_t *window)
{
    sfRenderWindow_drawSprite(window->window, my_sprite->s_invc.s, NULL);
    sfText_setString(my_sprite->text14.text, my_itoa(my_sprite->hp1));
    sfText_setPosition(my_sprite->text14.text, (sfVector2f) {630, 155});
    sfText_setColor(my_sprite->text14.text, sfBlack);
    sfRenderWindow_drawText(window->window, my_sprite->text14.text, NULL);
    sfText_setString(my_sprite->text15.text, my_itoa(my_sprite->att1));
    sfText_setPosition(my_sprite->text15.text, (sfVector2f) {800, 230});
    sfText_setColor(my_sprite->text15.text, sfBlack);
    sfRenderWindow_drawText(window->window, my_sprite->text15.text, NULL);
    sfText_setString(my_sprite->text16.text, my_itoa(my_sprite->ms1));
    sfText_setPosition(my_sprite->text16.text, (sfVector2f) {780, 314});
    sfText_setColor(my_sprite->text16.text, sfBlack);
    sfRenderWindow_drawText(window->window, my_sprite->text16.text, NULL);
    draw_button(my_sprite, window);
    if (sfKeyboard_isKeyPressed(sfKeyE) && my_sprite->level == 1 &&
    my_sprite->sword == 1) {
        my_sprite->s_chro.posi.y = 142;
        my_sprite->s_chro.posi.x = 460;
        window->scene = 6;
        my_sprite->back = 1;
    }
}

void draw_inventory(draw_sprite_t *my_sprite, setup_t *window)
{
    my_sprite->lose = 3;
    window->posi_mouse = sfMouse_getPositionRenderWindow(window->window);
    if (my_sprite->s_player.select == 1)
        draw_inventory_chrono(my_sprite, window);
    else
        draw_inventory_glenn(my_sprite, window);
}