//shifaakhatib28@gmail.com
#ifndef DEVELOPMENT_CARD_HPP
#define DEVELOPMENT_CARD_HPP

#include <string>

namespace ariel {

/**
 * @brief Abstract base class for Development Cards in the game.
 * 
 * This class defines the interface for various types of development cards
 * that can be used in the game. Each card has a method to get its total
 * quantity, a method to create a deep copy of the card, and a method to
 * retrieve the type of the card.
 */
class DevelopmentCard {
public:
  /**
   * @brief Default constructor.
   */
  DevelopmentCard();

  /**
   * @brief Virtual destructor.
   */
  virtual ~DevelopmentCard();

  /**
   * @brief Pure virtual method to get the total quantity of the card.
   * 
   * @return int The total quantity of the card.
   */
  virtual int getTotal() const = 0;

  /**
   * @brief Pure virtual method to create a deep copy of the card.
   * 
   * This method creates and returns a new instance of the same type
   * as the calling object, with all attributes copied.
   * 
   * @return DevelopmentCard* A pointer to a newly created deep copy of the card.
   */
  virtual DevelopmentCard *copyCard() const = 0;

  /**
   * @brief Pure virtual method to get the type of the card.
   * 
   * @return std::string The type of the card as a string.
   */
  virtual std::string getType() const = 0;
};

/**
 * @brief Class representing a Victory Point development card.
 * 
 * This card grants victory points when played.
 */
class VictoryPoint : public DevelopmentCard {
public:
  /**
   * @brief Default constructor for Victory Point card.
   */
  VictoryPoint();

  /**
   * @brief Method to get the total quantity of the Victory Point card.
   * 
   * @return int The total quantity of the Victory Point card.
   */
  int getTotal() const override;

  /**
   * @brief Method to create a deep copy of the Victory Point card.
   * 
   * @return DevelopmentCard* A pointer to a newly created deep copy of the Victory Point card.
   */
  DevelopmentCard *copyCard() const override;

  /**
   * @brief Method to get the type of the Victory Point card.
   * 
   * @return std::string The type of the Victory Point card ("victory point card").
   */
  std::string getType() const override;
};

/**
 * @brief Class representing a Year of Plenty development card.
 * 
 * This card allows the player to choose two resource cards of their choice
 * from the bank.
 */
class YearOfPlenty : public DevelopmentCard {
public:
  /**
   * @brief Default constructor for Year of Plenty card.
   */
  YearOfPlenty();

  /**
   * @brief Method to get the total quantity of the Year of Plenty card.
   * 
   * @return int The total quantity of the Year of Plenty card.
   */
  int getTotal() const override;

  /**
   * @brief Method to create a deep copy of the Year of Plenty card.
   * 
   * @return DevelopmentCard* A pointer to a newly created deep copy of the Year of Plenty card.
   */
  DevelopmentCard *copyCard() const override;

  /**
   * @brief Method to get the type of the Year of Plenty card.
   * 
   * @return std::string The type of the Year of Plenty card ("year of plenty card").
   */
  std::string getType() const override;
};

/**
 * @brief Class representing a Knight development card.
 * 
 * This card allows the player to move the robber and steal a resource card
 * from another player's settlement or city.
 */
class Knight : public DevelopmentCard {
public:
  /**
   * @brief Default constructor for Knight card.
   */
  Knight();

  /**
   * @brief Method to get the total quantity of the Knight card.
   * 
   * @return int The total quantity of the Knight card.
   */
  int getTotal() const override;

  /**
   * @brief Method to create a deep copy of the Knight card.
   * 
   * @return DevelopmentCard* A pointer to a newly created deep copy of the Knight card.
   */
  DevelopmentCard *copyCard() const override;

  /**
   * @brief Method to get the type of the Knight card.
   * 
   * @return std::string The type of the Knight card ("knight card").
   */
  std::string getType() const override;
};

/**
 * @brief Class representing a Monopoly development card.
 * 
 * This card allows the player to demand all resource cards of a specific type
 * from all other players.
 */
class Monopoly : public DevelopmentCard {
public:
  /**
   * @brief Default constructor for Monopoly card.
   */
  Monopoly();

  /**
   * @brief Method to get the total quantity of the Monopoly card.
   * 
   * @return int The total quantity of the Monopoly card.
   */
  int getTotal() const override;

  /**
   * @brief Method to create a deep copy of the Monopoly card.
   * 
   * @return DevelopmentCard* A pointer to a newly created deep copy of the Monopoly card.
   */
  DevelopmentCard *copyCard() const override;

  /**
   * @brief Method to get the type of the Monopoly card.
   * 
   * @return std::string The type of the Monopoly card ("monopoly card").
   */
  std::string getType() const override;
};

/**
 * @brief Class representing a Road Building development card.
 * 
 * This card allows the player to build two roads immediately, without 
 * the requirement of having the necessary resources.
 */
class RoadBuilding : public DevelopmentCard {
public:
  /**
   * @brief Default constructor for Road Building card.
   */
  RoadBuilding();

  /**
   * @brief Method to get the total quantity of the Road Building card.
   * 
   * @return int The total quantity of the Road Building card.
   */
  int getTotal() const override;

  /**
   * @brief Method to create a deep copy of the Road Building card.
   * 
   * @return DevelopmentCard* A pointer to a newly created deep copy of the Road Building card.
   */
  DevelopmentCard *copyCard() const override;

  /**
   * @brief Method to get the type of the Road Building card.
   * 
   * @return std::string The type of the Road Building card ("road building card").
   */
  std::string getType() const override;
};

} // namespace ariel

#endif // DEVELOPMENT_CARD_HPP
