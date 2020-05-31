/*
** EPITECH PROJECT, 2019
** my_RPG
** File description:
** mouv_player.c
*/

#include "my_rpg.h"

void mouv_chrono_mini(draw_sprite_t *my_sprite)
{
    if (sfKeyboard_isKeyPressed(sfKeyLeft) &&
    my_sprite->s_chro2.stop_left != 1) {
        my_sprite->s_chro2.posi.x -= 2;
        move_left_chrono2(my_sprite, 280, 260);
    }
    if (sfKeyboard_isKeyPressed(sfKeyRight) &&
    my_sprite->s_chro2.stop_right != 1) {
        my_sprite->s_chro2.posi.x += 2;
        move_right_chrono2(my_sprite, 280, 260);
    }
    if (sfKeyboard_isKeyPressed(sfKeyUp) &&
    my_sprite->s_chro2.stop_up != 1) {
        my_sprite->s_chro2.posi.y -= 2;
        move_up_chrono2(my_sprite, 280, 260);
    }
    if (sfKeyboard_isKeyPressed(sfKeyDown) &&
    my_sprite->s_chro2.stop_down != 1) {
        my_sprite->s_chro2.posi.y += 2;
        move_down_chrono2(my_sprite, 280);
    }
}

void mouv_glenn_mini(draw_sprite_t *my_sprite)
{
    if (sfKeyboard_isKeyPressed(sfKeyLeft) &&
    my_sprite->s_glen2.stop_left != 1) {
        my_sprite->s_glen2.posi.x -= 1.5;
        move_left_glenn2(my_sprite, 280, 188);
    }
    if (sfKeyboard_isKeyPressed(sfKeyRight) &&
    my_sprite->s_glen2.stop_right != 1) {
        my_sprite->s_glen2.posi.x += 1.5;
        move_right_glenn2(my_sprite, 280, 188);
    }
    if (sfKeyboard_isKeyPressed(sfKeyUp) &&
    my_sprite->s_glen2.stop_up != 1) {
        my_sprite->s_glen2.posi.y -= 1.5;
        move_up_glenn2(my_sprite, 280, 188);
    }
    if (sfKeyboard_isKeyPressed(sfKeyDown) &&
    my_sprite->s_glen2.stop_down != 1) {
        my_sprite->s_glen2.posi.y += 1.5;
        move_down_glenn2(my_sprite, 280);
    }
}

void mouv_chrono(draw_sprite_t *my_sprite)
{
    if (sfKeyboard_isKeyPressed(sfKeyLeft) &&
    my_sprite->s_chro.stop_left != 1) {
        my_sprite->s_chro.posi.x -= 2;
        move_left_chrono(my_sprite, 420, 392);
    }
    if (sfKeyboard_isKeyPressed(sfKeyRight) &&
    my_sprite->s_chro.stop_right != 1) {
        my_sprite->s_chro.posi.x += 2;
        move_right_chrono(my_sprite, 420, 392);
    }
    if (sfKeyboard_isKeyPressed(sfKeyUp) &&
    my_sprite->s_chro.stop_up != 1) {
        my_sprite->s_chro.posi.y -= 2;
        move_up_chrono(my_sprite, 420, 392);
    }
    if (sfKeyboard_isKeyPressed(sfKeyDown) &&
    my_sprite->s_chro.stop_down != 1) {
        my_sprite->s_chro.posi.y += 2;
        move_down_chrono(my_sprite, 420);
    }
}

void mouv_glenn(draw_sprite_t *my_sprite)
{
    if (sfKeyboard_isKeyPressed(sfKeyLeft) &&
    my_sprite->s_glenn.stop_left != 1) {
        my_sprite->s_glenn.posi.x -= 1.5;
        move_left_glenn(my_sprite, 420, 280);
    }
    if (sfKeyboard_isKeyPressed(sfKeyRight) &&
    my_sprite->s_glenn.stop_right != 1) {
        my_sprite->s_glenn.posi.x += 1.5;
        move_right_glenn(my_sprite, 420, 280);
    }
    if (sfKeyboard_isKeyPressed(sfKeyUp) &&
    my_sprite->s_glenn.stop_up != 1) {
        my_sprite->s_glenn.posi.y -= 1.5;
        move_up_glenn(my_sprite, 420, 280);
    }
    if (sfKeyboard_isKeyPressed(sfKeyDown) &&
    my_sprite->s_glenn.stop_down != 1) {
        my_sprite->s_glenn.posi.y += 1.5;
        move_down_glenn(my_sprite, 420);
    }
}