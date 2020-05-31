/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** init_map_fight.c
*/

#include "my_rpg.h"

void create_sound_fight(draw_sprite_t *my_sprite)
{
    my_sprite->sound_death.sound = sfSound_create();
    my_sprite->sound_death.buffer = sfSoundBuffer_createFromFile(
    "File/dead.wav");
    sfSound_setBuffer(my_sprite->sound_death.sound,
    my_sprite->sound_death.buffer);
    sfSound_setVolume(my_sprite->sound_death.sound, 15);
    my_sprite->sound_health.sound = sfSound_create();
    my_sprite->sound_health.buffer = sfSoundBuffer_createFromFile
    ("File/health.ogg");
    sfSound_setBuffer(my_sprite->sound_health.sound,
    my_sprite->sound_health.buffer);
    sfSound_setVolume(my_sprite->sound_health.sound, 15);
    my_sprite->sound_hit.sound = sfSound_create();
    my_sprite->sound_hit.buffer = sfSoundBuffer_createFromFile("File/hit.ogg");
    sfSound_setBuffer(my_sprite->sound_hit.sound, my_sprite->sound_hit.buffer);
    sfSound_setVolume(my_sprite->sound_hit.sound, 15);
    my_sprite->sound_crak.sound = sfSound_create();
    my_sprite->sound_crak.buffer = sfSoundBuffer_createFromFile("File/crack.ogg");
    sfSound_setBuffer(my_sprite->sound_crak.sound, my_sprite->sound_crak.buffer);
    sfSound_setVolume(my_sprite->sound_crak.sound, 15);
}

void create_text_fight(draw_sprite_t *my_sprite)
{
    my_sprite->text18.font = sfFont_createFromFile("File/Pixel.ttf");
    my_sprite->text18.text = sfText_create();
    sfText_setFont(my_sprite->text18.text, my_sprite->text18.font);
    sfText_setCharacterSize(my_sprite->text18.text, 50);
    sfText_setFont(my_sprite->text18.text, my_sprite->text18.font);
    my_sprite->text19.font = sfFont_createFromFile("File/Pixel.ttf");
    my_sprite->text19.text = sfText_create();
    sfText_setFont(my_sprite->text19.text, my_sprite->text19.font);
    sfText_setCharacterSize(my_sprite->text19.text, 50);
    sfText_setFont(my_sprite->text19.text, my_sprite->text19.font);
}

void create_fight_hud(draw_sprite_t *my_sprite)
{
    my_sprite->s_atack.posi = (sfVector2f) {60, 135};
    my_sprite->t_atack.t = sfTexture_createFromFile("File/atack.png", NULL);
    my_sprite->s_atack.rect = (sfIntRect) {0, 0, 176, 40};
    my_sprite->s_atack.s = sfSprite_create();
    sfSprite_setTexture(my_sprite->s_atack.s, my_sprite->t_atack.t, sfTrue);
    sfSprite_setTextureRect(my_sprite->s_atack.s, my_sprite->s_atack.rect);
    sfSprite_setPosition(my_sprite->s_atack.s, my_sprite->s_atack.posi);
    my_sprite->s_care.posi = (sfVector2f) {320, 135};
    my_sprite->t_care.t = sfTexture_createFromFile("File/care.png", NULL);
    my_sprite->s_care.rect = (sfIntRect) {0, 0, 92, 32};
    my_sprite->s_care.s = sfSprite_create();
    sfSprite_setTexture(my_sprite->s_care.s, my_sprite->t_care.t, sfTrue);
    sfSprite_setTextureRect(my_sprite->s_care.s, my_sprite->s_care.rect);
    sfSprite_setPosition(my_sprite->s_care.s, my_sprite->s_care.posi);
}

void create_fight(draw_sprite_t *my_sprite)
{
    my_sprite->tmap_boss.t = sfTexture_createFromFile("File/m_boss.png", NULL);
    my_sprite->smap_boss.s = sfSprite_create();
    sfSprite_setTexture(my_sprite->smap_boss.s, my_sprite->tmap_boss.t, sfTrue);
    my_sprite->smap_boss.posi = (sfVector2f) {-250, -150};
    sfSprite_setPosition(my_sprite->smap_boss.s, my_sprite->smap_boss.posi);
    my_sprite->tboss.t = sfTexture_createFromFile("File/boss.png", NULL);
    my_sprite->sboss.s = sfSprite_create();
    sfSprite_setTexture(my_sprite->sboss.s, my_sprite->tboss.t, sfTrue);
    my_sprite->sboss.posi = (sfVector2f) {750, 580};
    my_sprite->sboss.rect = (sfIntRect) {2280, 0, 220, 272};
    sfSprite_setTextureRect(my_sprite->sboss.s, my_sprite->sboss.rect);
    sfSprite_setPosition(my_sprite->sboss.s, my_sprite->sboss.posi);
    my_sprite->musicf.music = sfMusic_createFromFile("File/music_fight2.ogg");
    sfMusic_setVolume(my_sprite->musicf.music, 1);
    sfMusic_setLoop(my_sprite->musicf.music, sfTrue);
    my_sprite->sound_att.sound = sfSound_create();
    my_sprite->sound_att.buffer = sfSoundBuffer_createFromFile("File/att.ogg");
    sfSound_setBuffer(my_sprite->sound_att.sound, my_sprite->sound_att.buffer);
    sfSound_setVolume(my_sprite->sound_att.sound, 8);
}

void play_music_fight(draw_sprite_t *my_sprite)
{
    sfMusic_stop(my_sprite->music2.music);
    sfMusic_play(my_sprite->musicf.music);
}