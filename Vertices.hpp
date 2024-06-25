//shifaakhatib28@gmail.com
#ifndef VERTICES_HPP
#define VERTICES_HPP

#include "GameTools.hpp"
#include <iostream>
#include <vector>

namespace ariel
{
    class Edge;
    class Tile;

    /**
     * @brief Represents a vertex in the game.
     * A vertex can be occupied by a settlement or a city and can be connected to edges and adjacent to tiles.
     */
    class Vertex
    {
    private:
        int num;                        ///< Unique identifier for the vertex.
        City *city;                     ///< Pointer to the city occupying the vertex, if any.
        Settlement *settlement;         ///< Pointer to the settlement occupying the vertex, if any.
        bool isOccupied;                ///< Indicates whether the vertex is occupied by a settlement or city.
        std::vector<Edge *> edges;      ///< List of edges connected to this vertex.
        std::vector<Tile *> tiles;      ///< List of tiles adjacent to this vertex.

    public:
        /**
         * @brief Constructor for Vertex.
         * @param num Unique identifier for the vertex.
         * @param edges List of edges connected to this vertex.
         * @param tiles List of tiles adjacent to this vertex.
         */
        Vertex(int num, std::vector<Edge *> edges, std::vector<Tile *> tiles);

        /**
         * @brief Destructor for Vertex.
         */
        ~Vertex();

        /**
         * @brief Get the unique identifier for the vertex.
         * @return The unique identifier.
         */
        int getNum();

        /**
         * @brief Add an edge to the vertex.
         * @param edge Pointer to the edge to be added.
         */
        void addEdge(Edge *edge);

        /**
         * @brief Add a tile to the vertex.
         * @param tile Pointer to the tile to be added.
         */
        void addTile(Tile *tile);

        /**
         * @brief Display information about the vertex.
         */
        void displayV();

        /**
         * @brief Get the first tile adjacent to the vertex.
         * @return Pointer to the first adjacent tile.
         */
        Tile *getT1();

        /**
         * @brief Get the second tile adjacent to the vertex.
         * @return Pointer to the second adjacent tile.
         */
        Tile *getT2();

        /**
         * @brief Get the third tile adjacent to the vertex.
         * @return Pointer to the third adjacent tile.
         */
        Tile *getT3();

        /**
         * @brief Get the first edge connected to the vertex.
         * @return Pointer to the first connected edge.
         */
        Edge *getE1();

        /**
         * @brief Get the second edge connected to the vertex.
         * @return Pointer to the second connected edge.
         */
        Edge *getE2();

        /**
         * @brief Get the third edge connected to the vertex.
         * @return Pointer to the third connected edge.
         */
        Edge *getE3();

        /**
         * @brief Check if the vertex is occupied by a settlement or city.
         * @return True if the vertex is occupied, false otherwise.
         */
        bool getIsOccupied();

        /**
         * @brief Set the occupancy status of the vertex.
         * @param b True if the vertex is occupied, false otherwise.
         */
        void setIsOccupied(bool b);

        /**
         * @brief Get the settlement occupying the vertex.
         * @return Pointer to the settlement.
         */
        Settlement *getSettlement();

        /**
         * @brief Set the settlement occupying the vertex.
         * @param s Pointer to the settlement.
         */
        void setSettlement(Settlement *s);

        /**
         * @brief Set the city occupying the vertex.
         * @param c Pointer to the city.
         */
        void setCity(City *c);

        /**
         * @brief Get the city occupying the vertex.
         * @return Pointer to the city.
         */
        City *getCity();
    };

} // namespace ariel

#endif // VERTICES_HPP
