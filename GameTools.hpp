//shifaakhatib28@gmail.com
#ifndef GameTools_HPP
#define GameTools_HPP

#include <string>
#include <vector>
using namespace std;

namespace ariel
{
    class Player;

    /**
     * @brief Abstract base class for game tools.
     */
    class GameTools
    {
    public:
        Player *player;  ///< Pointer to the player who owns this tool.
        string toolType; ///< Type of the tool (e.g., "Road", "City", "Settlement").

        /**
         * @brief Pure virtual function to get the type of the tool.
         * @return The type of the tool as a string.
         */
        virtual string getType() = 0;

        /**
         * @brief Default constructor.
         */
        GameTools();

        /**
         * @brief Virtual destructor.
         */
        virtual ~GameTools();
    };

    /**
     * @brief Class representing a road in the game.
     */
    class Road : public GameTools
    {
    public:
        /**
         * @brief Default constructor.
         */
        Road();

        /**
         * @brief Constructor with a player parameter.
         * @param p Pointer to the player who owns this road.
         */
        Road(Player *p);

        /**
         * @brief Destructor.
         */
        ~Road();

        /**
         * @brief Get the player who owns this road.
         * @return Pointer to the player.
         */
        Player *getPlayer();

        /**
         * @brief Get the type of the tool.
         * @return The type of the tool as a string.
         */
        string getType();
    };

    /**
     * @brief Class representing a city in the game.
     */
    class City : public GameTools
    {
    public:
        /**
         * @brief Default constructor.
         */
        City();

        /**
         * @brief Constructor with a player parameter.
         * @param p Pointer to the player who owns this city.
         */
        City(Player *p);

        /**
         * @brief Destructor.
         */
        ~City();

        /**
         * @brief Get the type of the tool.
         * @return The type of the tool as a string.
         */
        string getType();

        /**
         * @brief Get the player who owns this city.
         * @return Pointer to the player.
         */
        Player *getPlayer();
    };

    /**
     * @brief Class representing a settlement in the game.
     */
    class Settlement : public GameTools
    {
    public:
        /**
         * @brief Default constructor.
         */
        Settlement();

        /**
         * @brief Constructor with a player parameter.
         * @param p Pointer to the player who owns this settlement.
         */
        Settlement(Player *p);

        /**
         * @brief Destructor.
         */
        ~Settlement();

        /**
         * @brief Get the type of the tool.
         * @return The type of the tool as a string.
         */
        string getType();

        /**
         * @brief Get the player who owns this settlement.
         * @return Pointer to the player.
         */
        Player *getPlayer();
    };
} // namespace ariel

#endif
