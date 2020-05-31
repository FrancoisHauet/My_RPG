/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** create_hud.c
*/

#include "my_rpg.h"

void create_icone_player(draw_sprite_t *my_sprite)
{
    my_sprite->t_icop1.t = sfTexture_createFromFile("File/pic-ninja.png", NULL);
    my_sprite->s_icop1.s = sfSprite_create();
    sfSprite_setTexture(my_sprite->s_icop1.s, my_sprite->t_icop1.t, sfTrue);
    my_sprite->s_icop1.posi = (sfVector2f) {25, 750};
    sfSprite_setPosition(my_sprite->s_icop1.s, my_sprite->s_icop1.posi);
    my_sprite->t_icop2.t = sfTexture_createFromFile("File/pic-tort.png", NULL);
    my_sprite->s_icop2.s = sfSprite_create();
    sfSprite_setTexture(my_sprite->s_icop2.s, my_sprite->t_icop2.t, sfTrue);
    my_sprite->s_icop2.posi = (sfVector2f) {25, 750};
    sfSprite_setPosition(my_sprite->s_icop2.s, my_sprite->s_icop2.posi);
}

void create_icone_hud(draw_sprite_t *my_sprite)
{
    my_sprite->t_icoa.t = sfTexture_createFromFile("File/attack.jpg", NULL);
    my_sprite->s_icoa.s = sfSprite_create();
    sfSprite_setTexture(my_sprite->s_icoa.s, my_sprite->t_icoa.t, sfTrue);
    my_sprite->s_icoa.posi = (sfVector2f) {80, 768};
    sfSprite_setPosition(my_sprite->s_icoa.s, my_sprite->s_icoa.posi);
    my_sprite->t_icohp.t = sfTexture_createFromFile("File/hp.jpg", NULL);
    my_sprite->s_icohp.s = sfSprite_create();
    sfSprite_setTexture(my_sprite->s_icohp.s, my_sprite->t_icohp.t, sfTrue);
    my_sprite->s_icohp.posi = (sfVector2f) {80, 750};
    sfSprite_setPosition(my_sprite->s_icohp.s, my_sprite->s_icohp.posi);
    my_sprite->t_icos.t = sfTexture_createFromFile("File/speed.jpg", NULL);
    my_sprite->s_icos.s = sfSprite_create();
    sfSprite_setTexture(my_sprite->s_icos.s, my_sprite->t_icos.t, sfTrue);
    my_sprite->s_icos.posi = (sfVector2f) {80, 783};
    sfSprite_setPosition(my_sprite->s_icos.s, my_sprite->s_icos.posi);
}

void create_text_hud(draw_sprite_t *my_sprite)
{
    my_sprite->txt_hp.font = sfFont_createFromFile("File/Pixel.ttf");
    my_sprite->txt_hp.text = sfText_create();
    sfText_setFont(my_sprite->txt_hp.text, my_sprite->txt_hp.font);
    sfText_setCharacterSize(my_sprite->txt_hp.text, 15);
    my_sprite->txt_a.font = sfFont_createFromFile("File/Pixel.ttf");
    my_sprite->txt_a.text = sfText_create();
    sfText_setFont(my_sprite->txt_a.text, my_sprite->txt_a.font);
    sfText_setCharacterSize(my_sprite->txt_a.text, 15);
    my_sprite->txt_ms.font = sfFont_createFromFile("File/Pixel.ttf");
    my_sprite->txt_ms.text = sfText_create();
    sfText_setFont(my_sprite->txt_ms.text, my_sprite->txt_ms.font);
    sfText_setCharacterSize(my_sprite->txt_ms.text, 15);
    my_sprite->txt_lvl1.font = sfFont_createFromFile("File/Pixel.ttf");
    my_sprite->txt_lvl1.text = sfText_create();
    sfText_setFont(my_sprite->txt_lvl1.text, my_sprite->txt_lvl1.font);
    sfText_setCharacterSize(my_sprite->txt_lvl1.text, 15);
    my_sprite->txt_lvl2.font = sfFont_createFromFile("File/Pixel.ttf");
    my_sprite->txt_lvl2.text = sfText_create();
    sfText_setFont(my_sprite->txt_lvl2.text, my_sprite->txt_lvl2.font);
    sfText_setCharacterSize(my_sprite->txt_lvl2.text, 15);
}

void create_sound(draw_sprite_t *my_sprite)
{
    my_sprite->music.music = sfMusic_createFromFile("File/music.ogg");
    sfMusic_setVolume(my_sprite->music.music, 0.3);
    sfMusic_setLoop(my_sprite->music.music, sfTrue);
    sfMusic_play(my_sprite->music.music);
    my_sprite->music2.music = sfMusic_createFromFile("File/music2.ogg");
    sfMusic_setVolume(my_sprite->music2.music, 0.5);
    sfMusic_setLoop(my_sprite->music2.music, sfTrue);
    my_sprite->sound_dor.sound = sfSound_create();
    my_sprite->sound_dor.buffer = sfSoundBuffer_createFromFile("File/dor.ogg");
    sfSound_setBuffer(my_sprite->sound_dor.sound, my_sprite->sound_dor.buffer);
    sfSound_setVolume(my_sprite->sound_dor.sound, 15);
    my_sprite->musicw.music = sfMusic_createFromFile("File/win_final.ogg");
    sfMusic_setVolume(my_sprite->musicw.music, 0.6);
    sfMusic_setLoop(my_sprite->musicw.music, sfTrue);
}