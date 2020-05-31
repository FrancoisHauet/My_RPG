/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** init_end_game.c
*/

#include "my_rpg.h"

void init_end_game(draw_sprite_t *my_sprite)
{
    my_sprite->t_endc.t = sfTexture_createFromFile("File/finish.png", NULL);
    my_sprite->s_endc.s = sfSprite_create();
    sfSprite_setTexture(my_sprite->s_endc.s, my_sprite->t_endc.t, sfTrue);
    my_sprite->t_endg.t = sfTexture_createFromFile("File/finish2.png", NULL);
    my_sprite->s_endg.s = sfSprite_create();
    sfSprite_setTexture(my_sprite->s_endg.s, my_sprite->t_endg.t, sfTrue);
    my_sprite->t_credi.t = sfTexture_createFromFile("File/credit.png", NULL);
    my_sprite->s_credi.s = sfSprite_create();
    sfSprite_setTexture(my_sprite->s_credi.s, my_sprite->t_credi.t, sfTrue);
    my_sprite->t_lose.t = sfTexture_createFromFile("File/lose.png", NULL);
    my_sprite->s_lose.s = sfSprite_create();
    sfSprite_setTexture(my_sprite->s_lose.s, my_sprite->t_lose.t, sfTrue);
}