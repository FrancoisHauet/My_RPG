/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** arena.c
*/

#include "my_rpg.h"

void input_arena(draw_sprite_t *my_sprite)
{
    if (my_sprite->text_numb2 <= 5) {
        if (sfKeyboard_isKeyPressed(sfKeyNum1))
            my_sprite->key_select = 1;
        if (sfKeyboard_isKeyPressed(sfKeyNum2))
            my_sprite->key_select = 2;
        if (sfKeyboard_isKeyPressed(sfKeyNum3))
            my_sprite->key_select = 3;
    }
}

void draw_text_arena(setup_t *window, draw_sprite_t *my_sprite)
{
    draw_text_enter_arena(window, my_sprite);
    if (my_sprite->text_numb2 <= 2) {
        draw_text_recover_chrono_arena(window, my_sprite);
        draw_text_recover_glenn_arena(window, my_sprite);
    }
    draw_text_game_arena(window, my_sprite);
    draw_text_countdown_arena(window, my_sprite);
    draw_text_countdown_arena2(window, my_sprite);
    draw_result_arena(window, my_sprite);
    draw_result_arena2(window, my_sprite);
    draw_following_text_arena(window, my_sprite);
    if (my_sprite->button == 1) {
        sfRenderWindow_drawSprite(window->window, my_sprite->s_1.s, NULL);
        sfRenderWindow_drawSprite(window->window, my_sprite->s_2.s, NULL);
        sfRenderWindow_drawSprite(window->window, my_sprite->s_3.s, NULL);
        input_arena(my_sprite);
    }
}

void draw_glenn_arena(setup_t *window, draw_sprite_t *my_sprite)
{
    if (my_sprite->s_player.select == 2) {
        mouv_glenn(my_sprite);
        animate_char(my_sprite, 420, 560, &my_sprite->s_glenn);
        collision_init_glenn(my_sprite);
        collision_enter_glenn_left(my_sprite);
        collision_enter_glenn_right(my_sprite);
        collision_end_glenn(my_sprite);
        collision_woman_glenn(my_sprite, window);
        collision_center_glenn(my_sprite);
        collision_center_glenn2(my_sprite);
        collision_center_glenn3(my_sprite);
        collision_center_glenn4(my_sprite);
        collision_center_glenn5(my_sprite);
        sfSprite_setPosition(my_sprite->s_glenn.s, my_sprite->s_glenn.posi);
        sfSprite_setTextureRect(my_sprite->s_glenn.s, my_sprite->s_glenn.rect);
        sfRenderWindow_drawSprite(window->window, my_sprite->s_glenn.s, NULL);
    }
}

void draw_chro_arena(setup_t *window, draw_sprite_t *my_sprite)
{
    if (my_sprite->s_player.select == 1) {
        mouv_chrono(my_sprite);
        animate_char(my_sprite, 420, 784, &my_sprite->s_chro);
        collision_init_chrono(my_sprite);
        collision_enter_chrono_left(my_sprite);
        collision_enter_chrono_right(my_sprite);
        collision_center_chrono(my_sprite);
        collision_center_chrono2(my_sprite);
        collision_center_chrono3(my_sprite);
        collision_center_chrono4(my_sprite);
        collision_center_chrono5(my_sprite);
        collision_end_chrono(my_sprite);
        collision_woman_chrono(my_sprite, window);
        sfSprite_setPosition(my_sprite->s_chro.s, my_sprite->s_chro.posi);
        sfSprite_setTextureRect(my_sprite->s_chro.s, my_sprite->s_chro.rect);
        sfRenderWindow_drawSprite(window->window, my_sprite->s_chro.s, NULL);
    }
}

void draw_arena(draw_sprite_t *my_sprite, setup_t *window)
{
    window->posi_mouse = sfMouse_getPositionRenderWindow(window->window);
    sfRenderWindow_drawSprite(window->window, my_sprite->s_arena.s, NULL);
    draw_glenn_arena(window, my_sprite);
    draw_chro_arena(window, my_sprite);
    if (my_sprite->back == 0)
        draw_text_arena(window, my_sprite);
    else
        draw_final_text_arena(window, my_sprite);
    if (sfKeyboard_isKeyPressed(sfKeyE) && my_sprite->lose == 2)
        window->scene = 7;
}