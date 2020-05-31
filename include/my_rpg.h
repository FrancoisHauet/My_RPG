/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

typedef struct set_sound
{
    sfSound *sound;
    sfSoundBuffer *buffer;
} set_sound_t;

typedef struct set_text
{
    sfText *text;
    sfFont *font;
    sfVector2f posi_text;
} set_text_t;

typedef struct set_clock
{
    sfClock *clock;
    sfVector2f offset;
    sfTime time;
} set_clock_t;

typedef struct set_sprite
{
    int life;
    int attack;
    int speed;
    int select;
    char *name;
    int stop_left;
    int stop_right;
    int stop_up;
    int stop_down;
    sfSprite *s;
    sfVector2f posi;
    sfIntRect rect;
    sfIntRect s_rect;
} set_sprite_t;

typedef struct set_texture
{
    sfTexture *t;
} set_texture_t;

typedef struct set_music
{
    sfMusic *music;
} set_music_t;

typedef struct draw_sprite
{
    set_texture_t t_home;
    set_sprite_t s_home;
    set_texture_t t_home2;
    set_sprite_t s_house;
    set_texture_t t_house;
    set_sprite_t s_home2;
    set_sprite_t s_start;
    set_texture_t t_start;
    set_sprite_t s_exit;
    set_texture_t t_exit;
    set_sprite_t s_name;
    set_texture_t t_name;
    set_sprite_t s_name2;
    set_texture_t t_name2;
    set_texture_t t_player;
    set_sprite_t s_player;
    set_texture_t t_chro;
    set_sprite_t s_chro;
    set_texture_t t_chro2;
    set_sprite_t s_chro2;
    set_texture_t t_glenn;
    set_sprite_t s_glenn;
    set_texture_t t_glen2;
    set_sprite_t s_glen2;
    set_texture_t t_rec;
    set_sprite_t s_rec;
    set_texture_t t_tut;
    set_sprite_t s_tut;
    set_texture_t t_tuto;
    set_sprite_t s_tuto;
    set_texture_t t_map1;
    set_sprite_t s_map1;
    set_sprite_t s_icop1;
    set_texture_t t_icop1;
    set_sprite_t s_icop2;
    set_texture_t t_icop2;
    set_sprite_t s_icoa;
    set_texture_t t_icoa;
    set_sprite_t s_icos;
    set_texture_t t_icos;
    set_sprite_t s_icohp;
    set_texture_t t_icohp;
    set_texture_t t_map2;
    set_sprite_t s_map2;
    set_texture_t t_arena;
    set_sprite_t s_arena;
    set_texture_t t_1;
    set_sprite_t s_1;
    set_texture_t t_2;
    set_sprite_t s_2;
    set_texture_t t_3;
    set_sprite_t s_3;
    set_texture_t t_invc;
    set_sprite_t s_invc;
    set_texture_t t_invg;
    set_sprite_t s_invg;
    set_texture_t t_right;
    set_sprite_t s_right;
    set_texture_t t_right2;
    set_sprite_t s_right2;
    set_texture_t t_right3;
    set_sprite_t s_right3;
    set_texture_t t_map3;
    set_sprite_t s_map3;
    set_sound_t sound_att;
    set_text_t text;
    set_text_t text2;
    set_text_t text3;
    set_text_t text4;
    set_text_t text5;
    set_text_t text6;
    set_text_t text7;
    set_text_t text8;
    set_text_t text9;
    set_text_t text10;
    set_text_t text11;
    set_text_t text12;
    set_text_t text13;
    set_text_t text14;
    set_text_t text15;
    set_text_t text16;
    set_text_t text17;
    set_text_t text18;
    set_text_t text19;
    set_text_t txt_hp;
    set_text_t txt_a;
    set_text_t txt_ms;
    set_text_t txt_lvl1;
    set_text_t txt_lvl2;
    set_music_t music;
    set_music_t music2;
    set_music_t musicf;
    set_music_t musicw;
    set_sound_t sound_dor;
    set_sprite_t smap_boss;
    set_texture_t tmap_boss;
    set_sprite_t sboss;
    set_texture_t tboss;
    set_texture_t t_boss2;
    set_sprite_t s_boss2;
    set_texture_t t_atack;
    set_sprite_t s_atack;
    set_texture_t t_care;
    set_sprite_t s_care;
    set_texture_t t_endc;
    set_sprite_t s_endc;
    set_texture_t t_endg;
    set_sprite_t s_endg;
    set_texture_t t_credi;
    set_sprite_t s_credi;
    set_texture_t t_lose;
    set_sprite_t s_lose;
    set_texture_t t_retry;
    set_sprite_t s_retry;
    int att1;
    int att2;
    int niv;
    int hp1;
    int hp2;
    int ms1;
    int ms2;
    set_clock_t move_clock;
    set_clock_t anim_clock;
    int text_numb;
    unsigned int text_numb2;
    int button;
    int key_select;
    int timer;
    int choose;
    int stop_rand;
    int side;
    int lose;
    int level;
    int sword;
    int back;
    int anim_fight;
    int animation_sword;
    int fight_turn;
    int death;
    int boss_life;
    int immobile;
    set_sound_t sound_hit;
    set_sound_t sound_health;
    set_sound_t sound_death;
    set_sound_t sound_crak;
} draw_sprite_t;

typedef struct setup
{
    int rec;
    int scene;
    sfRenderWindow *window;
    sfEvent event;
    sfVideoMode mode;
    sfVector2i posi_mouse;
    sfVector2f posi_sprite;
    sfMouseButton button;
} setup_t;

void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str, int size);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
char *my_itoa(int nb);
void color_name(setup_t *window, draw_sprite_t *my_sprite);
void click_name2(setup_t *window, draw_sprite_t *my_sprite);
void click_name(setup_t *window, draw_sprite_t *my_sprite);
void color_bottom(setup_t *window, draw_sprite_t *my_sprite);
void click_bottom(setup_t *window, draw_sprite_t *my_sprite);
void click_tuto(setup_t *window, draw_sprite_t *my_sprite);
void color_tuto(setup_t *window, draw_sprite_t *my_sprite);
void create_choose_player(draw_sprite_t *my_sprite);
void create_background(draw_sprite_t *my_sprite);
void draw_home(setup_t *window, draw_sprite_t *my_sprite);
void draw_choose_player(setup_t *window, draw_sprite_t *my_sprite);
void create_my_windows(setup_t *window);
void create_sprite(draw_sprite_t *my_sprite);
void init_scene(setup_t *window, draw_sprite_t *my_sprite);
void choose(setup_t *window, draw_sprite_t *my_sprite);
void scene_one(setup_t window, draw_sprite_t my_sprite);
void collision_table(draw_sprite_t *my_sprite);
void collision_bed(draw_sprite_t *my_sprite);
void collision_dresser(draw_sprite_t *my_sprite);
void speak_collision_glenn(draw_sprite_t *my_sprite, setup_t *window);
void speak_collision_chrono(draw_sprite_t *my_sprite, setup_t *window);
void mother_collision(draw_sprite_t *my_sprite);
void plant_collision_chrono(draw_sprite_t *my_sprite);
void carpet_collision(draw_sprite_t *my_sprite, setup_t *window);
void plant_collision_glenn(draw_sprite_t *my_sprite);
void wall_collision(draw_sprite_t *my_sprite);
void wall_collision_glenn(draw_sprite_t *my_sprite);
void wall_collision_chrono(draw_sprite_t *my_sprite);
void wall_x_collision(draw_sprite_t *my_sprite);
void wall_y_collision(draw_sprite_t *my_sprite);
void draw_tuto(setup_t *window, draw_sprite_t *my_sprite);
void draw_house(setup_t *window, draw_sprite_t *my_sprite);
void create_tutorial(draw_sprite_t *my_sprite);
void create_text(draw_sprite_t *my_sprite);
void create_house(draw_sprite_t *my_sprite);
void create_character(draw_sprite_t *my_sprite);
void mouv_glenn(draw_sprite_t *my_sprite);
void mouv_chrono(draw_sprite_t *my_sprite);
void draw_first_map(setup_t *window, draw_sprite_t *my_sprite);
void create_first_map(draw_sprite_t *my_sprite);
void create_arena(draw_sprite_t *my_sprite);
void draw_arena(draw_sprite_t *my_sprite, setup_t *window);
void draw_second_map(setup_t *window, draw_sprite_t *my_sprite);
void create_second_map(draw_sprite_t *my_sprite);
void mouv_chrono_mini(draw_sprite_t *my_sprite);
void mouv_glenn_mini(draw_sprite_t *my_sprite);
void pokestop_collision_chrono2(draw_sprite_t *my_sprite);
void shop_collision(draw_sprite_t *my_sprite);
void house_collision_chrono2(draw_sprite_t *my_sprite);
void pokestop_collision_chrono(draw_sprite_t *my_sprite);
void house_collision_chrono(draw_sprite_t *my_sprite);
void limit_map_gleen(draw_sprite_t *my_sprite, setup_t *window);
void pokestop_collision_glenn2(draw_sprite_t *my_sprite);
void house_collision_glenn2(draw_sprite_t *my_sprite);
void pokestop_collision_glenn(draw_sprite_t *my_sprite);
void house_collision_glenn(draw_sprite_t *my_sprite);
void rock_collision_chrono(draw_sprite_t *my_sprite);
void limit_map_chrono(draw_sprite_t *my_sprite, setup_t *window);
void bush_top_collision_chrono(draw_sprite_t *my_sprite);
void bush_chrono_collision(draw_sprite_t *my_sprite);
void stopper_collision(draw_sprite_t *my_sprite);
void bush_fencing_collision2_chrono(draw_sprite_t *my_sprite);
void bush_fencing_collision(draw_sprite_t *my_sprite);
void water_collision_chrono(draw_sprite_t *my_sprite);
void bush_fencing_collision2_glenn(draw_sprite_t *my_sprite);
void water_collision_glenn(draw_sprite_t *my_sprite);
void rock_collision_glenn(draw_sprite_t *my_sprite);
void bush_top_glenn_collision(draw_sprite_t *my_sprite);
void bush_glenn_collision(draw_sprite_t *my_sprite);
void water_tree_chrono_map2(draw_sprite_t *my_sprite);
void rock_map2(draw_sprite_t *my_sprite);
void enter_map2(draw_sprite_t *my_sprite);
void limit_map2(draw_sprite_t *my_sprite, setup_t *window);
void collision_map2_chrono(draw_sprite_t *my_sprite);
void water_tree_glenn_map2(draw_sprite_t *my_sprite);
void collision_map2_glenn(draw_sprite_t *my_sprite);
void create_icone_player(draw_sprite_t *my_sprite);
void create_icone_hud(draw_sprite_t *my_sprite);
void display_hud(setup_t *window, draw_sprite_t *my_sprite);
void create_sound(draw_sprite_t *my_sprite);
void create_text_hud(draw_sprite_t *my_sprite);
void play_song(draw_sprite_t *my_sprite, int choose);
void move_left_glenn2(draw_sprite_t *my_sprite, int width, int height);
void move_left_chrono2(draw_sprite_t *my_sprite, int width, int height);
void move_up_chrono(draw_sprite_t *my_sprite, int width, int height);
void move_down_chrono(draw_sprite_t *my_sprite, int width);
void move_left_chrono(draw_sprite_t *my_sprite, int width, int height);
void move_right_chrono(draw_sprite_t *my_sprite, int width, int height);
void move_right_chrono2(draw_sprite_t *my_sprite, int width, int height);
void move_up_chrono2(draw_sprite_t *my_sprite, int width, int height);
void move_down_chrono2(draw_sprite_t *my_sprite, int width);
void move_down_glenn(draw_sprite_t *my_sprite, int width);
void move_up_glenn(draw_sprite_t *my_sprite, int width, int height);
void move_right_glenn(draw_sprite_t *my_sprite, int width, int height);
void move_left_glenn(draw_sprite_t *my_sprite, int width, int height);
void move_left_glenn2(draw_sprite_t *my_sprite, int width, int height);
void move_right_glenn2(draw_sprite_t *my_sprite, int width, int height);
void move_up_glenn2(draw_sprite_t *my_sprite, int width, int height);
void move_down_glenn2(draw_sprite_t *my_sprite, int width);
void collision_init_chrono(draw_sprite_t *my_sprite);
void collision_enter_chrono_left(draw_sprite_t *my_sprite);
void collision_enter_chrono_right(draw_sprite_t *my_sprite);
void collision_center_chrono(draw_sprite_t *my_sprite);
void collision_center_chrono2(draw_sprite_t *my_sprite);
void collision_center_chrono3(draw_sprite_t *my_sprite);
void collision_center_chrono4(draw_sprite_t *my_sprite);
void collision_center_chrono5(draw_sprite_t *my_sprite);
void collision_end_chrono(draw_sprite_t *my_sprite);
void collision_woman_chrono(draw_sprite_t *my_sprite, setup_t *window);
void collision_init_glenn(draw_sprite_t *my_sprite);
void collision_enter_glenn_left(draw_sprite_t *my_sprite);
void collision_enter_glenn_right(draw_sprite_t *my_sprite);
void collision_center_glenn(draw_sprite_t *my_sprite);
void collision_center_glenn2(draw_sprite_t *my_sprite);
void collision_center_glenn3(draw_sprite_t *my_sprite);
void collision_center_glenn4(draw_sprite_t *my_sprite);
void collision_center_glenn5(draw_sprite_t *my_sprite);
void collision_end_glenn(draw_sprite_t *my_sprite);
void collision_woman_glenn(draw_sprite_t *my_sprite, setup_t *window);
void draw_text_arena(setup_t *window, draw_sprite_t *my_sprite);
void create_text_arena(draw_sprite_t *my_sprite);
void create_text_arena2(draw_sprite_t *my_sprite);
void draw_text_arena3(setup_t *window, draw_sprite_t *my_sprite);
void draw_text_arena2(setup_t *window, draw_sprite_t *my_sprite);
void draw_text_arena4(setup_t *window, draw_sprite_t *my_sprite);
void draw_text_arena5(setup_t *window, draw_sprite_t *my_sprite);
void draw_text_arena6(setup_t *window, draw_sprite_t *my_sprite);
void animate_char(draw_sprite_t *my_sprite, int x, int y, set_sprite_t *c);
void draw_result_arena(setup_t *window, draw_sprite_t *my_sprite);
void draw_result_arena2(setup_t *window, draw_sprite_t *my_sprite);
void draw_text_countdown_arena2(setup_t *window, draw_sprite_t *my_sprite);
void draw_text_countdown_arena(setup_t *window, draw_sprite_t *my_sprite);
void draw_text_game_arena(setup_t *window, draw_sprite_t *my_sprite);
void draw_text_recover_chrono_arena(setup_t *window, draw_sprite_t *my_sprite);
void draw_text_recover_glenn_arena(setup_t *window, draw_sprite_t *my_sprite);
void draw_text_enter_arena(setup_t *window, draw_sprite_t *my_sprite);
void create_text_arena3(draw_sprite_t *my_sprite);
void draw_following_text_arena(setup_t *window, draw_sprite_t *my_sprite);
void draw_button(draw_sprite_t *my_sprite, setup_t *window);
void draw_inventory(draw_sprite_t *my_sprite, setup_t *window);
void create_inventory(draw_sprite_t *my_sprite);
void create_inventory_text(draw_sprite_t *my_sprite);
void draw_final_text_arena(setup_t *window, draw_sprite_t *my_sprite);
void play_music_scene(draw_sprite_t *my_sprite);
void create_fight(draw_sprite_t *my_sprite);
void disp_fight_map(setup_t *window, draw_sprite_t *my_sprite);
void create_sprite_bis(draw_sprite_t *my_sprite);
void animate_down(draw_sprite_t *my_sprite, int x, int y, set_sprite_t *c);
void animate_up(draw_sprite_t *my_sprite, int x, int y, set_sprite_t *c);
void animate_right(draw_sprite_t *my_sprite, int x, int y, set_sprite_t *c);
void animate_left(draw_sprite_t *my_sprite, int x, int y, set_sprite_t *c);
void animate_persos_fight(setup_t *window, draw_sprite_t *my_sprite);
void animate_chrono_fight(draw_sprite_t *my_sprite);
void animate_chrono_fight2(draw_sprite_t *my_sprite);
void animate_chrono_fight3(draw_sprite_t *my_sprite);
void collision_map3_chrono(draw_sprite_t *my_sprite);
void collision_map3_chrono2(draw_sprite_t *my_sprite, setup_t *window);
void collision_map3_chrono3(draw_sprite_t *my_sprite);
void collision_map3_glenn(draw_sprite_t *my_sprite);
void collision_map3_glenn2(draw_sprite_t *my_sprite, setup_t *window);
void collision_map3_glenn3(draw_sprite_t *my_sprite);
void draw_map3(draw_sprite_t *my_sprite, setup_t *window);
void create_third_map(draw_sprite_t *my_sprite);
void animate_glenn_fight(draw_sprite_t *my_sprite);
void animate_glenn_fight2(draw_sprite_t *my_sprite);
void animate_glenn_fight3(draw_sprite_t *my_sprite);
void create_text_fight(draw_sprite_t *my_sprite);
void draw_end(setup_t *window, draw_sprite_t *my_sprite);
void draw_end2(setup_t *window, draw_sprite_t *my_sprite);
void draw_lose(setup_t *window, draw_sprite_t *my_sprite);
void click_attack_care(setup_t *window, draw_sprite_t *my_sprite);
void color_attack_care(setup_t *window, draw_sprite_t *my_sprite);
void init_end_game(draw_sprite_t *my_sprite);
void create_fight_hud(draw_sprite_t *my_sprite);
void hit_boss(draw_sprite_t *my_sprite, int atk);
void play_music_fight(draw_sprite_t *my_sprite);
void create_sound_fight(draw_sprite_t *my_sprite);
void color_retry(setup_t *window, draw_sprite_t *my_sprite);
void click_retry(setup_t *window, draw_sprite_t *my_sprite);
void init_txt_hud(draw_sprite_t *my_sprite);
#endif