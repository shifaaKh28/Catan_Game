//shifaakhatib28@gmail.com
#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Board.hpp"
#include "DevelopmentCard.hpp"
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <random>
#include <stdexcept>

using namespace std;

namespace ariel
{
  class Player
  {
  private:
    Board *board; ///< Pointer to the game board
    string playerName; ///< Name of the player

    map<string, int> resourceCards; ///< Map of resource cards and their quantities
    map<DevelopmentCard *, int> devCards; ///< Map of development cards and their quantities

    int playerScore = 0; ///< Player's score

    bool isMyTurn = false; ///< Indicates if it is the player's turn
    Player *_nextPlayerTurn; ///< Pointer to the next player's turn
    vector<Player *> otherPlayersTurns; ///< Vector of other players' turns
    

  public:
    /**
     * @brief Default constructor for Player
     */
    Player();

    /**
     * @brief Destructor for Player
     */
    ~Player();

    /**
     * @brief Parameterized constructor for Player
     * @param name The name of the player
     */
    Player(string name);

    Board* getBoard() const;

   

    /**
     * @brief Get the player's name
     * @return The player's name
     */
    string getPlayerName();

    /**
     * @brief Get if it's the current player's turn
     * @return True if it's the player's turn, otherwise false
     */
    bool getCurrentPlayerTurn();

    /**
     * @brief Set if it's the current player's turn
     * @param b True to set it as the player's turn, otherwise false
     */
    void setIsCurrentPlayerTurn(bool b);

    /**
     * @brief Set the next player's turn
     * @param player Pointer to the next player
     */
    void setNextPlayerTurn(Player *player);

    /**
     * @brief Set the other player's turn
     * @param player Pointer to the other player
     */
    void setOtherPlayerTurn(Player *player);

        /**
     * @brief Get the other players' turns
     * @return Vector of pointers to the other players
     */
    vector<Player *> getOtherPlayerTurn() const;//this method will use in the test

    /**
     * @brief Get the player's score
     * @return The player's score
     */
    int getScore();

     /**
     * @brief Set the player's score
     * @param score The score to set
     */
    void setScore(int score);//this method will use in test


    /**
     * @brief Buy a development card
     */
    void BuyDevCard();

    /**
     * @brief Display the development cards
     */
    void displayDevelopCard();

    /**
     * @brief Get a development card
     * @return Pointer to a development card
     */
    DevelopmentCard *getDevCard();

    /**
     * @brief Append a resource card to the player's collection
     * @param card Pointer to the resource card
     * @param quantity The quantity of the resource card
     */
    void appendResCard(Card *card, int quantity);

    /**
     * @brief Display the resource cards
     */
    void displayCard();

    /**
     * @brief Decrease the resource cards
     * @param cards Map of resource cards to decrease
     */
    void decreaseResCards(map<string, int> &cards);

    /**
     * @brief Get the total number of specific type of cards
     * @param card_type The type of the card
     * @return The number of cards 
     */
    int getTotalCards(string card_type);

    /**
     * @brief Place a road
     * @param road_id The id of the road
     */
    void placeRoad(int road_id);

    /**
     * @brief Place the first road
     * @param road_id The id of the road
     */
    void placeFirstRoad(int road_id);

    /**
     * @brief Place a settlement
     * @param vertex_id The id of the vertex
     */
    void placeSettelment(int vertex_id);

    /**
     * @brief Place the first settlement
     * @param vertex_id The id of the vertex
     */
    void placeFirstSettelment(int vertex_id);

    /**
     * @brief Place a city
     * @param vertex_id The id of the vertex
     */
    void placeCity(int vertex_id);

    /**
     * @brief Set the game board
     * @param b Pointer to the board
     */
    void setBoard(Board *b);

    /**
     * @brief trade resources with another player
     * @param player Pointer to the other player
     * @param resourceTogive The resource cards to give
     * @param resourceToTake The resource cards to take
     * @param totalToGive The total amount of cards to give
     * @param totalToTake The total amount of cards to take
     */
    void trade(Player *player, string resourceTogive, string resourceToTake, int totalToGive, int totalToTake);

    /**
     * @brief Roll the dice
     * @return The result of the dice roll (2-12)
     */
    int rollDice();

        /**
     * @brief helper method to Distribute resources based on the dice roll.
     * @param diceSum The sum of the dice roll.
     */
    void distributeResources(int diceSum);

    /**
     * @brief helper method to End the current player's turn.
     */
    void endTurn();


  };

} // namespace ariel

#endif // PLAYER_HPP
