/*
** EPITECH PROJECT, 2019
** my_RPG
** File description:
** init_game.c
*/

#include "my_rpg.h"

void destroy(setup_t *window, draw_sprite_t *my_sprite)
{
    sfSoundBuffer_destroy(my_sprite->sound_dor.buffer);
    sfSound_destroy(my_sprite->sound_dor.sound);
    sfSoundBuffer_destroy(my_sprite->sound_att.buffer);
    sfSound_destroy(my_sprite->sound_att.sound);
    sfSoundBuffer_destroy(my_sprite->sound_death.buffer);
    sfSound_destroy(my_sprite->sound_death.sound);
    sfSoundBuffer_destroy(my_sprite->sound_hit.buffer);
    sfSound_destroy(my_sprite->sound_hit.sound);
    sfSoundBuffer_destroy(my_sprite->sound_health.buffer);
    sfSound_destroy(my_sprite->sound_health.sound);
    sfSoundBuffer_destroy(my_sprite->sound_crak.buffer);
    sfSound_destroy(my_sprite->sound_crak.sound);
    sfMusic_destroy(my_sprite->music.music);
    sfMusic_destroy(my_sprite->music2.music);
    sfMusic_destroy(my_sprite->musicf.music);
    sfMusic_destroy(my_sprite->musicw.music);
    sfRenderWindow_destroy(window->window);
}

void create_sprite(draw_sprite_t *my_sprite)
{
    create_sound(my_sprite);
    create_background(my_sprite);
    create_choose_player(my_sprite);
    create_house(my_sprite);
    create_character(my_sprite);
    create_text(my_sprite);
    create_tutorial(my_sprite);
    create_first_map(my_sprite);
    create_icone_player(my_sprite);
    create_icone_hud(my_sprite);
    create_text_hud(my_sprite);
    create_second_map(my_sprite);
    create_arena(my_sprite);
    create_third_map(my_sprite);
    create_fight_hud(my_sprite);
    create_text_fight(my_sprite);
    init_end_game(my_sprite);
    create_sound_fight(my_sprite);
    create_sprite_bis(my_sprite);
}

void create_my_windows(setup_t *window)
{
    window->mode.height = 833;
    window->mode.width = 1000;
    window->mode.bitsPerPixel = 64;
    window->window = sfRenderWindow_create(window->mode,
    "My_RPG", sfDefaultStyle, NULL);
}

void check_event(setup_t *window)
{
    while (sfRenderWindow_pollEvent(window->window, &window->event)) {
        if (window->event.type == sfEvtClosed)
            sfRenderWindow_close(window->window);
    }
}

void scene_one(setup_t window, draw_sprite_t my_sprite)
{
    init_scene(&window, &my_sprite);
    while (sfRenderWindow_isOpen(window.window)) {
        sfRenderWindow_clear(window.window, sfBlack);
        check_event(&window);
        choose(&window, &my_sprite);
        sfRenderWindow_display(window.window);
    }
    destroy(&window, &my_sprite);
}