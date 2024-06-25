//shifaakhatib28@gmail.com
#include "Player.hpp"

using namespace std;
using namespace ariel;

Player::Player() {}

Player::~Player() // destructor
{
  // Iterate through each element in the devCards map
  for (auto i = devCards.begin(); i != devCards.end(); ++i)
  {
    // Delete the dynamically allocated DevelopmentCard object
    delete i->first;
  }
}

// Initialize playerName with the provided name and resourceCards map with initial counts set to zero
Player::Player(string name) : playerName(name), resourceCards({{"Wood_card", 0}, {"Grains_card", 0}, {"Wool_card", 0}, {"Ore_card", 0}, {"Brick_card", 0}})
{
  // Initialize devCards map with instances of various DevelopmentCard types
  devCards[new Monopoly()] = 0;     // Create and add a Monopoly card instance
  devCards[new VictoryPoint()] = 0; // Create and add a VictoryPoint card instance
  devCards[new YearOfPlenty()] = 0; // Create and add a YearOfPlenty card instance
  devCards[new RoadBuilding()] = 0; // Create and add a RoadBuilding card instance
  devCards[new Knight()] = 0;       // Create and add a Knight card instance
}

string Player::getPlayerName()
{
  return this->playerName;
}

bool ariel::Player::getCurrentPlayerTurn()
{
  return this->isMyTurn;
}

void Player::setIsCurrentPlayerTurn(bool b)
{
  this->isMyTurn = b;
}

void ariel::Player::setNextPlayerTurn(Player *p)
{
  this->_nextPlayerTurn = p;
}

void ariel::Player::setOtherPlayerTurn(Player *p)
{
  if (p != nullptr)
  {
    this->otherPlayersTurns.push_back(p);
  }
}

int ariel::Player::getScore()
{
  return this->playerScore;
}

DevelopmentCard *ariel::Player::getDevCard()
{
  // Iterate over the devCards map
  for (auto it = devCards.begin(); it != devCards.end(); ++it)
  {
    // Check if the count of the current development card is greater than zero
    if (it->second > 0)
    {
      return it->first; // Return the pointer to the development card (key) if count is > 0
    }
  }
  return nullptr; // Return nullptr if no development card with count > 0 is found
}

void ariel::Player::BuyDevCard()
{
    // Check if the player has enough resources to buy a Development Card
    if (getTotalCards("Ore_card") < 1 || getTotalCards("Grains_card") < 1 || getTotalCards("Wool_card") < 1)
    {
        throw std::logic_error("Error: Insufficient resources to buy a Development Card !");
    }

    // Pick a random Development Card from the game board
    DevelopmentCard *card = this->board->pickRandomDevCard();

    // Add the picked card to the player's collection of Development Cards
    this->devCards[card]++;

    // Print a message confirming the purchase of the Development Card
    cout << this->getPlayerName() << " buys a Development Card , The card is: " << card->getType() << endl;
}


void ariel::Player::displayDevelopCard()
{
  // Print player's name and header for development cards
  cout << "Player " << this->getPlayerName() << ". Development Cards: ";

  // Iterate over each entry in the devCards map using a regular for loop
  for (auto it = devCards.begin(); it != devCards.end(); ++it)
  {
    // Extract the development card pointer and the count from the map entry
    DevelopmentCard *card = it->first;
    int amount = it->second;

    // Display the card type and total count if the player has at least one card
    if (amount != 0)
    {
      cout << card->getType() << ", Total: " << amount << endl;
    }
  }
}

void ariel::Player::appendResCard(Card *c, int k)
{
  // Iterate through each resource card type in resourceCards map using a regular for loop
  for (auto it = resourceCards.begin(); it != resourceCards.end(); ++it)
  {
    // Check if the current card type matches the type of the provided card (c)
    if (it->first == c->getCardType())
    {
      // Increase the count of the matching card type
      it->second += k;

      // Print a message indicating the player received one card of the specified type
      cout << "Player: " << this->getPlayerName() << "added" << k << "  to card of : " << c->getCardType() << endl;

      // Exit the method after processing
      return;
    }
  }
}

void ariel::Player::displayCard()
{
  // Print player's name
  cout << "Player: " << this->getPlayerName();

  // Regular for loop iterating over resourceCards map
  for (auto it = resourceCards.begin(); it != resourceCards.end(); ++it)
  {
    // Check if the current resource card count is not zero
    if (it->second != 0)
    {
      // Print card type and its amount
      cout << ". Cards: " << it->first << " Amount: " << it->second;
    }
  }
  // Print a new line at the end of output
  cout << endl;
}

void Player::decreaseResCards(map<string, int> &cards)
{
  int total = 0; // Calculate the total number of cards

  for (auto it = cards.begin(); it != cards.end(); ++it)
  {
    total += it->second;
  }

  // Check if total cards exceed the threshold for discarding
  if (total > 7)
  {
    // Calculate the limit amounts of cards after discarding half
    int limit = total / 2;

    // Collect all card types with positive counts
    vector<string> types_of_cards;
    for (auto it = cards.begin(); it != cards.end(); ++it)
    {
      if (it->second > 0)
      {
        types_of_cards.push_back(it->first);
      }
    }

    // Randomly select cards to discard until the target total is reached
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, types_of_cards.size() - 1);

    while (total > limit)
    {
      // Generate a random index to select a card type
      int index = dis(gen);
      string cardType = types_of_cards[index];

      // Check if the selected card type has cards to discard
      if (cards[cardType] > 0)
      {
        // Discard one card of the selected type
        cards[cardType]--;
        total--;

        // Remove the card type from the list if all cards are discarded
        if (cards[cardType] == 0)
        {
          types_of_cards.erase(types_of_cards.begin() + index);

          // Break the loop if there are no more card types left
          if (types_of_cards.empty())
          {
            break;
          }
        }
      }
    }
  }
}

int ariel::Player::getTotalCards(string card_type)
{
  return this->resourceCards[card_type];
}

void ariel::Player::placeRoad(int roadNum)
{
  Edge *edge = this->board->getEdgeAt(roadNum);

  // Check if the edge is already occupied
  if (edge->getIsOccupied())
  {
    throw std::logic_error("Error: This road has been Occupied!");
  }

  // Check if the player has sufficient resources to place a road
  if (this->resourceCards["Wood_card"] < 1 || this->resourceCards["Brick_card"] < 1)
  {
    throw std::logic_error("Error: Cannot place Road because you don't have the required resource cards");
  }

  // Deduct the required resources (Wood_card and Brick_card) from the player's resource cards
  this->resourceCards["Wood_card"]--;
  this->resourceCards["Brick_card"]--;

  Vertex *v1 = edge->getV1();
  Vertex *v2 = edge->getV2();

  // Lambda function to check if an adjacent road owned by the player exists and place the road
  auto checkAndPlaceRoad = [&](Edge *e)
  {
    if (e != nullptr && e->getIsOccupied())
    {
      if (e->getRoad()->getPlayer() == this)
      {
        edge->setIsOccupied(true);
        Road *r = new Road(this);
        edge->setRoad(r);
        cout << this->getPlayerName() << " Place Road at edge number: " << edge->getEdge_id() << endl;
        return true;
      }
    }
    return false;
  };

  // Check adjacent edges (E1, E2, E3) of both vertices (v1 and v2) for an owned road
  if (checkAndPlaceRoad(v1->getE1()) || checkAndPlaceRoad(v1->getE2()) || checkAndPlaceRoad(v1->getE3()) ||
      checkAndPlaceRoad(v2->getE1()) || checkAndPlaceRoad(v2->getE2()) || checkAndPlaceRoad(v2->getE3()))
  {
    return;
  }

  // If no adjacent road is found that can be replaced, throw an error
  throw std::logic_error("Error: Cannot place Road in this edge");
}

void ariel::Player::placeFirstRoad(int roadNum)
{
  Edge *edge = this->board->getEdgeAt(roadNum);

  // Check if the edge is not already occupied
  if (!edge->getIsOccupied())
  {
    // Mark the edge as occupied
    edge->setIsOccupied(true);

    // Create a new Road object and associate it with the edge
    Road *r = new Road(this);
    edge->setRoad(r);

    // Print a message indicating the placement of the road
    cout << this->getPlayerName() << " Place Road at edge number: " << edge->getEdge_id() << endl;
  }
  else
  {
    // Throw an error if the edge is already occupied
    throw std::logic_error("Error: this edge has been  occupied !");
  }
}

void ariel::Player::placeSettelment(int vertexNum)
{
  Vertex *vertex = this->board->getVertexAt(vertexNum);

  // Check if the vertex is already occupied
  if (vertex->getIsOccupied())
  {
    throw std::invalid_argument("Error: this vertex has been occupied!");
  }

  for (auto i : resourceCards)
  {
    if (i.second < 1)
    {
      throw std::logic_error("there is No resource cards!");
    }
    i.second--;
  }

  // Check if there's an adjacent road owned by the player
  bool hasAdjacentRoad = false;
  auto checkAndPlaceSettlement = [&](Edge *edge)
  {
    if (edge != nullptr && edge->getIsOccupied() && edge->getRoad()->getPlayer() == this)
    {
      Vertex *otherVertex = (edge->getV1() == vertex) ? edge->getV2() : edge->getV1();
      if (!otherVertex->getIsOccupied())
      {
        vertex->setSettlement(new Settlement(this));
        cout << this->getPlayerName() << " Placed Settlement at vertex number: " << vertex->getNum() << endl;
        this->playerScore++;
        hasAdjacentRoad = true;
      }
    }
  };

  // Iterate over the edges and check each one
  std::vector<Edge *> edges = {vertex->getE1(), vertex->getE2(), vertex->getE3()};
  for (Edge *edge : edges)
  {
    if (!hasAdjacentRoad)
    {
      checkAndPlaceSettlement(edge);
    }
  }

  // If no adjacent road found, throw an error
  if (!hasAdjacentRoad)
  {
    throw std::logic_error("Error: failed place settlement because there is No road connected to this vertex");
  }
}

void Player::placeFirstSettelment(int vertexNum)
{
  // Check if the vertex is not already occupied
  Vertex *targetVertex = this->board->getVertexAt(vertexNum);
  if (!targetVertex->getIsOccupied())
  {
    // Inform about placing the first settlement
    cout << this->getPlayerName() << " placed the first settlement at vertex number: " << targetVertex->getNum() << endl;

    // Mark the vertex as occupied and set the settlement
    targetVertex->setIsOccupied(true);
    Settlement *newSettlement = new Settlement(this);
    targetVertex->setSettlement(newSettlement);

    // Inform about adding settlement to tiles associated with the vertex
    cout << "Added settlement to tile number: " << targetVertex->getT1()->getNum() << endl;
    if (targetVertex->getT2() != nullptr)
    {
      cout << "Added settlement to tile number: " << targetVertex->getT2()->getNum() << endl;
    }
    if (targetVertex->getT3() != nullptr)
    {
      cout << "Added settlement to tile number: " << targetVertex->getT3()->getNum() << endl;
    }

    // Distribute resource cards to the player after placing the settlement

    // Retrieve and process card from Tile 1
    Tile *t1 = targetVertex->getT1();
    if (t1)
    {
      Card *c1 = t1->getResCard();
      if (c1) // Check if card exists on Tile 1
      {
        // Create a copy of the card and add it to player's resources
        Card *newCard1 = new Card(*c1);
        this->appendResCard(newCard1, 1);
        delete newCard1; // Clean up by deleting the temporary card copy
      }
      else
      {
        cerr << "Error: card1 is Null!" << endl; // Output error message if card1 is null
      }
    }

    // Retrieve and process card from Tile 2
    Tile *t2 = targetVertex->getT2();
    if (t2)
    {
      Card *c2 = t2->getResCard();
      if (c2) // Check if card exists on Tile 2
      {
        // Create a copy of the card and add it to player's resources
        Card *newCard2 = new Card(*c2);
        this->appendResCard(newCard2, 1);
        delete newCard2; // Clean up by deleting the temporary card copy
      }
      else
      {
        cerr << "Error: card2 is Null!" << endl; // Output error message if card2 is null
      }
    }

    // Retrieve and process card from Tile 3
    Tile *t3 = targetVertex->getT3();
    if (t3)
    {
      Card *c3 = t3->getResCard();
      if (c3) // Check if card exists on Tile 3
      {
        // Create a copy of the card and add it to player's resources
        Card *newCard3 = new Card(*c3);
        this->appendResCard(newCard3, 1);
        delete newCard3; // Clean up by deleting the temporary card copy
      }
      else
      {
        cerr << "Error: card3 is Null!" << endl; // Output error message if card3 is null
      }
    }

    // Increase the player's score for placing the settlement
    this->playerScore++;
  }
  else
  {
    // Throw an error if the vertex is already occupied
    throw std::logic_error("Error: this vertex has been occupied!");
  }
}

void ariel::Player::placeCity(int vertexNum)
{
  if (this->board->getVertexAt(vertexNum)->getCity() != nullptr)
  {
    __throw_invalid_argument("Error!: this city has been occupied!");
    return;
  }
  if (this->board->getVertexAt(vertexNum)->getSettlement() == nullptr)
  {
    __throw_invalid_argument("Error:there is no settelment on this vertex");
    return;
  }
  if (this->board->getVertexAt(vertexNum)->getSettlement()->getPlayer() == this)
  {
    if (this->getTotalCards("Grains_card") < 2 || this->getTotalCards("Ore_card") < 3)
    {
      __throw_logic_error("Error: we dont have resource card to place the city!");
      return;
    }
    this->resourceCards["Ore_card"] -= 3;
    this->resourceCards["Grains_card"] -= 2;
    City *c = new City(this);
    this->board->getVertexAt(vertexNum)->setCity(c);
    this->playerScore++;
    cout << this->getPlayerName() << " Placed city at vertex : " << this->board->getVertexAt(vertexNum)->getNum() << endl;
  }
  else
  {
    __throw_logic_error("Error: this vertex have settlment!");
  }
}

void ariel::Player::trade(Player *player, string give, string take, int totalToGive, int totalToTake)
{
  if (give == take)
  {
    cout << "Error: cannot trade the with same resource type" << endl;
    return;
  }

  // Check if the trade amounts are valid.
  if (totalToGive <= 0 || totalToTake <= 0)
  {
    cout << "Error: invalid trade amount." << endl;
    return;
  }

  if (player == this)
  {
    __throw_invalid_argument("Error: cannot trade resource card with yourself !");
  }
  if (this->getTotalCards(give) >= totalToGive && player->getTotalCards(take) >= totalToTake)
  {
    this->resourceCards[give] -= totalToGive;
    this->resourceCards[take] += totalToTake;
    player->resourceCards[take] -= totalToTake;
    player->resourceCards[give] += totalToGive;
    cout << this->getPlayerName() << " Trades: give " << totalToGive << " " << give << " To " << player->getPlayerName() << ", and get " << totalToTake << " " << take << endl;
  }
  else
  {
    __throw_invalid_argument("Error: trade couldn't be completed because there is no sufficient resources.");
  }
}

/**
 * @brief Distributes resource cards to players based on the dice roll result.
 *
 * @param diceSum The sum of the two dice rolls.
 */
void Player::distributeResources(int diceSum)
{
  // Iterate through all tiles to find the ones matching the dice sum
  for (int tileIndex = 0; tileIndex < 19; ++tileIndex)
  {
    Tile *tile = board->getTileAt(tileIndex);
    if (tile->getTile_id() == diceSum)
    {
      // Iterate through all vertices of the tile
      for (int vertexIndex = 0; vertexIndex < 6; ++vertexIndex)
      {
        Vertex *vertex = tile->getVertex()[vertexIndex];
        if (vertex && vertex->getIsOccupied())
        {
          // Check settlements and cities owned by each player
          if (vertex->getSettlement())
          {
            Player *owner = vertex->getSettlement()->getPlayer();
            if (owner == this)
              appendResCard(tile->getResCard(), 1);
            else if (find(otherPlayersTurns.begin(), otherPlayersTurns.end(), owner) != otherPlayersTurns.end())
              owner->appendResCard(tile->getResCard(), 1);
          }
          if (vertex->getCity())
          {
            Player *owner = vertex->getCity()->getPlayer();
            if (owner == this)
              appendResCard(tile->getResCard(), 2);
            else if (find(otherPlayersTurns.begin(), otherPlayersTurns.end(), owner) != otherPlayersTurns.end())
              owner->appendResCard(tile->getResCard(), 2);
          }
        }
      }
    }
  }
}

int Player::rollDice()
{
  // Check if it's the current player's turn
  if (!getCurrentPlayerTurn())
  {
    throw std::logic_error("Error: its Not your turn !");
  }

  // Roll two six-sided dice
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<> dis(1, 6);
  int res1 = dis(gen);
  int res2 = dis(gen);
  int rullSum = res1 + res2;

  // Print the result of the dice roll
  cout << getPlayerName() << " dice roll result is : " << rullSum << endl;

  // Handle the special case when the dice sum is 7
  if (rullSum == 7)
  {
    cout << "the playeres have more than 7 cards should discard half of their cards !" << endl;

    // Calculate total cards of the current player
    int totalCards = 0;
    for (const auto &card : resourceCards)
    {
      if (card.second > 0)
      {
        totalCards += card.second;
      }
    }

    // Check if the current player needs to discard cards (more than 7)
    if (totalCards > 7)
    {
      // Discard half of the cards (round down)
      decreaseResCards(resourceCards);
      cout << getPlayerName() << " discarded half of their cards." << endl;
    }

    // Check other players' cards and discard if necessary
    for (Player *player : otherPlayersTurns)
    {
      int otherTotalCards = 0;
      for (const auto &card : player->resourceCards)
      {
        if (card.second > 0)
        {
          otherTotalCards += card.second;
        }
      }

      // Check if the other player needs to discard cards (more than 7)
      if (otherTotalCards > 7)
      {
        // Discard half of the cards (round down)
        decreaseResCards(player->resourceCards);
        cout << player->getPlayerName() << " discarded half of their cards." << endl;
      }
    }
  }

  // Distribute resource cards based on settlements and cities on the board
  distributeResources(rullSum);

  // End the current player's turn and switch to the next player's turn
  endTurn();

  return rullSum;
}

void Player::endTurn()
{
  isMyTurn = false;
  _nextPlayerTurn->setIsCurrentPlayerTurn(true);
}

void Player::setBoard(Board *b)
{
  this->board = b;
}

void ariel::Player::setScore(int score)
{
  this->playerScore = score;
}

vector<Player *> ariel::Player::getOtherPlayerTurn() const
{
  return this->otherPlayersTurns;
}

Board *Player::getBoard() const
{
  return this->board;
}