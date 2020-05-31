/*
** EPITECH PROJECT, 2019
** my_RPG
** File description:
** init_menu_sprite.c
*/

#include "my_rpg.h"

void create_tutorial(draw_sprite_t *my_sprite)
{
    my_sprite->t_tut.t = sfTexture_createFromFile("File/tuto.jpg", NULL);
    my_sprite->s_tut.s = sfSprite_create();
    sfSprite_setTexture(my_sprite->s_tut.s, my_sprite->t_tut.t, sfTrue);
    my_sprite->s_tuto.posi = (sfVector2f) {270, 370};
    my_sprite->t_tuto.t = sfTexture_createFromFile("File/Tuto.png", NULL);
    my_sprite->s_tuto.rect = (sfIntRect) {0, 0, 450, 80};
    my_sprite->s_tuto.s = sfSprite_create();
    sfSprite_setTexture(my_sprite->s_tuto.s, my_sprite->t_tuto.t, sfTrue);
    sfSprite_setTextureRect(my_sprite->s_tuto.s, my_sprite->s_tuto.rect);
    sfSprite_setPosition(my_sprite->s_tuto.s, my_sprite->s_tuto.posi);
    my_sprite->s_retry.posi = (sfVector2f) {400, 550};
    my_sprite->t_retry.t = sfTexture_createFromFile("File/Retry.png", NULL);
    my_sprite->s_retry.rect = (sfIntRect) {0, 0, 210, 66};
    my_sprite->s_retry.s = sfSprite_create();
    sfSprite_setTexture(my_sprite->s_retry.s, my_sprite->t_retry.t, sfTrue);
    sfSprite_setTextureRect(my_sprite->s_retry.s, my_sprite->s_retry.rect);
    sfSprite_setPosition(my_sprite->s_retry.s, my_sprite->s_retry.posi);
}

void create_choose_player(draw_sprite_t *my_sprite)
{
    my_sprite->t_home2.t = sfTexture_createFromFile("File/home2.jpg", NULL);
    my_sprite->s_home2.s = sfSprite_create();
    sfSprite_setTexture(my_sprite->s_home2.s, my_sprite->t_home2.t, sfTrue);
    my_sprite->s_name.posi = (sfVector2f) {80, 260};
    my_sprite->t_name.t = sfTexture_createFromFile("File/name.png", NULL);
    my_sprite->s_name.rect = (sfIntRect) {0, 0, 205, 40};
    my_sprite->s_name.s = sfSprite_create();
    sfSprite_setTexture(my_sprite->s_name.s, my_sprite->t_name.t, sfTrue);
    sfSprite_setTextureRect(my_sprite->s_name.s, my_sprite->s_name.rect);
    sfSprite_setPosition(my_sprite->s_name.s, my_sprite->s_name.posi);
    my_sprite->s_name2.posi = (sfVector2f) {715, 260};
    my_sprite->t_name2.t = sfTexture_createFromFile("File/name2.png", NULL);
    my_sprite->s_name2.rect = (sfIntRect) {0, 0, 150, 40};
    my_sprite->s_name2.s = sfSprite_create();
    sfSprite_setTexture(my_sprite->s_name2.s, my_sprite->t_name2.t, sfTrue);
    sfSprite_setTextureRect(my_sprite->s_name2.s, my_sprite->s_name2.rect);
    sfSprite_setPosition(my_sprite->s_name2.s, my_sprite->s_name2.posi);
}

void create_background(draw_sprite_t *my_sprite)
{
    my_sprite->t_home.t = sfTexture_createFromFile("File/home.jpg", NULL);
    my_sprite->s_home.s = sfSprite_create();
    sfSprite_setTexture(my_sprite->s_home.s, my_sprite->t_home.t, sfTrue);
    my_sprite->s_start.posi = (sfVector2f) {100, 600};
    my_sprite->t_start.t = sfTexture_createFromFile("File/Start.png", NULL);
    my_sprite->s_start.rect = (sfIntRect) {0, 0, 330, 88};
    my_sprite->s_start.s = sfSprite_create();
    sfSprite_setTexture(my_sprite->s_start.s, my_sprite->t_start.t, sfTrue);
    sfSprite_setTextureRect(my_sprite->s_start.s, my_sprite->s_start.rect);
    sfSprite_setPosition(my_sprite->s_start.s, my_sprite->s_start.posi);
    my_sprite->s_exit.posi = (sfVector2f) {637, 600};
    my_sprite->t_exit.t = sfTexture_createFromFile("File/Exit.png", NULL);
    my_sprite->s_exit.rect = (sfIntRect) {0, 0, 250, 96};
    my_sprite->s_exit.s = sfSprite_create();
    sfSprite_setTexture(my_sprite->s_exit.s, my_sprite->t_exit.t, sfTrue);
    sfSprite_setTextureRect(my_sprite->s_exit.s, my_sprite->s_exit.rect);
    sfSprite_setPosition(my_sprite->s_exit.s, my_sprite->s_exit.posi);
}