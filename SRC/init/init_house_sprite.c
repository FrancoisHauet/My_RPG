/*
** EPITECH PROJECT, 2019
** my_RPG
** File description:
** init_house_sprite.c
*/

#include "my_rpg.h"

void create_text(draw_sprite_t *my_sprite)
{
    my_sprite->text.font = sfFont_createFromFile("File/Pixel.ttf");
    my_sprite->text.text = sfText_create();
    sfText_setFont(my_sprite->text.text, my_sprite->text.font);
    sfText_setCharacterSize(my_sprite->text.text, 20);
    my_sprite->text2.font = sfFont_createFromFile("File/Pixel.ttf");
    my_sprite->text2.text = sfText_create();
    sfText_setFont(my_sprite->text2.text, my_sprite->text2.font);
    sfText_setCharacterSize(my_sprite->text2.text, 20);
    my_sprite->text3.font = sfFont_createFromFile("File/Pixel.ttf");
    my_sprite->text3.text = sfText_create();
    sfText_setFont(my_sprite->text3.text, my_sprite->text3.font);
    sfText_setCharacterSize(my_sprite->text3.text, 20);
    my_sprite->text4.font = sfFont_createFromFile("File/Pixel.ttf");
    my_sprite->text4.text = sfText_create();
    sfText_setFont(my_sprite->text4.text, my_sprite->text4.font);
    sfText_setCharacterSize(my_sprite->text4.text, 20);
    sfText_setFont(my_sprite->text4.text, my_sprite->text4.font);
}

void create_house(draw_sprite_t *my_sprite)
{
    my_sprite->t_house.t = sfTexture_createFromFile("File/house.png", NULL);
    my_sprite->s_house.s = sfSprite_create();
    sfSprite_setTexture(my_sprite->s_house.s, my_sprite->t_house.t, sfTrue);
    my_sprite->s_rec.posi = (sfVector2f) {100, 140};
    my_sprite->t_rec.t = sfTexture_createFromFile("File/rec.png", NULL);
    my_sprite->s_rec.s = sfSprite_create();
    sfSprite_setTexture(my_sprite->s_rec.s, my_sprite->t_rec.t, sfTrue);
    sfSprite_setPosition(my_sprite->s_rec.s, my_sprite->s_rec.posi);
}

void create_character(draw_sprite_t *my_sprite)
{
    my_sprite->s_chro.posi = (sfVector2f) {680, 190};
    my_sprite->t_chro.t = sfTexture_createFromFile("File/chrono.png", NULL);
    my_sprite->s_chro.s = sfSprite_create();
    my_sprite->s_chro.rect = (sfIntRect) {0, 0, 60, 96};
    sfSprite_setTexture(my_sprite->s_chro.s, my_sprite->t_chro.t, sfTrue);
    sfSprite_setTextureRect(my_sprite->s_chro.s, my_sprite->s_chro.rect);
    sfSprite_setPosition(my_sprite->s_chro.s, my_sprite->s_chro.posi);
    my_sprite->s_glenn.posi = (sfVector2f) {680, 190};
    my_sprite->t_glenn.t = sfTexture_createFromFile("File/glenn.png", NULL);
    my_sprite->s_glenn.s = sfSprite_create();
    my_sprite->s_glenn.rect = (sfIntRect) {0, 0, 60, 70};
    sfSprite_setTexture(my_sprite->s_glenn.s, my_sprite->t_glenn.t, sfTrue);
    sfSprite_setTextureRect(my_sprite->s_glenn.s, my_sprite->s_glenn.rect);
    sfSprite_setPosition(my_sprite->s_glenn.s, my_sprite->s_glenn.posi);
}