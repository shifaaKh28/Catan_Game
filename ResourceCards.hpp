//shifaakhatib28@gmail.com
#ifndef RESOURCECARDS_HPP
#define RESOURCECARDS_HPP

#include <iostream>
#include <string>
using namespace std;

namespace ariel {

    /**
     * @brief Base class representing a  resource cards in the game.
     */
    class Card {
    protected:
        string type; ///< The type of the resource card.

    public:
        /**
         * @brief Default constructor for Card.
         */
        Card();

        /**
         * @brief Copy constructor for Card.
         * @param c The Card object to copy.
         */
        Card(const Card &c);

        /**
         * @brief Virtual destructor for Card.
         */
        virtual ~Card();

        /**
         * @brief Get the type of the card.
         * @return A string representing the card type.
         */
        virtual string getCardType() const;
    };

    /**
     * @brief Class representing a wood resource card.
     */
    class Wood : public Card {
    public:
        /**
         * @brief Constructor for Wood.
         */
        Wood();

        /**
         * @brief Get the type of the wood card.
         * @return A string representing the wood card type.
         */
        string getCardType() const override;
    };

    /**
     * @brief Class representing a grains resource card.
     */
    class Grains : public Card {
    public:
        /**
         * @brief Constructor for Grains.
         */
        Grains();

        /**
         * @brief Get the type of the grains card.
         * @return A string representing the grains card type.
         */
        string getCardType() const override;
    };

    /**
     * @brief Class representing a wool resource card.
     */
    class Wool : public Card {
    public:
        /**
         * @brief Constructor for Wool.
         */
        Wool();

        /**
         * @brief Get the type of the wool card.
         * @return A string representing the wool card type.
         */
        string getCardType() const override;
    };

    /**
     * @brief Class representing an ore resource card.
     */
    class Ore : public Card {
    public:
        /**
         * @brief Constructor for Ore.
         */
        Ore();

        /**
         * @brief Get the type of the ore card.
         * @return A string representing the ore card type.
         */
        string getCardType() const override;
    };

    /**
     * @brief Class representing a brick resource card.
     */
    class Brick : public Card {
    public:
        /**
         * @brief Constructor for Brick.
         */
        Brick();

        /**
         * @brief Get the type of the brick card.
         * @return A string representing the brick card type.
         */
        string getCardType() const override;
    };

} // namespace ariel

#endif // RESOURCECARDS_HPP
