/*
** EPITECH PROJECT, 2019
** my_RPG
** File description:
** collision_house_object.c
*/

#include "my_rpg.h"

void collision_table(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_glenn.posi.y >= 139 && my_sprite->s_glenn.posi.y <= 349)
    && my_sprite->s_glenn.posi.x == 431)
        my_sprite->s_glenn.stop_left = 1;
    if ((my_sprite->s_glenn.posi.x >= 204.5 &&
    my_sprite->s_glenn.posi.x <= 393.5)
    && my_sprite->s_glenn.posi.y == 349)
        my_sprite->s_glenn.stop_up = 1;
    if ((my_sprite->s_glenn.posi.y >= 139 && my_sprite->s_glenn.posi.y <= 349)
    && my_sprite->s_glenn.posi.x == 204.5)
        my_sprite->s_glenn.stop_right = 1;
    if ((my_sprite->s_chro.posi.y >= 130 && my_sprite->s_chro.posi.y <= 332)
    && my_sprite->s_chro.posi.x == 430)
        my_sprite->s_chro.stop_left = 1;
    if ((my_sprite->s_chro.posi.x >= 206 &&
    my_sprite->s_chro.posi.x <= 430)
    && my_sprite->s_chro.posi.y == 332)
        my_sprite->s_chro.stop_up = 1;
    if ((my_sprite->s_chro.posi.y >= 130 && my_sprite->s_chro.posi.y <= 332)
    && my_sprite->s_chro.posi.x == 206)
        my_sprite->s_chro.stop_right = 1;
}

void collision_bed(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_glenn.posi.y >= 139 && my_sprite->s_glenn.posi.y <= 247)
    && my_sprite->s_glenn.posi.x == 684.5)
        my_sprite->s_glenn.stop_right = 1;
    if ((my_sprite->s_glenn.posi.x >= 714 && my_sprite->s_glenn.posi.x <= 795)
    && my_sprite->s_glenn.posi.y == 247)
        my_sprite->s_glenn.stop_up = 1;
    if ((my_sprite->s_glenn.posi.y >= 139 && my_sprite->s_glenn.posi.y <= 247)
    && my_sprite->s_glenn.posi.x == 795.5)
        my_sprite->s_glenn.stop_left = 1;
    if ((my_sprite->s_chro.posi.y >= 130 && my_sprite->s_chro.posi.y <= 222)
    && my_sprite->s_chro.posi.x == 690)
        my_sprite->s_chro.stop_right = 1;
    if ((my_sprite->s_chro.posi.x >= 718 && my_sprite->s_chro.posi.x <= 802)
    && my_sprite->s_chro.posi.y == 222)
        my_sprite->s_chro.stop_up = 1;
    if ((my_sprite->s_chro.posi.y >= 130 && my_sprite->s_chro.posi.y <= 222)
    && my_sprite->s_chro.posi.x == 802)
        my_sprite->s_chro.stop_left = 1;
}

void collision_dresser(draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_glenn.posi.y >= 139 && my_sprite->s_glenn.posi.y <= 190)
    && my_sprite->s_glenn.posi.x == 680)
        my_sprite->s_glenn.stop_left = 1;
    if ((my_sprite->s_glenn.posi.x >= 629 && my_sprite->s_glenn.posi.x <= 679)
    && my_sprite->s_glenn.posi.y == 187)
        my_sprite->s_glenn.stop_up = 1;
    if ((my_sprite->s_chro.posi.y >= 130 && my_sprite->s_chro.posi.y <= 162)
    && my_sprite->s_chro.posi.x == 688)
        my_sprite->s_chro.stop_left = 1;
    if ((my_sprite->s_chro.posi.x >= 636 && my_sprite->s_chro.posi.x <= 688)
    && my_sprite->s_chro.posi.y == 162)
        my_sprite->s_chro.stop_up = 1;
}

void speak_collision_glenn(draw_sprite_t *my_sprite, setup_t *window)
{
    if ((my_sprite->s_glenn.posi.x >= 300 && my_sprite->s_glenn.posi.x <= 400)
    && (my_sprite->s_glenn.posi.y >= 375 && my_sprite->s_glenn.posi.y <= 430)
    && my_sprite->text_numb != 2) {
        sfText_setString(my_sprite->text2.text,
        "Parfait, \nes-tu pret pour \nle combat ?");
        sfText_setPosition(my_sprite->text2.text, (sfVector2f) {150, 200});
        sfText_setColor(my_sprite->text2.text, sfBlack);
        sfRenderWindow_drawText(window->window, my_sprite->text2.text, NULL);
        my_sprite->text_numb = 1;
    } if (sfKeyboard_isKeyPressed(sfKeySpace))
        my_sprite->text_numb = 2;
    if (my_sprite->text_numb == 2) {
        sfText_setString(my_sprite->text3.text,
        "Je sais que tu es\npret.\nVa au Sud"
        "\nde la Ville\nchercher des affaires.");
        sfText_setPosition(my_sprite->text3.text, (sfVector2f) {150, 200});
        sfText_setColor(my_sprite->text3.text, sfBlack);
        sfRenderWindow_drawText(window->window, my_sprite->text3.text, NULL);
    }
}

void speak_collision_chrono(draw_sprite_t *my_sprite, setup_t *window)
{
    if ((my_sprite->s_chro.posi.x >= 300 && my_sprite->s_chro.posi.x <= 400)
    && (my_sprite->s_chro.posi.y >= 375 && my_sprite->s_chro.posi.y <= 430)
    && my_sprite->text_numb != 2) {
        sfText_setString(my_sprite->text2.text,
        "Parfait, \nes-tu pret pour \nle combat ?");
        sfText_setPosition(my_sprite->text2.text, (sfVector2f) {150, 200});
        sfText_setColor(my_sprite->text2.text, sfBlack);
        sfRenderWindow_drawText(window->window, my_sprite->text2.text, NULL);
        my_sprite->text_numb = 1;
    } if (sfKeyboard_isKeyPressed(sfKeySpace))
        my_sprite->text_numb = 2;
    if (my_sprite->text_numb == 2) {
        sfText_setString(my_sprite->text3.text,
        "Je sais que tu es\npret.\nVa au Sud"
        "\nde la Ville\nchercher des affaires.");
        sfText_setPosition(my_sprite->text3.text, (sfVector2f) {150, 200});
        sfText_setColor(my_sprite->text3.text, sfBlack);
        sfRenderWindow_drawText(window->window, my_sprite->text3.text, NULL);
    }
}