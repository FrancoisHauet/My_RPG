/*
** EPITECH PROJECT, 2019
** my_RPG
** File description:
** house.c
*/

#include "my_rpg.h"

void draw_glenn(setup_t *window, draw_sprite_t *my_sprite)
{
    if (my_sprite->s_player.select == 2) {
        mouv_glenn(my_sprite);
        animate_char(my_sprite, 420, 560, &my_sprite->s_glenn);
        wall_y_collision(my_sprite);
        wall_x_collision(my_sprite);
        wall_collision_glenn(my_sprite);
        collision_dresser(my_sprite);
        collision_bed(my_sprite);
        collision_table(my_sprite);
        mother_collision(my_sprite);
        plant_collision_glenn(my_sprite);
        carpet_collision(my_sprite, window);
        wall_collision(my_sprite);
        speak_collision_glenn(my_sprite, window);
        sfSprite_setPosition(my_sprite->s_glenn.s, my_sprite->s_glenn.posi);
        sfSprite_setTextureRect(my_sprite->s_glenn.s, my_sprite->s_glenn.rect);
        sfRenderWindow_drawSprite(window->window, my_sprite->s_glenn.s, NULL);
    }
}

void draw_chrono(setup_t *window, draw_sprite_t *my_sprite)
{
    if (my_sprite->s_player.select == 1) {
        mouv_chrono(my_sprite);
        animate_char(my_sprite, 420, 784, &my_sprite->s_chro);
        wall_y_collision(my_sprite);
        wall_x_collision(my_sprite);
        wall_collision_chrono(my_sprite);
        collision_dresser(my_sprite);
        collision_bed(my_sprite);
        collision_table(my_sprite);
        mother_collision(my_sprite);
        plant_collision_chrono(my_sprite);
        carpet_collision(my_sprite, window);
        wall_collision(my_sprite);
        speak_collision_chrono(my_sprite, window);
        sfSprite_setPosition(my_sprite->s_chro.s, my_sprite->s_chro.posi);
        sfSprite_setTextureRect(my_sprite->s_chro.s, my_sprite->s_chro.rect);
        sfRenderWindow_drawSprite(window->window, my_sprite->s_chro.s, NULL);
    }
}

void draw_house_text(setup_t *window, draw_sprite_t *my_sprite)
{
    if (my_sprite->text_numb == 0) {
        if (my_sprite->s_player.select == 2)
            sfText_setString(my_sprite->text.text,
            "Glenn, reveille toi\nvient me voir");
        else
            sfText_setString(my_sprite->text.text,
            "Chrono, reveille toi\nvient me voir");
        sfText_setPosition(my_sprite->text.text, (sfVector2f) {150, 200});
        sfText_setColor(my_sprite->text.text, sfBlack);
        sfRenderWindow_drawText(window->window, my_sprite->text.text, NULL);
    }
}

void draw_house(setup_t *window, draw_sprite_t *my_sprite)
{
    window->posi_mouse = sfMouse_getPositionRenderWindow(window->window);
    sfRenderWindow_drawSprite(window->window, my_sprite->s_house.s, NULL);
    if (window->rec == 1)
        sfRenderWindow_drawSprite(window->window, my_sprite->s_rec.s, NULL);
    draw_house_text(window, my_sprite);
    draw_chrono(window, my_sprite);
    draw_glenn(window, my_sprite);
}