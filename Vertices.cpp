//shifaakhatib28@gmail.com
#include "Vertices.hpp"
#include "Edges.hpp"
#include "Tile.hpp"

namespace ariel
{
  /**
   * Constructor for Vertex.
   * Initializes the vertex with a unique identifier, and lists of edges and tiles.
   * @param num Unique identifier for the vertex.
   * @param edges List of edges connected to this vertex.
   * @param tiles List of tiles adjacent to this vertex.
   */
  Vertex::Vertex(int num, std::vector<Edge *> edges, std::vector<Tile *> tiles)
      : num(num), city(nullptr), settlement(nullptr), isOccupied(false), edges(edges), tiles(tiles) {}

  Vertex::~Vertex()
  {

    if (settlement != nullptr)
    {
      delete settlement;
    }
    if (city != nullptr)
    {
      delete city;
    }
  };

  int Vertex::getNum()
  {
    return num;
  }

  void Vertex::addEdge(Edge *edge)
  {
    edges.push_back(edge);
  }

  void Vertex::addTile(Tile *tile)
  {
    tiles.push_back(tile);
  }

  void Vertex::displayV()
  {
    cout << "Vertex number: " << this->getNum() - 1;
    cout << " , On Lands: " << endl;
    if (this->tiles[2] != nullptr)
    {
      this->tiles[0]->displayTile();
      this->tiles[1]->displayTile();
      this->tiles[2]->displayTile();
    }
    else if (this->tiles[1] != nullptr)
    {
      this->tiles[0]->displayTile();
      this->tiles[1]->displayTile();
    }
    else
    {
      this->tiles[0]->displayTile();
    }
    cout << endl;
  }

  Tile *Vertex::getT1()
  {
    if (tiles.empty())
    {
      return nullptr;
    }
    return tiles[0];
  }

  Tile *Vertex::getT2()
  {
    if (tiles.size() < 2)
    {
      return nullptr;
    }
    return tiles[1];
  }

  Tile *Vertex::getT3()
  {
    if (tiles.size() < 3)
    {
      return nullptr;
    }
    return tiles[2];
  }

  Edge *Vertex::getE1()
  {
    if (!edges.empty())
    {
      return edges[0];
    }
    return nullptr;
  }

  Edge *Vertex::getE2()
  {
    if (edges.size() < 2)
    {
      return nullptr;
    }
    return edges[1];
  }

  Edge *Vertex::getE3()
  {
    if (edges.size() < 3)
    {
      return nullptr;
    }
    return edges[2];
  }

  bool Vertex::getIsOccupied()
  {
    return isOccupied;
  }

  void Vertex::setIsOccupied(bool b)
  {
    isOccupied = b;
  }

  Settlement *Vertex::getSettlement()
  {
    return settlement;
  }

  void Vertex::setSettlement(Settlement *s)
  {
    settlement = s;
  }

  void Vertex::setCity(City *c)
  {
    city = c;
  }

  City *Vertex::getCity()
  {
    return city;
  }

} // namespace ariel
