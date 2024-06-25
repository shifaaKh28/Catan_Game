//shifaakhatib28@gmail.com
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "Board.hpp"
#include "Player.hpp"
#include "Catan.hpp"
#include <iostream>
#include <set>

using namespace std;
using namespace ariel;

/* Test cases for the Board */

// Test case to check the initialization of the board
TEST_CASE("Test Board Initialization")
{
    Board board;

    // Check that the vertices, edges, and tiles can be accessed without throwing exceptions
    CHECK_NOTHROW(board.getVertexAt(0));
    CHECK_NOTHROW(board.getEdgeAt(0));
    CHECK_NOTHROW(board.getTileAt(0));

    // Check that the accessed vertices, edges, and tiles are not null
    CHECK(board.getVertexAt(0) != nullptr);
    CHECK(board.getEdgeAt(0) != nullptr);
    CHECK(board.getTileAt(0) != nullptr);
}

// Test case to check access to board vertices
TEST_CASE("Test Board Vertex Access")
{
    Board board;

    // Check that a valid vertex can be accessed without throwing an exception
    CHECK(board.getVertexAt(0) != nullptr);
    // Check that accessing an invalid vertex (negative index) throws an out_of_range exception
    CHECK_THROWS_AS(board.getVertexAt(-1), std::out_of_range);
    // Check that accessing an invalid vertex (index out of bounds) throws an out_of_range exception
    CHECK_THROWS_AS(board.getVertexAt(100), std::out_of_range); // Assuming the board has less than 100 vertices
}

// Test case to check access to board edges
TEST_CASE("Test Board Edge Access")
{
    Board board;

    // Check that a valid edge can be accessed without throwing an exception
    CHECK(board.getEdgeAt(0) != nullptr);
    // Check that accessing an invalid edge (negative index) throws an out_of_range exception
    CHECK_THROWS_AS(board.getEdgeAt(-1), std::out_of_range);
    // Check that accessing an invalid edge (index out of bounds) throws an out_of_range exception
    CHECK_THROWS_AS(board.getEdgeAt(100), std::out_of_range); // Assuming the board has less than 100 edges
}

// Test case to check access to board tiles
TEST_CASE("Test Board Tile Access")
{
    Board board;

    // Check that a valid tile can be accessed without throwing an exception
    CHECK(board.getTileAt(0) != nullptr);
    // Check that accessing an invalid tile (negative index) throws an out_of_range exception
    CHECK_THROWS_AS(board.getTileAt(-1), std::out_of_range);
    // Check that accessing an invalid tile (index out of bounds) throws an out_of_range exception
    CHECK_THROWS_AS(board.getTileAt(100), std::out_of_range); // Assuming the board has less than 100 tiles
}

// Comparator function for DevelopmentCard pointers
bool compareDevelopmentCards(DevelopmentCard *a, DevelopmentCard *b)
{
    return a < b;
}

// Test case to check the pickRandomDevCard method of the board
TEST_CASE("Test pickRandomDevCard method")
{
    Board board;
    set<DevelopmentCard *, decltype(&compareDevelopmentCards)> uniqueCards(compareDevelopmentCards);

    // Pick random development cards multiple times and ensure uniqueness
    for (int i = 0; i < 10; ++i)
    {
        DevelopmentCard *dc = board.pickRandomDevCard();
        CHECK(dc != nullptr);
        uniqueCards.insert(dc);
        cout << "Random Development Card picked: " << dc << endl;
    }
    CHECK(uniqueCards.size() > 1); // Check that we have picked different cards
}

// Test case to check the display board functionality
TEST_CASE("Test Display Board")
{
    Player player("Alice");
    Board board;

    // Set board for the player
    player.setBoard(&board);

    // Check if the board has been set correctly
    CHECK(player.getBoard() == &board);
}

/* Test cases for the Player */

// Test case to check player initialization
TEST_CASE("Test Player Initialization")
{
    Player player("Alice");

    // Check that the player is initialized with the correct name and default values
    CHECK(player.getPlayerName() == "Alice");
    CHECK(player.getScore() == 0);
    CHECK(player.getCurrentPlayerTurn() == false);
    CHECK_NOTHROW(player.displayCard());
    CHECK_NOTHROW(player.displayDevelopCard());
}

// Test case to check getPlayerName method
TEST_CASE("Test getPlayerName")
{
    Player player("Alice");
    CHECK(player.getPlayerName() == "Alice");
}

// Test case to check getCurrentPlayerTurn method
TEST_CASE("Test getCurrentPlayerTurn")
{
    Player player("Alice");
    CHECK(player.getCurrentPlayerTurn() == false);
    player.setIsCurrentPlayerTurn(true);
    CHECK(player.getCurrentPlayerTurn() == true);
}

// Test case to check setIsCurrentPlayerTurn method
TEST_CASE("Test setIsCurrentPlayerTurn")
{
    Player player("Alice");
    player.setIsCurrentPlayerTurn(true);
    CHECK(player.getCurrentPlayerTurn() == true);
    player.setIsCurrentPlayerTurn(false);
    CHECK(player.getCurrentPlayerTurn() == false);
}

// Test case to check setNextPlayerTurn method
TEST_CASE("Test setNextPlayerTurn")
{
    Player player1("Alice");
    Player player2("Bob");
    player1.setNextPlayerTurn(&player2);
    CHECK_NOTHROW(player1.endTurn());
    CHECK(player2.getCurrentPlayerTurn() == true);
}

// Test case to check setOtherPlayerTurn method
TEST_CASE("Test setOtherPlayerTurn")
{
    Player player1("Alice");
    Player player2("Bob");
    player1.setOtherPlayerTurn(&player2);
    CHECK_NOTHROW(player1.getOtherPlayerTurn());
}

// Test case to check getScore method
TEST_CASE("Test getScore")
{
    Player player("Alice");
    CHECK(player.getScore() == 0);
}

// Test case to check displayDevelopCard method
TEST_CASE("Test displayDevelopCard")
{
    Player player("Alice");
    CHECK_NOTHROW(player.displayDevelopCard());
}

// Test case to check getDevCard method
TEST_CASE("Test getDevCard")
{
    Player player("Alice");
    CHECK(player.getDevCard() == nullptr);
}

// Test case to check appendResCard method
TEST_CASE("Test appendResCard")
{
    Player player("Alice");
    Card *wood = new Wood();
    player.appendResCard(wood, 3);
    CHECK(player.getTotalCards("Wood_card") == 3);
    delete wood;
}

// Test case to check displayCard method
TEST_CASE("Test displayCard")
{
    Player player("Alice");
    CHECK_NOTHROW(player.displayCard());
}

// Test case to check decreaseResCards method
TEST_CASE("Test decreaseResCards")
{
    Player player("Alice");
    map<string, int> resources;
    resources["Wood_card"] = 3;
    player.decreaseResCards(resources);
    CHECK(player.getTotalCards("Wood_card") == 0);
}

// Test case to check getTotalCards method
TEST_CASE("Test getTotalCards")
{
    Player player("Alice");
    CHECK(player.getTotalCards("Wood_card") == 0);
}

// Test case to check BuyDevCard method
TEST_CASE("Test BuyDevCard")
{
    Player *p1 = new Player("Amit");
    Player *p2 = new Player("shifaa");
    Player *p3 = new Player("Omer");
    Catan *catan = new Catan();
    catan->setPlayers(p1, p2, p3);
    Board *board = new Board;
    p1->setBoard(board);
    p2->setBoard(board);
    p3->setBoard(board);
    catan->StartTheGame();

    CHECK_THROWS(p1->BuyDevCard());

    delete catan;
}

// Test case to check placeRoad method
TEST_CASE("Test placeRoad")
{
    Player *p1 = new Player("Amit");
    Player *p2 = new Player("shifaa");
    Player *p3 = new Player("Omer");
    Catan *catan = new Catan();
    catan->setPlayers(p1, p2, p3);
    Board *board = new Board();
    p1->setBoard(board);
    p2->setBoard(board);
    p3->setBoard(board);
    catan->StartTheGame();

    // Place initial settlements and roads to set up the game state
    p1->placeFirstSettelment(0);
    p1->placeFirstRoad(0);

    p2->placeFirstSettelment(1);
    p2->placeFirstRoad(1);

    p3->placeFirstSettelment(2);
    p3->placeFirstRoad(2);

    // Test placing a road for p1
    CHECK_THROWS_AS(p1->placeRoad(3), std::logic_error);

    delete catan;
}

// Test case to check placeFirstRoad method
TEST_CASE("Test placeFirstRoad")
{
    Player *p1 = new Player("Amit");
    Player *p2 = new Player("shifaa");
    Player *p3 = new Player("Omer");
    Catan *catan = new Catan();
    catan->setPlayers(p1, p2, p3);
    Board *board = new Board();
    p1->setBoard(board);
    p2->setBoard(board);
    p3->setBoard(board);
    catan->StartTheGame();

    CHECK_NOTHROW(p1->placeFirstRoad(0));
    CHECK(p1->getCurrentPlayerTurn() == true);

    delete catan;
}

// Test case to check placeSettelment method
TEST_CASE("Test placeSettelment")
{
    Player *p1 = new Player("Amit");
    Player *p2 = new Player("shifaa");
    Player *p3 = new Player("Omer");
    Catan *catan = new Catan();
    catan->setPlayers(p1, p2, p3);
    Board *board = new Board();
    p1->setBoard(board);
    p2->setBoard(board);
    p3->setBoard(board);

    catan->StartTheGame();

    // Initial setup: place the first settlements and roads
    p1->placeFirstSettelment(0);
    p1->placeFirstRoad(0);

    p2->placeFirstSettelment(1);
    p2->placeFirstRoad(1);

    p3->placeFirstSettelment(2);
    p3->placeFirstRoad(2);

    p3->placeFirstSettelment(3);
    p3->placeFirstRoad(3);

    p2->placeFirstSettelment(4);
    p2->placeFirstRoad(4);

    p1->placeFirstSettelment(5);
    p1->placeFirstRoad(5);

    // Test placing a settlement for p1
    CHECK_THROWS_AS(p1->placeSettelment(6), std::logic_error); // Should throw because it's not connected

    // Ensure it throws an error if placing in an occupied vertex
    CHECK_THROWS_AS(p1->placeSettelment(0), std::logic_error);

    delete catan;
}

// Test case to check placeFirstSettelment method
TEST_CASE("Test placeFirstSettelment")
{
    Player *p1 = new Player("Amit");
    Player *p2 = new Player("shifaa");
    Player *p3 = new Player("Omer");
    Catan *catan = new Catan();
    catan->setPlayers(p1, p2, p3);
    Board *board = new Board();
    p1->setBoard(board);
    p2->setBoard(board);
    p3->setBoard(board);
    catan->StartTheGame();

    CHECK_NOTHROW(p1->placeFirstSettelment(0));
    CHECK(p1->getCurrentPlayerTurn() == true);

    // Ensure placing in the same spot throws an error
    CHECK_THROWS_AS(p2->placeFirstSettelment(0), std::logic_error);

    delete catan;
}

// Test case to check placeCity method
TEST_CASE("Test placeCity")
{
    Player *p1 = new Player("Amit");
    Player *p2 = new Player("shifaa");
    Player *p3 = new Player("Omer");
    Catan *catan = new Catan();
    catan->setPlayers(p1, p2, p3);
    Board *board = new Board();
    p1->setBoard(board);
    p2->setBoard(board);
    p3->setBoard(board);
    catan->StartTheGame();

    // Initial setup: place the first settlements and roads
    p1->placeFirstSettelment(0);
    p1->placeFirstRoad(0);

    p2->placeFirstSettelment(1);
    p2->placeFirstRoad(1);

    p3->placeFirstSettelment(2);
    p3->placeFirstRoad(2);

    // Test placing a city for p1 without sufficient resources
    CHECK_THROWS_AS(p1->placeCity(0), std::logic_error); // Should throw due to insufficient resources

    delete catan;
}

// Test case to check trade method
TEST_CASE("Test trade")
{
    Player *p1 = new Player("Amit");
    Player *p2 = new Player("shifaa");
    Player *p3 = new Player("Omer");
    Catan *catan = new Catan();
    catan->setPlayers(p1, p2, p3);
    Board *board = new Board;
    p1->setBoard(board);
    p2->setBoard(board);
    p3->setBoard(board);
    catan->StartTheGame();
    CHECK_THROWS(p1->trade(p2, "Wood_Card", "Grains_Card", 1, 1));
    delete catan;
}

// Test case to check rollDice method
TEST_CASE("Test rollDice")
{
    Player *p1 = new Player("Amit");
    Player *p2 = new Player("shifaa");
    Player *p3 = new Player("Omer");
    Catan *catan = new Catan();
    catan->setPlayers(p1, p2, p3);
    Board *board = new Board();
    p1->setBoard(board);
    p2->setBoard(board);
    p3->setBoard(board);
    catan->StartTheGame();

    // Test dice roll for p1
    int diceResult1 = p1->rollDice();
    CHECK(2 <= diceResult1);
    CHECK(diceResult1 <= 12);

    // p1 should not be able to roll dice again immediately
    CHECK_THROWS_AS(p1->rollDice(), std::logic_error);

    // Test dice roll for p2
    int diceResult2 = p2->rollDice();
    CHECK(2 <= diceResult2);
    CHECK(diceResult2 <= 12);

    // p2 should not be able to roll dice again immediately
    CHECK_THROWS_AS(p2->rollDice(), std::logic_error);

    // Test dice roll for p3
    int diceResult3 = p3->rollDice();
    CHECK(2 <= diceResult3);
    CHECK(diceResult3 <= 12);

    // p3 should not be able to roll dice again immediately
    CHECK_THROWS_AS(p3->rollDice(), std::logic_error);

    // Check that the turn cycles back to p1
    CHECK(p1->getCurrentPlayerTurn() == true);
    CHECK(p2->getCurrentPlayerTurn() == false);
    CHECK(p3->getCurrentPlayerTurn() == false);

    // Ensure p1 can roll dice again after the cycle
    diceResult1 = p1->rollDice();
    CHECK(2 <= diceResult1);
    CHECK(diceResult1 <= 12);
    // Cleanup
    delete catan;
}

/* Test cases for the Catan class */

// Test case to check Catan game initialization
TEST_CASE("Test Catan Initialization")
{
    Catan catan;
    CHECK(catan.getBoard() == nullptr);
    CHECK(catan.getPlayers().size() == 0);
}

// Test case to check setPlayers method
TEST_CASE("Test setPlayers")
{
    Player *p1 = new Player("Amit");
    Player *p2 = new Player("shifaa");
    Player *p3 = new Player("Alice");
    Catan *catan = new Catan();
    catan->setPlayers(p1, p2, p3);
    CHECK(catan->getPlayers()[0] == p1);
    CHECK(catan->getPlayers()[1] == p2);
    CHECK(catan->getPlayers()[2] == p3);
    delete catan;
}

// Test case to check getBoard method
TEST_CASE("Test getBoard")
{
    Catan catan;
    CHECK(catan.getBoard() == nullptr);
}

// Test case to check printWinner method
TEST_CASE("Test printWinner")
{
    // Initialize players and the Catan game
    Player *p1 = new Player("Amit");
    Player *p2 = new Player("shifaa");
    Player *p3 = new Player("Dana");
    Catan *catan = new Catan();
    catan->setPlayers(p1, p2, p3);

    // Test when no player has 10 points
    p1->setScore(5);
    p2->setScore(6);
    p3->setScore(7);
    CHECK(catan->printWinner() == 0);

    // Test when one player reaches 10 points
    p1->setScore(10);
    CHECK(catan->printWinner() == 1);

    // Test when another player reaches 10 points
    p1->setScore(9); // Reset player1 score below 10
    p2->setScore(10);
    CHECK(catan->printWinner() == 1);

    // Test when multiple players reach 10 points simultaneously
    p1->setScore(10);
    p3->setScore(10);
    CHECK(catan->printWinner() == 1);

    // Clean up
    delete catan;
}
