#ifndef __j1MAP_H__
#define __j1MAP_H__

#include "PugiXml/src/pugixml.hpp"
#include "p2List.h"
#include "p2Point.h"
#include "j1Module.h"

// TODO 2: Create a struct to hold information for a TileSet
// Ignore Terrain Types and Tile Types for now, but we want the image!
// ----------------------------------------------------


// TODO 1: Create a struct needed to hold the information to Map node
enum map_orientation
{
	orthogonal = 0,
	isometric,
	staggered,
	hexagonal,
};

enum render_order
{
	right_down = 0,
	right_up,
	left_down,
	left_up,
};

struct map
{
	map_orientation  orientation;
	render_order renderorder;
	uint width;
	uint height;
	uint tilewidth;
	uint tileheight;
	int nextobjectid;
};

struct TileSet
{
	int firstgid;
	p2SString name;
	uint tilewidth;
	uint tileheight;
	uint spacing;
	uint margin;
};

// ----------------------------------------------------
class j1Map : public j1Module
{
public:

	j1Map();

	// Destructor
	virtual ~j1Map();

	// Called before render is available
	bool Awake(pugi::xml_node& conf);

	// Called each loop iteration
	void Draw();

	// Called before quitting
	bool CleanUp();

	// Load new map
	bool Load(const char* path);

private:

	bool Fill_map_data(pugi::xml_node& node);

public:

	map current_map;

	// TODO 1: Add your struct for map info as public for now
	

private:

	pugi::xml_document	map_file;
	pugi::xml_node map_node;
	p2SString			folder;
	bool				map_loaded;
};

#endif // __j1MAP_H__