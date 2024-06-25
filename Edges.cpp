//shifaakhatib28@gmail.com
#include "Edges.hpp"

namespace ariel
{

  // Default constructor for Edge
  Edge::Edge() {}

  Edge::Edge(int n, Vertex *v1, Vertex *v2) : road(nullptr)
  {
    this->num = n;                // Initialize unique identifier
    this->vertices.push_back(v1); // Add first vertex to vector
    this->vertices.push_back(v2); // Add second vertex to vector
    this->isOccupied = false;     // Initialize occupancy flag
  }

  Edge::~Edge()
  {
    delete road; // Delete the road object
  }

  Vertex *Edge::getV1()
  {
    return this->vertices[0]; // Return pointer to the first vertex
  }

  Vertex *Edge::getV2()
  {
    return this->vertices[1]; // Return pointer to the second vertex
  }

  Road *Edge::getRoad()
  {
    return this->road; // Return pointer to the road
  }

  void Edge::setRoad(Road *a)
  {
    this->road = a;          // Set the road pointer
    this->isOccupied = true; // Update occupancy flag to true
  }

  int Edge::getEdge_id()
  {
    return this->num; // Return the unique identifier
  }

  bool Edge::getIsOccupied()
  {
    return this->isOccupied; // Return the occupancy flag
  }

  void Edge::setIsOccupied(bool b)
  {
    this->isOccupied = b; // Set the occupancy flag
  }

  void Edge::displayEdge()
  {
    std::cout << "Edge number is: " << this->getEdge_id() << " is occupied? " << this->getIsOccupied() << std::endl;
  }

} // namespace ariel
