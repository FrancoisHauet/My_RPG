/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** init_inventory.c
*/

#include "my_rpg.h"

void create_inventory_text(draw_sprite_t *my_sprite)
{
    my_sprite->text14.font = sfFont_createFromFile("File/Pixel.ttf");
    my_sprite->text14.text = sfText_create();
    sfText_setFont(my_sprite->text14.text, my_sprite->text14.font);
    sfText_setCharacterSize(my_sprite->text14.text, 60);
    sfText_setFont(my_sprite->text14.text, my_sprite->text14.font);
    my_sprite->text15.font = sfFont_createFromFile("File/Pixel.ttf");
    my_sprite->text15.text = sfText_create();
    sfText_setFont(my_sprite->text15.text, my_sprite->text15.font);
    sfText_setCharacterSize(my_sprite->text15.text, 60);
    sfText_setFont(my_sprite->text15.text, my_sprite->text15.font);
    my_sprite->text16.font = sfFont_createFromFile("File/Pixel.ttf");
    my_sprite->text16.text = sfText_create();
    sfText_setFont(my_sprite->text16.text, my_sprite->text16.font);
    sfText_setCharacterSize(my_sprite->text16.text, 60);
    sfText_setFont(my_sprite->text16.text, my_sprite->text16.font);
    my_sprite->text17.font = sfFont_createFromFile("File/Pixel.ttf");
    my_sprite->text17.text = sfText_create();
    sfText_setFont(my_sprite->text17.text, my_sprite->text17.font);
    sfText_setCharacterSize(my_sprite->text17.text, 40);
    sfText_setFont(my_sprite->text17.text, my_sprite->text17.font);
}

void create_inventory(draw_sprite_t *my_sprite)
{
    my_sprite->t_invc.t = sfTexture_createFromFile("File/Invc.png", NULL);
    my_sprite->s_invc.s = sfSprite_create();
    sfSprite_setTexture(my_sprite->s_invc.s, my_sprite->t_invc.t, sfTrue);
    my_sprite->t_invg.t = sfTexture_createFromFile("File/Invg.png", NULL);
    my_sprite->s_invg.s = sfSprite_create();
    sfSprite_setTexture(my_sprite->s_invg.s, my_sprite->t_invg.t, sfTrue);
    my_sprite->s_right.posi = (sfVector2f) {712, 180};
    my_sprite->t_right.t = sfTexture_createFromFile("File/touch.png", NULL);
    my_sprite->s_right.s = sfSprite_create();
    sfSprite_setTexture(my_sprite->s_right.s, my_sprite->t_right.t, sfTrue);
    sfSprite_setPosition(my_sprite->s_right.s, my_sprite->s_right.posi);
    my_sprite->s_right2.posi = (sfVector2f) {880, 255};
    my_sprite->t_right2.t = sfTexture_createFromFile("File/touch.png", NULL);
    my_sprite->s_right2.s = sfSprite_create();
    sfSprite_setTexture(my_sprite->s_right2.s, my_sprite->t_right2.t, sfTrue);
    sfSprite_setPosition(my_sprite->s_right2.s, my_sprite->s_right2.posi);
    my_sprite->s_right3.posi = (sfVector2f) {832, 338};
    my_sprite->t_right3.t = sfTexture_createFromFile("File/touch.png", NULL);
    my_sprite->s_right3.s = sfSprite_create();
    sfSprite_setTexture(my_sprite->s_right3.s, my_sprite->t_right3.t, sfTrue);
    sfSprite_setPosition(my_sprite->s_right3.s, my_sprite->s_right3.posi);
}