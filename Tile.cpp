//shifaakhatib28@gmail.com
#include "Tile.hpp"
using namespace std;
using namespace ariel;

/**
 * @brief Constructs a Tile with specified resource, number, cities, roads, and settlements.
 * @param r The resource type of the tile.
 * @param num The number assigned to the tile.
 * @param cities Vector of cities adjacent to the tile.
 * @param roads Vector of roads adjacent to the tile.
 * @param settelments Vector of settlements adjacent to the tile.
 */
Tile::Tile(string r, int num, vector<City> cities, vector<Road> roads, vector<Settlement> settelments)
    : resource(r), num(num), card(nullptr), roads(roads) 
{
    // Assign a resource card based on the resource type
    if (r == "forest") {
        this->card = new Wood();
    } else if (r == "pasture") {
        this->card = new Wool();
    } else if (r == "hills") {
        this->card = new Brick();
    } else if (r == "mountains") {
        this->card = new Ore();
    } else if (r == "fields") {
        this->card = new Grains();
    } else { 
        this->card = nullptr;
    }
}

/**
 * @brief Default constructor for Tile.
 */
Tile::Tile() : resource(""), num(0), card(nullptr), tile_id(0) {}

/**
 * @brief Destructor for Tile.
 * Deletes the associated resource card.
 */
Tile::~Tile() {
    delete this->card;
}

/**
 * @brief Gets the resource type of the tile.
 * @return The resource type as a string.
 */
string Tile::getResourceOfTile() {
    return this->resource;
}

/**
 * @brief Gets the road at the specified index.
 * @param i The index of the road.
 * @return Pointer to the Road object or nullptr if index is out of range.
 */
Road* Tile::getRoad(size_t i) {
    if (i < this->roads.size()) {
        return &this->roads[i];
    }
    return nullptr;
}

/**
 * @brief Sets a road for the tile.
 * @param r The road to set.
 */
void Tile::setRoads(Road r) {
    this->roads.push_back(r);
}

/**
 * @brief Displays information about the tile.
 */
void Tile::displayTile() {
    cout << "Tile number: " << this->num << ", Resource: " << this->resource << endl;
}

/**
 * @brief Sets the vertices for the tile.
 * @param v Vector of Vertex pointers.
 */
void Tile::setVertex(vector<Vertex *> v) {
    this->vertices = v;
}

/**
 * @brief Gets the vertices of the tile.
 * @return Vector of Vertex pointers.
 */
vector<Vertex *> Tile::getVertex() {
    return this->vertices;
}

/**
 * @brief Gets the number assigned to the tile.
 * @return The number of the tile.
 */
int Tile::getNum() {
    return this->num;
}

/**
 * @brief Gets the resource card associated with the tile.
 * @return Pointer to the Card object.
 */
Card* Tile::getResCard() {
    if (this->card != nullptr) {
        return this->card;
    }

    // Assign a resource card based on the resource type if not already assigned
    string resource = this->getResourceOfTile();

    if (resource == "forest") {
        this->card = new Wood();
    } else if (resource == "pasture") {
        this->card = new Wool();
    } else if (resource == "hills") {
        this->card = new Brick();
    } else if (resource == "mountains") {
        this->card = new Ore();
    } else if (resource == "fields") {
        this->card = new Grains();
    } else { 
        this->card = nullptr;
    }

    return this->card;
}

/**
 * @brief Sets the resource card for the tile.
 * @param card Pointer to the Card object.
 */
void Tile::setResCard(Card* card) {
    this->card = card;
}

/**
 * @brief Gets the unique identifier of the tile.
 * @return The tile ID.
 */
int Tile::getTile_id() {
    return this->tile_id;
}

/**
 * @brief Sets the unique identifier for the tile.
 * @param id The tile ID to set.
 */
void Tile::setTile_id(int id) {
    this->tile_id = id;
}


