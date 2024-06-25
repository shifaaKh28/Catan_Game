#ifndef TILE_HPP
#define TILE_HPP

#include "ResourceCards.hpp"
#include "Vertices.hpp"
#include "Edges.hpp"
#include <vector>

using namespace std;

namespace ariel {

/**
 * @class Tile
 * @brief Represents a tile on the board.
 */
class Tile {
private:
  string resource;    /**< The resource type of the tile */
  int num;            /**< The number assigned to the tile (2-12) */
  int tile_id;        /**< Unique identifier for the tile */
  vector<Road> roads; /**< Roads connected to the tile */
  Card *card;         /**< Resource card associated with the tile */
  vector<Vertex *> vertices = {3, nullptr}; /**< Vertices (corners) of the tile */

public:
  /**
   * @brief Constructs a Tile with specified resource, number, cities, roads, and settlements.
   * @param resource The resource type of the tile.
   * @param num The number assigned to the tile (2-12).
   * @param cities Vector of cities adjacent to the tile.
   * @param roads Vector of roads adjacent to the tile.
   * @param settelments Vector of settlements adjacent to the tile.
   */
  Tile(string resource, int num, vector<City> cities, vector<Road> roads, vector<Settlement> settelments);

  /**
   * @brief Default constructor for Tile.
   */
  Tile();                           

  /**
   * @brief Destructor for Tile.
   */
  ~Tile();                           

  /**
   * @brief Gets the resource type of the tile.
   * @return The resource type as a string.
   */
  string getResourceOfTile();     

  /**
   * @brief Gets the road at the specified index.
   * @param i The index of the road.
   * @return Pointer to the Road object.
   */
  Road *getRoad(size_t i);       

  /**
   * @brief Sets a road for the tile.
   * @param road The road to set.
   */
  void setRoads(Road road);              

  /**
   * @brief Displays information about the tile.
   */
  void displayTile();                  

  /**
   * @brief Sets the vertices for the tile.
   * @param v Vector of Vertex pointers.
   */
  void setVertex(vector<Vertex *> v); 

  /**
   * @brief Gets the vertices of the tile.
   * @return Vector of Vertex pointers.
   */
  vector<Vertex *> getVertex();       

  /**
   * @brief Gets the number assigned to the tile.
   * @return The number of the tile.
   */
  int getNum();                       

  /**
   * @brief Gets the resource card associated with the tile.
   * @return Pointer to the Card object.
   */
  Card *getResCard();                    

  /**
   * @brief Sets the resource card for the tile.
   * @param card Pointer to the Card object.
   */
  void setResCard(Card *card);               

  /**
   * @brief Gets the unique identifier of the tile.
   * @return The tile ID.
   */
  int getTile_id();                   

  /**
   * @brief Sets the unique identifier for the tile.
   * @param num The tile ID to set.
   */
  void setTile_id(int num);             
};

} //namespace ariel

#endif //TILE_HPP
