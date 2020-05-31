/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/

#include "my_rpg.h"

void init_txt_hud(draw_sprite_t *my_sprite)
{
    my_sprite->att1 = 10;
    my_sprite->att2 = 8;
    my_sprite->hp1 = 15;
    my_sprite->hp2 = 20;
    my_sprite->ms1 = 8;
    my_sprite->ms2 = 6;
    my_sprite->niv = 1;
}

int main(void)
{
    setup_t window;
    draw_sprite_t my_sprite;

    srand(time(NULL));
    init_txt_hud(&my_sprite);
    create_my_windows(&window);
    create_sprite(&my_sprite);
    scene_one(window, my_sprite);
}