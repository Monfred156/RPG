/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** Task02 Day09
*/

#ifndef FUNCTION_H_
#define FUNCTION_H_

#include "my.h"
#include "struct.h"
///////////////////////////////INITIA FOLDER////////////////////////////////////

///pnj_random_move.c///
void move_rect_pnj(global *gb,const int *value, float *time, int sprite);
void pnj_rando_rect(global *gb, int sprite, int offset, int max_value);

///initia_pnj.c///
void initia_pnj(global *gb);

///initia_stats.c///
void initia_stats(global *gb);

///initia_ash.c///
void initia_button_ash(global *gb);
void initia_sprite_ash(global *gb);
void initia_hitbox_ash(global *gb);

///initia_pub.c///
void initia_button_pub(global *gb);
void initia_sprite_pub(global *gb);
void initia_hitbox_pub(global *gb);

///initia_shop.c///
void initia_var_town(global *gb);
void initia_button_shop(global *gb);

///initia_town.c//
void initia_button_town(global *gb);
void initia_sprite_town(global *gb);
void initia_hitbox_town(global *gb);

///initia_launch.c///
void initia_sprite_launch(global *gb);
void initia_button_launch(global *gb);

///initia_dialogue.c///
void initia_sprite_speak(global *gb);
void initia_dialogue(global *gb);

///initia_option.c///
void initia_button_option(global *gb);
void initia_sprite_option(global *gb);

///initia_function.c///
void initia_window(global *gb);
struct s_sprite *initia_sprite(struct s_sprite *sprite, char *path, sfVector2f
pos, sfIntRect rect);
struct s_text *initia_text(struct s_text *text, char **string, sfVector2f
pos, sfColor color, unsigned int size);
struct s_sound *initia_sound(struct s_sound *sound, char *path, bool loop);
struct s_button *initia_button(struct s_button *button, sfVector2f size,
    sfVector2f pos);
struct s_mob *initia_sprite_mob(struct s_mob *mob, char *path, sfVector2f
pos, sfIntRect rect);

///initia_function2.c///
struct s_hitbox *initia_hitbox(struct s_hitbox *hitbox, sfVector2f size,
    sfVector2f pos);
struct s_teleport *initia_teleport(struct s_teleport *teleport,
    sfVector2f size, sfVector2f pos);
struct s_trader *initia_trader(struct s_trader *trader,
    sfVector2f size, sfVector2f pos);
struct s_quest *initia_quest(struct s_quest *quest,
    sfVector2f size, sfVector2f pos, int nb_quest);
struct s_hud *initia_hud(struct s_hud *hud, sfVector2f size, sfVector2f pos);

///initia_items.c///
void initia_items(global *gb);

///initia_inventory.c///
void initia_inventory(global *gb);
void initia_button_inventory(global *gb);
void initia_button_inventory2(global *gb);
void initia_button_inventory3(global *gb);
void initia_button_inventory4(global *gb);

///initi_esc.c///
void initia_sprite_esc(global *gb);
void initia_button_esc(global *gb);

////////////////////////////////////////////////////////////////////////////////

///escape.c///
void manage_event_esc(global *gb);
void display_esc(global *gb);

///display_inventory.c///
void draw_item(global *gb, int temp, sfVector2f *pos);
void set_stuff1(global *gb);
void set_stuff2(global *gb);
void set_stuff3(global *gb);

///event_movement_player_ash.c///
void event_move_player_ash(global *gb, int sprite);

///movement_player_ash.c///
void movement_top_player_ash(global *gb, float time_sec, int animation, int sprite);
void movement_back_player_ash(global *gb, float time_sec, int animation, int sprite);
void movement_left_player_ash(global *gb, float time_sec, int sprite);
void movement_right_player_ash(global *gb, float time_sec, int sprite);

///ashland.c///
void teleport_to_place_ash(global *gb);
void move_rect_portal_back(global *gb, int offset, int max_value, float *time);
void manage_event_ash(global *gb);
void display_ash(global *gb);

///event_movement_player_tuto.c///
void event_move_player_tuto(global *gb, int sprite);

///movement_player_tuto.c///
void movement_top_player_tuto(global *gb, float time_sec, int animation, int sprite);
void movement_back_player_tuto(global *gb, float time_sec, int animation, int sprite);
void movement_left_player_tuto(global *gb, float time_sec, int sprite);
void movement_right_player_tuto(global *gb, float time_sec, int sprite);

///event_movement_player_pub.c///
void event_move_player_pub(global *gb, int sprite);

///movement_player_pub.c///
void movement_top_player_pub(global *gb, float time_sec, int animation, int sprite);
void movement_back_player_pub(global *gb, float time_sec, int animation, int sprite);
void movement_left_player_pub(global *gb, float time_sec, int sprite);
void movement_right_player_pub(global *gb, float time_sec, int sprite);

///event_movement_player_town.c///
void event_move_player_town(global *gb, int sprite);

///movement_player_town.c///
void movement_top_player_town(global *gb, float time_sec, int animation, int sprite);
void movement_back_player_town(global *gb, float time_sec, int animation, int sprite);
void movement_left_player_town(global *gb, float time_sec, int sprite);
void movement_right_player_town(global *gb, float time_sec, int sprite);

///tavern.c///
void dialogue_pnj_pub(global *gb, int sprite, int quest);
void check_touche_key(global *gb, sfKeyCode key);
void manage_event_pub(global *gb);
void display_pub(global *gb);

///town.c///
void dialogue_pnj_town(global *gb, int sprite, int quest);
void teleport_to_place_town(global *gb);
void display_town(global *gb);
void manage_event_town(global *gb);

///launch_.c///
void manage_event_launch(global *gb);
void display_launch(global *gb);

///option.c///
void display_option(global *gb);
void manage_event_option(global *gb);

///menu.c///
void manage_event_menu(global *gb);
void display_menu(global *gb);

///tuto.c///
void dialogue_pnj_tuto(global *gb, int sprite, int quest);
void manage_event_tuto(global *gb);
void display_tuto(global *gb);
void initia_button_tuto(global *gb);

///direction_move_mob.c///
void mob_move(global *gb, int mob, int movement, float speed);

///movement_mob.c///
void movement_top_mob(global *gb, float time_sec, int animation, int sprite);
void movement_back_mob(global *gb, float time_sec, int animation, int sprite);
void movement_left_mob(global *gb, float time_sec, int sprite);
void movement_right_mob(global *gb, float time_sec, int sprite);

///pathern.c///
void pattern_mob(global *gb, int mob);

///check_asset.c///
int check_assets(global *gb);

///initia_menu.c///
void initia_sprite_menu (global *gb);
void initia_button_menu(global *gb);
void initia_sound_menu(global *gb);
void initia_pos_particule_menu(global *gb);

///initia_tuto.c///
void initia_sprite_tuto(global *gb);
void initia_var_tuto(global *gb);

///initia_fight.c///
void initia_fight(global *gb);

///fight.c///
void display_fight(global *gb);
void manage_event_fight(global *gb, int mob);

///end_fight.c///
void end_game(global *gb, int mob);
void mob_move_fght(global *gb, int mob, int movement, float speed);

///mouse_clic.c///
int mouse_clic_button(global *gb, sfRectangleShape *rect);

///time.c///
void initia_time(global *gb);

///rpg.c///
void call_initia_function(global *gb);
void initia_hitbox_tuto(global *gb);

///get_save.c///
int get_save(global *gb);

///function_for_get_save.c///
void decal(char *str, int counter);
int check_var(char *str, char **array);
char **get_into_map(char **map, char *str, int counter);
int my_strncmp(char *str1, char *str2, int counter);

///save_into_file.c///
int save_into_file(global *gb);

///check_hitbox.c///
int check_hitbox_up(global *gb, sfSprite *sprite, float time_sec, int
*limit_value);
int check_hitbox_right(global *gb, sfSprite *sprite, float
time_sec, int *limit_value);
int check_hitbox_down(global *gb, sfSprite *sprite, float time_sec, int
*limit_value);
int check_hitbox_left(global *gb, sfSprite *sprite, float time_sec, int
*limit_value);

///attack///
void anim_attack(global *gb, int sprite);

///inventory.c///
void open_inventory(global *gb);
void display_inventory (global *gb);
void initia_button_inventory(global *gb);
void event_inventory(global *gb);

///event_movement_player.c///
void event_move_player_fight(global *gb, int sprite);

///movement_player.c///
void movement_left_player_fight(global *gb, float time_sec, int sprite);
void movement_right_player_fight(global *gb, float time_sec, int sprite);

///check_2_in.c///
int collision_between__sprite(sfSprite *sprite1, sfRectangleShape *rect1);
int collision_between__mob(sfSprite *sprite1, sfSprite *rect);
int collision_fght__mob(int mob, global *gb);
int collision__mob(int mob, global *gb);

///display_hud.c///
void display_hud(global *gb);

///continue.c///
void pressed_continued(global *gb);

///trader.c///
void event_trader(global *gb);

///buy.c///
void function_buy1(global *gb);
void function_buy2(global *gb);
void function_buy3(global *gb);

///envent_inventory.c///
void equip_stuff(global *gb, int *place);
void desequip_stuff(global *gb);

///inventory_equip.c///
void equip_weapon_chest(global *gb, int const *place);
void equip_head_shield(global *gb, int const *place);
void equip_legs(global *gb, const int *place);

///reiniti_all.c///
void reini_all(global *gb);

///inventory_desequip.c///
void desequip_head_shield(global *gb);
void desequip_armor_weapon(global *gb);
void desequip_legs(global *gb);

///info_inventory.c///
void display_stats(global *gb);

///calculate_stats.c///
void calculate_stats(global *gb);

#endif