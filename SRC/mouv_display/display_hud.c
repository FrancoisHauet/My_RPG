/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** display_hud.c
*/

#include"my_rpg.h"

void display_lvl_hud(setup_t *window, draw_sprite_t *my_sprite)
{
    sfText_setString(my_sprite->txt_lvl1.text, "Level:");
    sfText_setPosition(my_sprite->txt_lvl1.text, (sfVector2f) {25, 730});
    sfText_setColor(my_sprite->txt_lvl1.text, sfCyan);
    sfRenderWindow_drawText(window->window, my_sprite->txt_lvl1.text, NULL);
    sfText_setString(my_sprite->txt_lvl2.text, my_itoa(my_sprite->niv));
    sfText_setPosition(my_sprite->txt_lvl2.text, (sfVector2f) {80, 730});
    sfText_setColor(my_sprite->txt_lvl2.text, sfCyan);
    sfRenderWindow_drawText(window->window, my_sprite->txt_lvl2.text, NULL);
}

void display_txt_hud(setup_t *window, draw_sprite_t *my_sprite)
{
    sfText_setString(my_sprite->txt_hp.text, my_itoa(my_sprite->hp1));
    sfText_setPosition(my_sprite->txt_hp.text, (sfVector2f) {100, 750});
    sfText_setColor(my_sprite->txt_hp.text, sfGreen);
    sfRenderWindow_drawText(window->window, my_sprite->txt_hp.text, NULL);
    sfText_setString(my_sprite->txt_a.text, my_itoa(my_sprite->att1));
    sfText_setPosition(my_sprite->txt_a.text, (sfVector2f) {100, 768});
    sfText_setColor(my_sprite->txt_a.text, sfBlack);
    sfRenderWindow_drawText(window->window, my_sprite->txt_a.text, NULL);
    sfText_setString(my_sprite->txt_ms.text, my_itoa(my_sprite->ms1));
    sfText_setPosition(my_sprite->txt_ms.text, (sfVector2f) {100, 783});
    sfText_setColor(my_sprite->txt_ms.text, sfYellow);
    sfRenderWindow_drawText(window->window, my_sprite->txt_ms.text, NULL);
}

void display_txt_hud2(setup_t *window, draw_sprite_t *my_sprite)
{
    sfText_setString(my_sprite->txt_hp.text, my_itoa(my_sprite->hp2));
    sfText_setPosition(my_sprite->txt_hp.text, (sfVector2f) {100, 750});
    sfText_setColor(my_sprite->txt_hp.text, sfGreen);
    sfRenderWindow_drawText(window->window, my_sprite->txt_hp.text, NULL);
    sfText_setString(my_sprite->txt_a.text, my_itoa(my_sprite->att2));
    sfText_setPosition(my_sprite->txt_a.text, (sfVector2f) {100, 768});
    sfText_setColor(my_sprite->txt_a.text, sfBlack);
    sfRenderWindow_drawText(window->window, my_sprite->txt_a.text, NULL);
    sfText_setString(my_sprite->txt_ms.text, my_itoa(my_sprite->ms2));
    sfText_setPosition(my_sprite->txt_ms.text, (sfVector2f) {100, 783});
    sfText_setColor(my_sprite->txt_ms.text, sfYellow);
    sfRenderWindow_drawText(window->window, my_sprite->txt_ms.text, NULL);
}

void play_music_scene(draw_sprite_t *my_sprite)
{
    sfMusic_stop(my_sprite->music.music);
    sfMusic_play(my_sprite->music2.music);
}

void display_hud(setup_t *window, draw_sprite_t *my_sprite)
{
    if (my_sprite->s_player.select == 1)
        sfRenderWindow_drawSprite(window->window, my_sprite->s_icop1.s, NULL);
    else
        sfRenderWindow_drawSprite(window->window, my_sprite->s_icop2.s, NULL);
    sfRenderWindow_drawSprite(window->window, my_sprite->s_icohp.s, NULL);
    sfRenderWindow_drawSprite(window->window, my_sprite->s_icoa.s, NULL);
    sfRenderWindow_drawSprite(window->window, my_sprite->s_icos.s, NULL);
    if (my_sprite->s_player.select == 1)
        display_txt_hud(window, my_sprite);
    else
        display_txt_hud2(window, my_sprite);
    display_lvl_hud(window, my_sprite);
}