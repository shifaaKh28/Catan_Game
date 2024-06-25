//shifaakhatib28@gmail.com
#include "DevelopmentCard.hpp"
#include <string>

using namespace ariel;

DevelopmentCard::DevelopmentCard() {}// Constructor for DevelopmentCard

DevelopmentCard::~DevelopmentCard() {}// Destructor for DevelopmentCard

/*****************************************************/
VictoryPoint::VictoryPoint() {}

int VictoryPoint::getTotal() const { 
  return 5; 
  }

DevelopmentCard *VictoryPoint::copyCard() const { 
  return new VictoryPoint(*this);
   }


std::string VictoryPoint::getType() const { 
  return "VictoryPoint_card";
   }

/*****************************************************/

YearOfPlenty::YearOfPlenty() {}

int YearOfPlenty::getTotal() const { 
return 2; 
}

DevelopmentCard *YearOfPlenty::copyCard() const { 
  return new YearOfPlenty(*this);
   }

std::string YearOfPlenty::getType() const { 
  return "YearOfPlenty_card"; 
  }

/*****************************************************/

Knight::Knight() {}

int Knight::getTotal() const { 
  return 14; 
  }


DevelopmentCard *Knight::copyCard() const {
   return new Knight(*this); 
   }

std::string Knight::getType() const { 
  return "Knight_card"; 
  }

/*****************************************************/

Monopoly::Monopoly() {}


int Monopoly::getTotal() const {
   return 2;
   }


DevelopmentCard *Monopoly::copyCard() const { 
  return new Monopoly(*this);
   }


std::string Monopoly::getType() const { 
  return "Monopoly_card"; 
  }


/*****************************************************/
RoadBuilding::RoadBuilding() {}

int RoadBuilding::getTotal() const { 
  return 2; 
  }

DevelopmentCard *RoadBuilding::copyCard() const {
   return new RoadBuilding(*this);
    }


std::string RoadBuilding::getType() const {
   return "RoadBuilding_card";
    }


