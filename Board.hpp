//shifaakhatib28@gmail.com
#ifndef BOARD_HPP
#define BOARD_HPP

#include "DevelopmentCard.hpp"
#include "Tile.hpp"
#include <vector>
#include <map>

namespace ariel {

/**
 * @brief Class representing the game board.
 * 
 * The board holds collections of vertices, edges, tiles, and development cards.
 */
class Board {
private:
  std::map<DevelopmentCard *, int> devCards; ///< Map of development cards and their quantities.
  std::vector<Vertex *> vertices;           ///< Vector of vertices representing points on the board.
  std::vector<Edge *> edges;                ///< Vector of edges representing connections between vertices.
  std::vector<Tile *> tiles;                ///< Vector of tiles representing the game board tiles.
 

public:
  /**
   * @brief Default constructor for Board.
   */
  Board();

  /**
   * @brief Destructor for Board.
   */
  ~Board();

  /**
   * @brief Method to get the vertex at a specific index.
   * 
   * @param i The index of the vertex.
   * @return Vertex* Pointer to the vertex at index `i`.
   */
  Vertex *getVertexAt(int i);

  /**
   * @brief Method to get the edge at a specific index.
   * 
   * @param i The index of the edge.
   * @return Edge* Pointer to the edge at index `i`.
   */
  Edge *getEdgeAt(int i);

  /**
   * @brief Method to get the tile at a specific index.
   * 
   * @param i The index of the tile.
   * @return Tile* Pointer to the tile at index `i`.
   */
  Tile *getTileAt(int i);

  /**
   * @brief Method to pick a random development card.
   * 
   * @return DevelopmentCard* Pointer to a random development card.
   */
  DevelopmentCard *pickRandomDevCard();

  /**
   * @brief Method to display the current state of the board.
   * 
   * This method prints out information about the vertices, edges, tiles, and
   * development cards currently present on the board.
   */
  void displayBoard();
};

} // namespace ariel

#endif // BOARD_HPP
