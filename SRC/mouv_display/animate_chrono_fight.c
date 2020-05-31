/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** animate_chrono_fight.c
*/

#include "my_rpg.h"

void animate_chrono_fight3(draw_sprite_t *my_sprite)
{
    if (my_sprite->anim_fight == 3) {
        my_sprite->s_chro.posi.x += 5;
        my_sprite->s_chro.rect = (sfIntRect) {105, 98 * 9, 105, 98};
        if (sfClock_getElapsedTime(my_sprite->move_clock.clock).microseconds
        > 200000) {
            my_sprite->s_chro.rect = (sfIntRect) {0, 0, 60, 96};
            my_sprite->boss_life -= my_sprite->att1;
            my_sprite->fight_turn = 1;
            my_sprite->anim_fight = 0;
            my_sprite->animation_sword = 0;
            sfClock_restart(my_sprite->move_clock.clock);
        }
    }
}

void animate_chrono_fight2(draw_sprite_t *my_sprite)
{
    if (my_sprite->anim_fight == 2) {
        if (my_sprite->animation_sword == 1) {
            my_sprite->animation_sword++;
            sfClock_restart(my_sprite->move_clock.clock);
        }
        my_sprite->s_chro.posi.x += 5;
        my_sprite->s_chro.posi.y -= 2;
        my_sprite->s_chro.rect = (sfIntRect) {0, 884, 105, 98};
        if (sfClock_getElapsedTime(my_sprite->move_clock.clock).microseconds
        > 200000) {
            my_sprite->anim_fight = 3;
            sfSound_play(my_sprite->sound_att.sound);
            sfClock_restart(my_sprite->move_clock.clock);
        }
    }
}

void animate_chrono_fight(draw_sprite_t *my_sprite)
{
    if (my_sprite->anim_fight == 0) {
        my_sprite->s_chro.posi = (sfVector2f) {200, 720};
        animate_right(my_sprite, 420, 784, &my_sprite->s_chro);
    }
    if (my_sprite->anim_fight == 1) {
        if (my_sprite->animation_sword == 0) {
            my_sprite->s_chro.rect = (sfIntRect) {0, 98 * 8, 105, 98};
            my_sprite->animation_sword++;
        }
        my_sprite->s_chro.posi.x += 5;
        if (sfClock_getElapsedTime(my_sprite->move_clock.clock).microseconds
        > 250000) {
            my_sprite->s_chro.rect.left += 105;
            if (my_sprite->s_chro.rect.left >= 210)
                my_sprite->s_chro.rect.left = 0;
            sfClock_restart(my_sprite->move_clock.clock);
        }
        if (my_sprite->s_chro.posi.x >= 680)
            my_sprite->anim_fight = 2;
    }
}