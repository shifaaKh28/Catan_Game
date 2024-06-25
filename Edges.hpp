//shifaakhatib28@gmail.com
#ifndef EDGES_HPP
#define EDGES_HPP

#include "GameTools.hpp"
#include <iostream>
#include <vector>

namespace ariel {

    class Vertex;

    /**
     * @brief Represents an edge connecting two vertices in the Catan game board.
     */
    class Edge {
    private:
        int num;                            // Unique identifier for the edge
        std::vector<Vertex *> vertices;     // Vertices connected by this edge
        Road *road;                         // Road built on this edge
        bool isOccupied;                    // Flag indicating if the edge is occupied

    public:
        /**
         * @brief Default constructor for Edge.
         */
        Edge();

        /**
         * @brief Constructor for Edge.
         * @param n Unique identifier for the edge.
         * @param v1 First vertex connected by the edge.
         * @param v2 Second vertex connected by the edge.
         */
        Edge(int n, Vertex *v1, Vertex *v2);

        /**
         * @brief Destructor for Edge.
         */
        ~Edge();

        /**
         * @brief Get the first vertex connected by the edge.
         * @return Pointer to the first vertex.
         */
        Vertex *getV1();

        /**
         * @brief Get the second vertex connected by the edge.
         * @return Pointer to the second vertex.
         */
        Vertex *getV2();

        /**
         * @brief Set the road built on this edge.
         * @param r Pointer to the road to set.
         */
        void setRoad(Road *r);

        /**
         * @brief Get the road built on this edge.
         * @return Pointer to the road built on this edge.
         */
        Road *getRoad();

        /**
         * @brief Get the unique identifier of the edge.
         * @return Unique identifier of the edge.
         */
        int getEdge_id();

        /**
         * @brief Display information about the edge.
         */
        void displayEdge();

        /**
         * @brief Check if the edge is occupied by a road.
         * @return True if the edge is occupied, false otherwise.
         */
        bool getIsOccupied();

        /**
         * @brief Set the occupancy status of the edge.
         * @param b True if the edge is occupied, false otherwise.
         */
        void setIsOccupied(bool b);
    };

} // namespace ariel

#endif // EDGES_HPP
