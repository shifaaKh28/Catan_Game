//shifaakhatib28@gmail.com
#include "ResourceCards.hpp"

using namespace ariel;

Card::Card() : type("") {}


Card::Card(const Card &c) : type(c.type) {}

// Virtual destructor for Card
Card::~Card() {}

string Card::getCardType() const {
    return this->type; // Return the type of the card
}

Wood::Wood() {
    this->type = "Wood_card"; // Set the type to "Wood_card"
}

string Wood::getCardType() const {
    return this->type; // Return the type of the wood card
}

Grains::Grains() {
    this->type = "Grains_card"; // Set the type to "Grains_card"
}

string Grains::getCardType() const {
    return this->type; // Return the type of the grains card
}

Wool::Wool() {
    this->type = "Wool_card"; // Set the type to "Wool_card"
}


string Wool::getCardType() const {
    return this->type; // Return the type of the wool card
}

Ore::Ore() {
    this->type = "Ore_card"; // Set the type to "Ore_card"
}


string Ore::getCardType() const {
    return this->type; // Return the type of the ore card
}


Brick::Brick() {
    this->type = "Brick_card"; // Set the type to "Brick_card"
}

string Brick::getCardType() const {
    return this->type; // Return the type of the brick card
}
