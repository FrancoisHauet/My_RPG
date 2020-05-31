/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** arena_text3.c
*/

#include "my_rpg.h"

void draw_text_recover_glenn_arena(setup_t *window, draw_sprite_t *my_sprite)
{
    if ((my_sprite->s_glenn.posi.x >= 455 && my_sprite->s_glenn.posi.x <= 485)
    && (my_sprite->s_glenn.posi.y >= 79 && my_sprite->s_glenn.posi.y <= 142)
    && my_sprite->text_numb2 != 2) {
        sfText_setString(my_sprite->text5.text,
        "Tu es la pour recuperer l'epee\nPour l'avoir il faut me battre");
        sfText_setPosition(my_sprite->text5.text, (sfVector2f) {225, 30});
        sfText_setColor(my_sprite->text5.text, sfBlack);
        sfRenderWindow_drawText(window->window, my_sprite->text5.text, NULL);
        my_sprite->text_numb2 = 1;
        if (sfKeyboard_isKeyPressed(sfKeySpace))
            my_sprite->text_numb2 = 2;
    }
}

void draw_final_text_arena(setup_t *window, draw_sprite_t *my_sprite)
{
    sfText_setString(my_sprite->text13.text, "Parfait rendez-vous en haut"
    " pour le combat");
    sfText_setPosition(my_sprite->text13.text, (sfVector2f) {250, 40});
    sfText_setColor(my_sprite->text13.text, sfBlack);
    sfRenderWindow_drawText(window->window, my_sprite->text13.text, NULL);
}