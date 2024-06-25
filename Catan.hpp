//shifaakhatib28@gmail.com
#ifndef CATAN_HPP
#define CATAN_HPP
#include "Player.hpp"

namespace ariel {
/**
 * @class Catan
 * This class represents the game operator and contains the game components -
 * players, and the game board.
 */
class Catan {
private:
  vector<Player *> players; ///< Vector of pointers to the players in the game
  Board *board;             ///< The game board
  int currentPlayerIndex;        ///< Index of the current player

public:
  Catan();             // Default constructor for Catan.
  ~Catan();            // Destructor
  void setPlayers(Player *p1, Player *p2, Player *p3);
  Board *getBoard();   // Get the game board.
  void StartTheGame(); // Start the game.
  int printWinner();  // Print the winner of the game.
  vector<Player*> getPlayers();
  bool isGameEnded();
  Player* getCurrentPlayer(); // Get the current player.
  void nextPlayer();          // Move to the next player.

};
} //namespace ariel
#endif
