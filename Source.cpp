#include <allegro5\allegro.h>
#include <allegro5\allegro_font.h>
#include <allegro5\allegro_ttf.h>
#include <iostream>

using namespace std;

int main() {
	int input;
	cout << "How old are you?" << endl;
	cin >> input;

	ALLEGRO_DISPLAY *gamewindow = NULL;
	al_init();
	al_init_font_addon();
	al_init_ttf_addon();
	ALLEGRO_FONT *font = al_load_ttf_font("font.ttf", 50, 0);
	gamewindow = al_create_display(500, 500);
	al_set_window_position(gamewindow, 200, 200);
	al_set_window_title(gamewindow, "Happy Birthday");
	al_clear_to_color(al_map_rgb(255, 255, 255));
	al_draw_textf(font, al_map_rgb(255, 0, 255), 250, 200, ALLEGRO_ALIGN_CENTRE, "Happy %dTH birthday", input);
	al_flip_display();
	al_rest(10.0);
	al_destroy_display(gamewindow);
}