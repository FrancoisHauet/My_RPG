/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** init_arena.c
*/

#include "my_rpg.h"

void create_text_arena3(draw_sprite_t *my_sprite)
{
    my_sprite->text12.font = sfFont_createFromFile("File/Pixel.ttf");
    my_sprite->text12.text = sfText_create();
    sfText_setFont(my_sprite->text12.text, my_sprite->text12.font);
    sfText_setCharacterSize(my_sprite->text12.text, 20);
    sfText_setFont(my_sprite->text12.text, my_sprite->text12.font);
    my_sprite->text13.font = sfFont_createFromFile("File/Pixel.ttf");
    my_sprite->text13.text = sfText_create();
    sfText_setFont(my_sprite->text13.text, my_sprite->text13.font);
    sfText_setCharacterSize(my_sprite->text13.text, 20);
    sfText_setFont(my_sprite->text13.text, my_sprite->text13.font);
}

void create_text_arena2(draw_sprite_t *my_sprite)
{
    my_sprite->text8.font = sfFont_createFromFile("File/Pixel.ttf");
    my_sprite->text8.text = sfText_create();
    sfText_setFont(my_sprite->text8.text, my_sprite->text8.font);
    sfText_setCharacterSize(my_sprite->text8.text, 30);
    sfText_setFont(my_sprite->text8.text, my_sprite->text8.font);
    my_sprite->text9.font = sfFont_createFromFile("File/Pixel.ttf");
    my_sprite->text9.text = sfText_create();
    sfText_setFont(my_sprite->text9.text, my_sprite->text9.font);
    sfText_setCharacterSize(my_sprite->text9.text, 30);
    sfText_setFont(my_sprite->text9.text, my_sprite->text9.font);
    my_sprite->text10.font = sfFont_createFromFile("File/Pixel.ttf");
    my_sprite->text10.text = sfText_create();
    sfText_setFont(my_sprite->text10.text, my_sprite->text10.font);
    sfText_setCharacterSize(my_sprite->text10.text, 30);
    sfText_setFont(my_sprite->text10.text, my_sprite->text10.font);
    my_sprite->text11.font = sfFont_createFromFile("File/Pixel.ttf");
    my_sprite->text11.text = sfText_create();
    sfText_setFont(my_sprite->text11.text, my_sprite->text11.font);
    sfText_setCharacterSize(my_sprite->text11.text, 20);
    sfText_setFont(my_sprite->text11.text, my_sprite->text11.font);
}

void create_text_arena(draw_sprite_t *my_sprite)
{
    my_sprite->text4.font = sfFont_createFromFile("File/Pixel.ttf");
    my_sprite->text4.text = sfText_create();
    sfText_setFont(my_sprite->text4.text, my_sprite->text4.font);
    sfText_setCharacterSize(my_sprite->text4.text, 30);
    sfText_setFont(my_sprite->text4.text, my_sprite->text4.font);
    my_sprite->text5.font = sfFont_createFromFile("File/Pixel.ttf");
    my_sprite->text5.text = sfText_create();
    sfText_setFont(my_sprite->text5.text, my_sprite->text5.font);
    sfText_setCharacterSize(my_sprite->text5.text, 30);
    sfText_setFont(my_sprite->text5.text, my_sprite->text5.font);
    my_sprite->text6.font = sfFont_createFromFile("File/Pixel.ttf");
    my_sprite->text6.text = sfText_create();
    sfText_setFont(my_sprite->text6.text, my_sprite->text6.font);
    sfText_setCharacterSize(my_sprite->text6.text, 30);
    sfText_setFont(my_sprite->text6.text, my_sprite->text6.font);
    my_sprite->text7.font = sfFont_createFromFile("File/Pixel.ttf");
    my_sprite->text7.text = sfText_create();
    sfText_setFont(my_sprite->text7.text, my_sprite->text7.font);
    sfText_setCharacterSize(my_sprite->text7.text, 20);
    sfText_setFont(my_sprite->text7.text, my_sprite->text7.font);
}

void create_arena(draw_sprite_t *my_sprite)
{
    my_sprite->s_arena.posi = (sfVector2f) {100, 0};
    my_sprite->t_arena.t = sfTexture_createFromFile("File/fight.png", NULL);
    my_sprite->s_arena.s = sfSprite_create();
    sfSprite_setTexture(my_sprite->s_arena.s, my_sprite->t_arena.t, sfTrue);
    sfSprite_setPosition(my_sprite->s_arena.s, my_sprite->s_arena.posi);
    my_sprite->s_1.posi = (sfVector2f) {650, 90};
    my_sprite->t_1.t = sfTexture_createFromFile("File/1.png", NULL);
    my_sprite->s_1.s = sfSprite_create();
    sfSprite_setTexture(my_sprite->s_1.s, my_sprite->t_1.t, sfTrue);
    sfSprite_setPosition(my_sprite->s_1.s, my_sprite->s_1.posi);
    my_sprite->s_2.posi = (sfVector2f) {718, 90};
    my_sprite->t_2.t = sfTexture_createFromFile("File/2.png", NULL);
    my_sprite->s_2.s = sfSprite_create();
    sfSprite_setTexture(my_sprite->s_2.s, my_sprite->t_2.t, sfTrue);
    sfSprite_setPosition(my_sprite->s_2.s, my_sprite->s_2.posi);
    my_sprite->s_3.posi = (sfVector2f) {800, 90};
    my_sprite->t_3.t = sfTexture_createFromFile("File/3.png", NULL);
    my_sprite->s_3.s = sfSprite_create();
    sfSprite_setTexture(my_sprite->s_3.s, my_sprite->t_3.t, sfTrue);
    sfSprite_setPosition(my_sprite->s_3.s, my_sprite->s_3.posi);
}