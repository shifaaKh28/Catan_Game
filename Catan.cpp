//shifaakhatib28@gmail.com
#include "Catan.hpp"
#include <iostream>
using namespace std;
using namespace ariel;

Catan::Catan() : players(), board(nullptr)
{
}

Catan::~Catan()
{
  // Delete players
  for (Player *player : players)
  {
    delete player;
  }
  // Delete board
  delete board;
}

void Catan::setPlayers(Player *p1, Player *p2, Player *p3)
{
  if (p1 && p2 && p3)
  {
    this->players.push_back(p1);
    this->players.push_back(p2);
    this->players.push_back(p3);
  }
  else
  {
    cout << "Error: One or more player pointers are null." << endl;
  }
}

Board *Catan::getBoard()
{
  return this->board;
}

void Catan::StartTheGame()
{
  cout << "=============================================" << endl;
  cout << "           Hello to Catan Game!" << endl;
  cout << "=============================================" << endl;

  cout << " player 1: " << this->players[0]->getPlayerName() << endl;
  cout << " player 2: " << this->players[1]->getPlayerName() << endl;
  cout << " player 3: " << this->players[2]->getPlayerName() << endl;
  cout << "=============================================" << endl;

  cout << "                                                   " << endl;
  this->players[0]->setNextPlayerTurn(players[1]);
  this->players[1]->setNextPlayerTurn(players[2]);
  this->players[2]->setNextPlayerTurn(players[0]);

  this->players[0]->setOtherPlayerTurn(players[1]);
  this->players[0]->setOtherPlayerTurn(players[2]);
  this->players[1]->setOtherPlayerTurn(players[2]);
  this->players[1]->setOtherPlayerTurn(players[0]);
  this->players[2]->setOtherPlayerTurn(players[0]);
  this->players[2]->setOtherPlayerTurn(players[1]);

  this->players[0]->setIsCurrentPlayerTurn(true);
}

int Catan::printWinner() {
    for (Player *p : this->players) {
        if (p->getScore() == 10) {
            cout << "=============================================" << endl;
            cout << "               GAME OVER" << endl;
            cout << "        WINNER: " << p->getPlayerName() << endl;
            cout << "=============================================" << endl;
            return 1;
        }
    }
    cout << "=============================================" << endl;
    cout << "        No winner yet, keep playing!" << endl;
    cout << "=============================================" << endl;
    return 0;
}


bool Catan::isGameEnded()
{
  // Iterate over all players
  for (auto &player : players)
  {
    // Check if the current player has achieved 10 points
    if (player->getScore() >= 10)
    {
      return true;
    }
  }
  // No player has achieved 10 points, return false
  return false;
}
vector<Player *> ariel::Catan::getPlayers()
{
  return this->players;
}
Player* Catan::getCurrentPlayer() {
    return players[currentPlayerIndex];
}

void Catan::nextPlayer() {
    currentPlayerIndex = (currentPlayerIndex + 1) % players.size();
}
