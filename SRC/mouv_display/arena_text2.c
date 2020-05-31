/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** arena_text2.c
*/

#include "my_rpg.h"

void draw_following_text_arena2(setup_t *window, draw_sprite_t *my_sprite)
{
    sfText_setPosition(my_sprite->text13.text, (sfVector2f) {250, 30});
    sfText_setColor(my_sprite->text13.text, sfBlack);
    sfRenderWindow_drawText(window->window, my_sprite->text13.text, NULL);
    my_sprite->timer++;
    if (sfKeyboard_isKeyPressed(sfKeySpace) && my_sprite->timer >= 50
    && my_sprite->lose == 1) {
        my_sprite->text_numb2 = 2;
        my_sprite->timer = 0;
    }
}

void draw_following_text_arena(setup_t *window, draw_sprite_t *my_sprite)
{
    if (my_sprite->text_numb2 == 8) {
        if (my_sprite->lose == 1) {
            sfText_setString(my_sprite->text13.text, "Je te laisse une"
            " autre chance !");
            my_sprite->choose = 4;
        }
        if (my_sprite->lose == 2) {
            sfText_setString(my_sprite->text13.text, "Tu as gagnes l'epee."
            " Appuies sur e et \nequipe toi de l'epee." "Tu as gagnes un"
            " niveau !!\nclique sur la fleche a cote de la statistique"
            "\nA faire evoluer. Un fois fait appuie de nouveau sur e");
            my_sprite->button = 2;
            my_sprite->niv = 2;
        }
        draw_following_text_arena2(window, my_sprite);
    }
}

void draw_result_arena2(setup_t *window, draw_sprite_t *my_sprite)
{
    if (my_sprite->text_numb2 == 7) {
        if ((my_sprite->key_select == 1 && my_sprite->choose == 2) ||
        (my_sprite->key_select == 2 && my_sprite->choose == 3) ||
        (my_sprite->key_select == 3 && my_sprite->choose == 1) ||
        (my_sprite->choose == my_sprite->key_select) ||
        (my_sprite->key_select == 0)) {
            sfText_setString(my_sprite->text12.text, "Perdu !");
            my_sprite->lose = 1;
        } else {
            sfText_setString(my_sprite->text12.text, "Bravo !");
            my_sprite->lose = 2;
        }
        sfText_setPosition(my_sprite->text12.text, (sfVector2f) {468, 40});
        sfText_setColor(my_sprite->text12.text, sfBlack);
        sfRenderWindow_drawText(window->window, my_sprite->text12.text, NULL);
        my_sprite->timer++;
        if (sfKeyboard_isKeyPressed(sfKeySpace) && my_sprite->timer >= 50) {
            my_sprite->text_numb2 = 8;
            my_sprite->timer = 0;
        }
    }
}

void draw_result_arena(setup_t *window, draw_sprite_t *my_sprite)
{
    srand(time(NULL));
    if (my_sprite->text_numb2 == 6) {
        if (my_sprite->choose == 4)
            my_sprite->choose = rand () % 3 + 1;
        if (my_sprite->choose == 1)
            sfText_setString(my_sprite->text11.text, "Feuille");
        if (my_sprite->choose == 2)
            sfText_setString(my_sprite->text11.text, "Ciseaux");
        if (my_sprite->choose == 3)
            sfText_setString(my_sprite->text11.text, "Pierre");
        sfText_setPosition(my_sprite->text11.text, (sfVector2f) {468, 40});
        sfText_setColor(my_sprite->text11.text, sfBlack);
        sfRenderWindow_drawText(window->window, my_sprite->text11.text, NULL);
        my_sprite->timer++;
        if (sfKeyboard_isKeyPressed(sfKeySpace) && my_sprite->timer >= 50) {
            my_sprite->text_numb2 = 7;
            my_sprite->timer = 0;
        }
    }
}