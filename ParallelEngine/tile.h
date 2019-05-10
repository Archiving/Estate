#ifndef TILE_H
#define TILE_H
#include <allegro5/allegro.h>

class Tile {
public:
	Tile(ALLEGRO_BITMAP * image);
	~Tile();

	void render(int x, int y);
private:
	ALLEGRO_BITMAP * baseImage;
};

#endif TILE_H