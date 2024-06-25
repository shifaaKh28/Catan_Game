//shifaakhatib28@gmail.com
#include "GameTools.hpp"
#include <stdexcept>

using namespace ariel;


 // Initializes the player to nullptr.
 
GameTools::GameTools() : player(nullptr) {}


GameTools::~GameTools() {}


Road::Road() {}


Road::~Road() {}

/**
 * Constructor for Road that sets the player.
 * @param p Pointer to the player who owns this road.
 */
Road::Road(Player *p) {
   this->player = p;
    }


Player *Road::getPlayer() { 
  return this->player; 
  }


string Road::getType() { 
  return "Road";
   }


/**
 * Constructor for City that sets the player.
 * @param p Pointer to the player who owns this city.
 */
City::City(Player *p) { 
  this->player = p; 
  }


City::City() {}

City::~City() {}


string City::getType() {
   return "City";
   }


Player *City::getPlayer() { 
  return this->player;
   }

/**
 * Constructor for Settlement that sets the player.
 * @param p Pointer to the player who owns this settlement.
 */

Settlement::Settlement(Player *p) { 
  this->player = p; 
  }

Settlement::Settlement() {}

Settlement::~Settlement() {}

string Settlement::getType() { return "Settlement"; }


Player *Settlement::getPlayer() {
    if (this->player != nullptr) {
        return this->player;
    }
    throw logic_error("Error: there is No owner!");
}
