/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** animate_glenn_fight.c
*/

#include "my_rpg.h"

void animate_glenn_fight3(draw_sprite_t *my_sprite)
{
    if (my_sprite->anim_fight == 3) {
        my_sprite->s_glenn.posi.x += 5;
        my_sprite->s_glenn.rect = (sfIntRect) {320, 566, 88, 158};
        if (sfClock_getElapsedTime(my_sprite->move_clock.clock).microseconds
        > 200000) {
            my_sprite->boss_life -= my_sprite->att2;
            my_sprite->s_glenn.rect = (sfIntRect) {0, 0, 60, 70};
            my_sprite->anim_fight = 0;
            my_sprite->animation_sword = 0;
            my_sprite->fight_turn = 1;
            sfClock_restart(my_sprite->move_clock.clock);
        }
    }
}

void animate_glenn_fight2(draw_sprite_t *my_sprite)
{
    if (my_sprite->anim_fight == 2) {
        if (my_sprite->animation_sword == 1) {
            my_sprite->animation_sword++;
            sfClock_restart(my_sprite->move_clock.clock);
        }
        my_sprite->s_glenn.posi.x += 5;
        my_sprite->s_glenn.posi.y--;
        my_sprite->s_glenn.rect = (sfIntRect) {241, 553, 83, 152};
        if (sfClock_getElapsedTime(my_sprite->move_clock.clock).microseconds
        > 300000) {
            my_sprite->anim_fight = 3;
            sfSound_play(my_sprite->sound_att.sound);
            sfClock_restart(my_sprite->move_clock.clock);
        }
    }
}

void animate_glenn_fight(draw_sprite_t *my_sprite)
{
    if (my_sprite->anim_fight == 0) {
        my_sprite->s_glenn.posi = (sfVector2f) {200, 720};
        animate_right(my_sprite, 420, 560, &my_sprite->s_glenn);
    }
    if (my_sprite->anim_fight == 1) {
        if (my_sprite->animation_sword == 0) {
            my_sprite->s_glenn.rect = (sfIntRect) {0, 563, 100, 95};
            my_sprite->animation_sword++;
        }
        my_sprite->s_glenn.posi.x += 5;
        if (sfClock_getElapsedTime(my_sprite->move_clock.clock).microseconds
        > 250000) {
            my_sprite->s_glenn.rect.left += 115;
            if (my_sprite->s_glenn.rect.left >= 230)
                my_sprite->s_glenn.rect.left = 0;
            sfClock_restart(my_sprite->move_clock.clock);
        }
        if (my_sprite->s_glenn.posi.x >= 680)
            my_sprite->anim_fight = 2;
    }
}