/*
** EPITECH PROJECT, 2019
** my_RPG
** File description:
** init_map_sprite.c
*/

#include "my_rpg.h"

void create_third_map(draw_sprite_t *my_sprite)
{
    my_sprite->t_map3.t = sfTexture_createFromFile("File/map3.png", NULL);
    my_sprite->s_map3.s = sfSprite_create();
    sfSprite_setTexture(my_sprite->s_map3.s, my_sprite->t_map3.t, sfTrue);
    my_sprite->s_boss2.posi = (sfVector2f) {450, 90};
    my_sprite->t_boss2.t = sfTexture_createFromFile("File/pb_fight.png", NULL);
    my_sprite->s_boss2.s = sfSprite_create();
    sfSprite_setTexture(my_sprite->s_boss2.s, my_sprite->t_boss2.t, sfTrue);
    sfSprite_setPosition(my_sprite->s_boss2.s, my_sprite->s_boss2.posi);
}

void create_second_map(draw_sprite_t *my_sprite)
{
    my_sprite->t_map2.t = sfTexture_createFromFile("File/map2.png", NULL);
    my_sprite->s_map2.s = sfSprite_create();
    sfSprite_setTexture(my_sprite->s_map2.s, my_sprite->t_map2.t, sfTrue);
}

void create_first_map(draw_sprite_t *my_sprite)
{
    my_sprite->t_map1.t = sfTexture_createFromFile("File/map.png", NULL);
    my_sprite->s_map1.s = sfSprite_create();
    sfSprite_setTexture(my_sprite->s_map1.s, my_sprite->t_map1.t, sfTrue);
    my_sprite->s_chro2.posi = (sfVector2f) {495, 220};
    my_sprite->t_chro2.t = sfTexture_createFromFile("File/chrono2.png", NULL);
    my_sprite->s_chro2.s = sfSprite_create();
    my_sprite->s_chro2.rect = (sfIntRect) {0, 0, 40, 65};
    sfSprite_setTexture(my_sprite->s_chro2.s, my_sprite->t_chro2.t, sfTrue);
    sfSprite_setTextureRect(my_sprite->s_chro2.s, my_sprite->s_chro2.rect);
    sfSprite_setPosition(my_sprite->s_chro2.s, my_sprite->s_chro2.posi);
    my_sprite->s_glen2.posi = (sfVector2f) {495, 231};
    my_sprite->t_glen2.t = sfTexture_createFromFile("File/glenn2.png", NULL);
    my_sprite->s_glen2.s = sfSprite_create();
    my_sprite->s_glen2.rect = (sfIntRect) {0, 0, 40, 47};
    sfSprite_setTexture(my_sprite->s_glen2.s, my_sprite->t_glen2.t, sfTrue);
    sfSprite_setTextureRect(my_sprite->s_glen2.s, my_sprite->s_glen2.rect);
    sfSprite_setPosition(my_sprite->s_glen2.s, my_sprite->s_glen2.posi);
}