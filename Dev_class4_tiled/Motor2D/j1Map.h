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
	invalid_orientation =0,
	orthogonal,
	isometric,
	staggered,
	hexagonal,
};

enum render_order
{
	invalid_order =0,
	right_down,
	right_up,
	left_down,
	left_up,
};

struct map
{
	map_orientation  orientation = invalid_orientation;
	render_order renderorder = invalid_order;
	uint width = 0;
	uint height = 0;
	uint tilewidth = 0;
	uint tileheight = 0;
	int nextobjectid = 0;
};

struct TileSet
{
	int firstgid = 0;
	p2SString name;
	uint tilewidth = 0;
	uint tileheight = 0;
	uint spacing = 0;
	uint margin = 0;
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
	p2List<TileSet> tiles;

private:

	pugi::xml_document	map_file;
	pugi::xml_node map_node;
	p2SString			folder;
	bool				map_loaded;
};

#endif // __j1MAP_H__