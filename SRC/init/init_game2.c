/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** init_game2.c
*/

#include "my_rpg.h"

void create_sprite_bis(draw_sprite_t *my_sprite)
{
    create_text_arena(my_sprite);
    create_text_arena2(my_sprite);
    create_text_arena3(my_sprite);
    create_inventory(my_sprite);
    create_inventory_text(my_sprite);
    my_sprite->move_clock.clock = sfClock_create();
    create_first_map(my_sprite);
    create_text_arena(my_sprite);
    create_text_arena2(my_sprite);
    create_text_arena3(my_sprite);
    create_inventory(my_sprite);
    create_inventory_text(my_sprite);
    my_sprite->move_clock.clock = sfClock_create();
    my_sprite->anim_clock.clock = sfClock_create();
    my_sprite->side = 0;
    my_sprite->anim_fight = 0;
    my_sprite->animation_sword = 0;
    my_sprite->death = 0;
    my_sprite->immobile = 0;
    create_fight(my_sprite);
}