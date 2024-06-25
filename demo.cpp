//shifaakhatib28@gmail.com
#include "Catan.hpp"
#include <iostream>

using namespace ariel;


/**
 * @file demo.cpp
 * @brief This file demonstrates the gameplay of the Catan game using the Player, Board, and Catan classes.
 * 
 * The game is initialized with three players, and the board is set up with initial placements of settlements and roads.
 * The game progresses through 10 turns, during which players roll dice, place roads and settlements, buy development cards, 
 * and trade resources. Each turn's data is printed, including the players' cards and scores.
 * 
 * The turns are as follows:
 * 
 * - **Turn 1**: Players roll dice, place roads, and handle exceptions for invalid actions.
 * - **Turn 2**: Players roll dice, attempt to place settlements, and handle exceptions for insufficient resources.
 * - **Turn 3**: Similar to Turn 2 with additional dice rolls and settlement placements.
 * - **Turn 4**: Players roll dice, buy development cards, and place roads.
 * - **Turn 5**: Players roll dice and place cities.
 * - **Turn 6**: Similar to Turn 5 with additional city placements and road placements.
 * - **Turn 7**: Similar to Turn 6 with additional city placements.
 * - **Turn 8**: Players roll dice, trade resources, and buy development cards.
 * - **Turn 9**: Similar to Turn 8 with additional trades and development card purchases.
 * - **Turn 10**: Similar to Turn 9 with additional trades and development card purchases.
 * 
 * At the end of 10 turns, the winner is determined based on the player with the highest score (first to reach 10 points).
 * The game prints the winner or indicates that the game should continue if no player has reached the winning score.
 * 
 * The program ensures that exceptions are handled appropriately during the gameplay to maintain the game's integrity.
 */


void printTurnData(Player *p1, Player *p2, Player *p3)
{
  p1->displayCard();
  p2->displayCard();
  p3->displayCard();
  std::cout << p1->getPlayerName() << " Number of points: " << p1->getScore() << std::endl;
  std::cout << p2->getPlayerName() << " Number of points: " << p2->getScore() << std::endl;
  std::cout << p3->getPlayerName() << " Number of points: " << p3->getScore() << std::endl;
  std::cout << std::endl;
}

int main()
{
  // Prompting user for player names
  string playerName1, playerName2, playerName3;
  std::cout << "Enter name for Player 1: ";
  getline(std::cin, playerName1);

  std::cout << "Enter name for Player 2: ";
  getline(std::cin, playerName2);

  std::cout << "Enter name for Player 3: ";
  getline(std::cin, playerName3);

  // Initializing players and Catan game
  Player *p1 = new Player(playerName1);
  Player *p2 = new Player(playerName2);
  Player *p3 = new Player(playerName3);
  Catan *catan = new Catan();
  catan->setPlayers(p1, p2, p3);

  // Set the game board
  Board *board = new Board();
  p1->setBoard(board);
  p2->setBoard(board);
  p3->setBoard(board);
  catan->StartTheGame();

  // Initial placements
  std::cout << "\n**** Initial Placements ****\n";
  p1->placeFirstSettelment(5);
  p1->placeFirstRoad(6);
  p2->placeFirstSettelment(22);
  p2->placeFirstRoad(23);
  p3->placeFirstSettelment(10);
  p3->placeFirstRoad(11);
  p3->placeFirstSettelment(14);
  p3->placeFirstRoad(15);
  p2->placeFirstSettelment(18);
  p2->placeFirstRoad(19);
  p1->placeFirstSettelment(20);
  p1->placeFirstRoad(21);

  // Print the number of cards for each player
  p1->displayCard();
  p2->displayCard();
  p3->displayCard();

  // Turn 1
  std::cout << std::endl;
  std::cout << "      ------------ TURN : 1 ------------" << std::endl;
  p1->rollDice();
  try
  {
    p1->placeRoad(15); // p1 places a road
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  try
  {
    p3->rollDice(); // p3 tries to roll dice but it is not his turn
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  p2->rollDice();
  try
  {
    p2->placeRoad(27); // p2 places a road
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  p3->rollDice();
  try
  {
    p3->placeRoad(1); // p3 tries to place road in illegal place (not next to his settlement/road)
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  p1->rollDice();
  p2->rollDice();
  p3->rollDice();

  std::cout << "                 ------------TURN 1 Info:    ------------" << std::endl;
  printTurnData(p1, p2, p3);

  // Turn 2
  std::cout << "      ------------ TURN : 2 ------------" << std::endl;
  p1->rollDice();
  p2->rollDice();
  p3->rollDice();
  try
  {
    p1->placeSettelment(13); // p1 tries to place a settlement - not sure he got enough resource cards
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  try
  {
    p2->placeSettelment(22); // p2 tries to place a settlement - not sure he got enough resource cards
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  try
  {
    p3->placeSettelment(18); // p3 tries to place a settlement - not sure he got enough resource cards
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }

  std::cout << "                 ------------TURN 2 Info:    ------------" << std::endl;
  printTurnData(p1, p2, p3);

  // Turn 3
  std::cout << "      ------------ TURN : 3 ------------" << std::endl;
  p1->rollDice();
  try
  {
    p1->placeSettelment(13); // p1 tries to place a settlement - not sure he got enough resource cards
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  p2->rollDice();
  try
  {
    p2->placeSettelment(22); // p2 tries to place a settlement - not sure he got enough resource cards
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  p3->rollDice();
  try
  {
    p3->placeSettelment(18); // p3 tries to place a settlement - not sure he got enough resource cards
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  p1->rollDice();
  p2->rollDice();
  p3->rollDice();

  std::cout << "                 ------------TURN 3 Info:    ------------" << std::endl;
  printTurnData(p1, p2, p3);

  // Turn 4
  std::cout << "      ------------ TURN : 4 ------------" << std::endl; // buy development card
  p1->rollDice();
  p2->rollDice();
  p3->rollDice();
  p1->rollDice();
  try
  {
    p1->BuyDevCard(); // p1 tries to buy a development card - not sure he got enough resource cards
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  try
  {
    p1->placeRoad(5); // p1 tries to place a road - not sure he got enough resource cards
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  p2->rollDice();
  try
  {
    p2->BuyDevCard(); // p2 tries to buy a development card - not sure he got enough resource cards
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  try
  {
    p2->placeRoad(39); // p2 tries to place a road - not sure he got enough resource cards
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  p3->rollDice();
  try
  {
    p3->BuyDevCard(); // p3 tries to buy a development card - not sure he got enough resource cards
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  try
  {
    p3->placeRoad(51); // p3 tries to place a road - not sure he got enough resource cards
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }

  std::cout << "                 ------------TURN 4 Info:    ------------" << std::endl;
  printTurnData(p1, p2, p3);

  // Turn 5
  std::cout << "      ------------ TURN : 5 ------------" << std::endl; // place towns
  p1->rollDice();
  p2->rollDice();
  p3->rollDice();
  p1->rollDice();
  try
  {
    p1->placeCity(11); // p1 tries to place a town - not sure he got enough resource cards
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  p2->rollDice();
  try
  {
    p2->placeCity(29); // p2 tries to place a town - not sure he got enough resource cards
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  p3->rollDice();
  try
  {
    p3->placeCity(41); // p3 tries to place a town - not sure he got enough resource cards
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }

  std::cout << "                 ------------TURN 5 Info:    ------------" << std::endl;
  printTurnData(p1, p2, p3);

  // Turn 6
  std::cout << "      ------------ TURN : 6 ------------" << std::endl;
  p1->rollDice();
  p2->rollDice();
  p3->rollDice();
  p1->rollDice();
  try
  {
    p1->placeCity(9);
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  try
  {
    p1->placeRoad(5);
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  p2->rollDice();
  try
  {
    p2->placeSettelment(31);
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  try
  {
    p2->placeCity(20);
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  p3->rollDice();
  try
  {
    p3->placeCity(41);
    p3->placeCity(33);
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }

  std::cout << "                 ------------TURN 6 Info:    ------------" << std::endl;
  printTurnData(p1, p2, p3);

  // Turn 7
  std::cout << "      ------------ TURN : 7 ------------" << std::endl; // place towns (same as round 6)
  p1->rollDice();
  p2->rollDice();
  p3->rollDice();
  p1->rollDice();
  try
  {
    p1->placeCity(9);
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  try
  {
    p1->placeRoad(5);
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  p2->rollDice();
  try
  {
    p2->placeSettelment(31);
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  try
  {
    p2->placeCity(20);
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  p3->rollDice();
  try
  {
    p3->placeCity(33);
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }

  std::cout << "                 ------------TURN 7 Info:    ------------" << std::endl;
  printTurnData(p1, p2, p3);

  // Turn 8
  std::cout << "      ------------ TURN : 8 ------------" << std::endl; // trades + develop card
  p1->rollDice();
  p2->rollDice();
  p3->rollDice();
  p1->rollDice();
  try
  {
    p1->trade(p2, "Wood_card", "Grains_card", 1, 1); // p1 tries to trade with p2
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  try
  {
    p1->trade(p2, "Brick_card", "Ore_card", 1, 1); // p1 tries to trade with p2
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  try
  {
    p1->BuyDevCard(); // p1 tries to buy a development card
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  p2->rollDice();
  try
  {
    p2->trade(p3, "Wood_card", "Ore_card", 1, 2); // p2 tries to trade with p3
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  try
  {
    p2->trade(p3, "Brick_card", "Wool_card", 1, 2); // p2 tries to trade with p3
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  try
  {
    p2->BuyDevCard(); // p2 tries to buy a development card
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  p3->rollDice();
  try
  {
    p3->trade(p3, "Wood_card", "Ore_card", 1, 2); // p3 tries to trade with himself - error
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  try
  {
    p3->trade(p1, "Brick_card", "Wool_card", 1, 1); // p3 tries to trade with p1
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  try
  {
    p3->BuyDevCard(); // p3 tries to buy a development card
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }

  std::cout << "                 ------------TURN 8 Info:    ------------" << std::endl;
  printTurnData(p1, p2, p3);

  // Turn 9
  std::cout << "      ------------ TURN : 9 ------------" << std::endl; // trades + develop card
  p1->rollDice();
  p2->rollDice();
  p3->rollDice();
  p1->rollDice();
  try
  {
    p1->trade(p2, "Wood_card", "Grains_card", 1, 1); // p1 tries to trade with p2
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  try
  {
    p1->trade(p2, "Brick_card", "Ore_card", 1, 1); // p1 tries to trade with p2
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  try
  {
    p1->BuyDevCard(); // p1 tries to buy a development card
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  p2->rollDice();
  try
  {
    p2->trade(p3, "Wood_card", "Ore_card", 1, 2); // p2 tries to trade with p3
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  try
  {
    p2->trade(p3, "Brick_card", "Wool_card", 1, 2); // p2 tries to trade with p3
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  try
  {
    p2->BuyDevCard(); // p2 tries to buy a development card
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  p3->rollDice();
  try
  {
    p3->trade(p1, "Brick_card", "Wool_card", 1, 1); // p3 tries to trade with p1
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  try
  {
    p3->BuyDevCard(); // p3 tries to buy a development card
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }

  std::cout << "                 ------------TURN 9 Info:    ------------" << std::endl;
  printTurnData(p1, p2, p3);

  // Turn 10
  std::cout << "      ------------ TURN : 10 ------------" << std::endl; // trades + develop card
  p1->rollDice();
  p2->rollDice();
  p3->rollDice();
  p1->rollDice();
  try
  {
    p1->trade(p2, "Wood_card", "Grains_card", 1, 1); // p1 tries to trade with p2
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  try
  {
    p1->trade(p2, "Brick_card", "Ore_card", 1, 1); // p1 tries to trade with p2
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  try
  {
    p1->BuyDevCard(); // p1 tries to buy a development card
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  p2->rollDice();
  try
  {
    p2->trade(p3, "Wood_card", "Ore_card", 1, 2); // p2 tries to trade with p3
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  try
  {
    p2->trade(p3, "Brick_card", "Wool_card", 1, 2); // p2 tries to trade with p3
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  try
  {
    p2->BuyDevCard(); // p2 tries to buy a development card
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  p3->rollDice();
  try
  {
    p3->trade(p1, "Brick_card", "Wool_card", 1, 1); // p3 tries to trade with p1
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  try
  {
    p3->BuyDevCard(); // p3 tries to buy a development card
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }

  std::cout << "                 ------------TURN 10 Info:    ------------" << std::endl;
  printTurnData(p1, p2, p3);

  // Check the winner at the end of the game
  catan->printWinner();

  // Clean up
  delete catan;

  return 0;
}
