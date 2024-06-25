//shifaakhatib28@gmail.com
#include "Board.hpp"
using namespace ariel;

// Constructor for Board class
Board::Board()
{

  /* Resource types for each tile*/
  string forest("forest");       // for the wood
  string pasture("pasture");     // for the wool
  string hills("hills");         // for the brick
  string mountains("mountains"); // for the Ore
  string fields("fields");       // for the grains
  string dessert("dessert");     // doesn't give anything

  // Creating each tile with specified resource and roll number
  Tile *tt1 = new Tile(forest, 1, vector<City>(), vector<Road>(), vector<Settlement>());

  Tile *tt2 = new Tile(pasture, 2, vector<City>(), vector<Road>(), vector<Settlement>());

  Tile *tt3 = new Tile(fields, 3, vector<City>(), vector<Road>(), vector<Settlement>());

  Tile *tt4 = new Tile(hills, 4, vector<City>(), vector<Road>(), vector<Settlement>());

  Tile *tt5 = new Tile(mountains, 5, vector<City>(), vector<Road>(), vector<Settlement>());

  Tile *tt6 = new Tile(hills, 6, vector<City>(), vector<Road>(), vector<Settlement>());

  Tile *tt7 = new Tile(pasture, 7, vector<City>(), vector<Road>(), vector<Settlement>());

  Tile *tt8 = new Tile(dessert, 8, vector<City>(), vector<Road>(), vector<Settlement>());

  Tile *tt9 = new Tile(forest, 9, vector<City>(), vector<Road>(), vector<Settlement>());

  Tile *tt10 = new Tile(fields, 10, vector<City>(), vector<Road>(), vector<Settlement>());

  Tile *tt11 = new Tile(forest, 11, vector<City>(), vector<Road>(), vector<Settlement>());

  Tile *tt12 = new Tile(fields, 12, vector<City>(), vector<Road>(), vector<Settlement>());

  Tile *tt13 = new Tile(hills, 13, vector<City>(), vector<Road>(), vector<Settlement>());

  Tile *tt14 = new Tile(pasture, 14, vector<City>(), vector<Road>(), vector<Settlement>());

  Tile *tt15 = new Tile(pasture, 15, vector<City>(), vector<Road>(), vector<Settlement>());

  Tile *tt16 = new Tile(mountains, 16, vector<City>(), vector<Road>(), vector<Settlement>());

  Tile *tt17 = new Tile(mountains, 17, vector<City>(), vector<Road>(), vector<Settlement>());

  Tile *tt18 = new Tile(fields, 18, vector<City>(), vector<Road>(), vector<Settlement>());

  Tile *tt19 = new Tile(forest, 19, vector<City>(), vector<Road>(), vector<Settlement>());

  /*Setting unique IDs for each tile*/
  tt1->setTile_id(11);
  tt2->setTile_id(12);
  tt3->setTile_id(9);
  tt4->setTile_id(4);
  tt5->setTile_id(6);
  tt6->setTile_id(5);
  tt7->setTile_id(10);
  tt8->setTile_id(0);
  tt9->setTile_id(3);
  tt10->setTile_id(11);
  tt11->setTile_id(4);
  tt12->setTile_id(8);
  tt13->setTile_id(8);
  tt14->setTile_id(10);
  tt15->setTile_id(9);
  tt16->setTile_id(3);
  tt17->setTile_id(5);
  tt18->setTile_id(2);
  tt19->setTile_id(6);

  // Creating vertices with initializations
  Vertex *v1 = new Vertex(1, vector<Edge *>(), vector<Tile *>());   // Vertex 1 with no initial edges or tiles
  Vertex *v2 = new Vertex(2, vector<Edge *>(), vector<Tile *>());   // Vertex 2 with no initial edges or tiles
  Vertex *v3 = new Vertex(3, vector<Edge *>(), vector<Tile *>());   // Vertex 3 with no initial edges or tiles
  Vertex *v4 = new Vertex(4, vector<Edge *>(), vector<Tile *>());   // Vertex 4 with no initial edges or tiles
  Vertex *v5 = new Vertex(5, vector<Edge *>(), vector<Tile *>());   // Vertex 5 with no initial edges or tiles
  Vertex *v6 = new Vertex(6, vector<Edge *>(), vector<Tile *>());   // Vertex 6 with no initial edges or tiles
  Vertex *v7 = new Vertex(7, vector<Edge *>(), vector<Tile *>());   // Vertex 7 with no initial edges or tiles
  Vertex *v8 = new Vertex(8, vector<Edge *>(), vector<Tile *>());   // Vertex 8 with no initial edges or tiles
  Vertex *v9 = new Vertex(9, vector<Edge *>(), vector<Tile *>());   // Vertex 9 with no initial edges or tiles
  Vertex *v10 = new Vertex(10, vector<Edge *>(), vector<Tile *>()); // Vertex 10 with no initial edges or tiles
  Vertex *v11 = new Vertex(11, vector<Edge *>(), vector<Tile *>()); // Vertex 11 with no initial edges or tiles
  Vertex *v12 = new Vertex(12, vector<Edge *>(), vector<Tile *>()); // Vertex 12 with no initial edges or tiles
  Vertex *v13 = new Vertex(13, vector<Edge *>(), vector<Tile *>()); // Vertex 13 with no initial edges or tiles
  Vertex *v14 = new Vertex(14, vector<Edge *>(), vector<Tile *>()); // Vertex 14 with no initial edges or tiles
  Vertex *v15 = new Vertex(15, vector<Edge *>(), vector<Tile *>()); // Vertex 15 with no initial edges or tiles
  Vertex *v16 = new Vertex(16, vector<Edge *>(), vector<Tile *>()); // Vertex 16 with no initial edges or tiles
  Vertex *v17 = new Vertex(17, vector<Edge *>(), vector<Tile *>()); // Vertex 17 with no initial edges or tiles
  Vertex *v18 = new Vertex(18, vector<Edge *>(), vector<Tile *>()); // Vertex 18 with no initial edges or tiles
  Vertex *v19 = new Vertex(19, vector<Edge *>(), vector<Tile *>()); // Vertex 19 with no initial edges or tiles
  Vertex *v20 = new Vertex(20, vector<Edge *>(), vector<Tile *>()); // Vertex 20 with no initial edges or tiles
  Vertex *v21 = new Vertex(21, vector<Edge *>(), vector<Tile *>()); // Vertex 21 with no initial edges or tiles
  Vertex *v22 = new Vertex(22, vector<Edge *>(), vector<Tile *>()); // Vertex 22 with no initial edges or tiles
  Vertex *v23 = new Vertex(23, vector<Edge *>(), vector<Tile *>()); // Vertex 23 with no initial edges or tiles
  Vertex *v24 = new Vertex(24, vector<Edge *>(), vector<Tile *>()); // Vertex 24 with no initial edges or tiles
  Vertex *v25 = new Vertex(25, vector<Edge *>(), vector<Tile *>()); // Vertex 25 with no initial edges or tiles
  Vertex *v26 = new Vertex(26, vector<Edge *>(), vector<Tile *>()); // Vertex 26 with no initial edges or tiles
  Vertex *v27 = new Vertex(27, vector<Edge *>(), vector<Tile *>()); // Vertex 27 with no initial edges or tiles
  Vertex *v28 = new Vertex(28, vector<Edge *>(), vector<Tile *>()); // Vertex 28 with no initial edges or tiles
  Vertex *v29 = new Vertex(29, vector<Edge *>(), vector<Tile *>()); // Vertex 29 with no initial edges or tiles
  Vertex *v30 = new Vertex(30, vector<Edge *>(), vector<Tile *>()); // Vertex 30 with no initial edges or tiles
  Vertex *v31 = new Vertex(31, vector<Edge *>(), vector<Tile *>()); // Vertex 31 with no initial edges or tiles
  Vertex *v32 = new Vertex(32, vector<Edge *>(), vector<Tile *>()); // Vertex 32 with no initial edges or tiles
  Vertex *v33 = new Vertex(33, vector<Edge *>(), vector<Tile *>()); // Vertex 33 with no initial edges or tiles
  Vertex *v34 = new Vertex(34, vector<Edge *>(), vector<Tile *>()); // Vertex 34 with no initial edges or tiles
  Vertex *v35 = new Vertex(35, vector<Edge *>(), vector<Tile *>()); // Vertex 35 with no initial edges or tiles
  Vertex *v36 = new Vertex(36, vector<Edge *>(), vector<Tile *>()); // Vertex 36 with no initial edges or tiles
  Vertex *v37 = new Vertex(37, vector<Edge *>(), vector<Tile *>()); // Vertex 37 with no initial edges or tiles
  Vertex *v38 = new Vertex(38, vector<Edge *>(), vector<Tile *>()); // Vertex 38 with no initial edges or tiles
  Vertex *v39 = new Vertex(39, vector<Edge *>(), vector<Tile *>()); // Vertex 39 with no initial edges or tiles
  Vertex *v40 = new Vertex(40, vector<Edge *>(), vector<Tile *>()); // Vertex 40 with no initial edges or tiles
  Vertex *v41 = new Vertex(41, vector<Edge *>(), vector<Tile *>()); // Vertex 41 with no initial edges or tiles
  Vertex *v42 = new Vertex(42, vector<Edge *>(), vector<Tile *>()); // Vertex 42 with no initial edges or tiles
  Vertex *v43 = new Vertex(43, vector<Edge *>(), vector<Tile *>()); // Vertex 43 with no initial edges or tiles
  Vertex *v44 = new Vertex(44, vector<Edge *>(), vector<Tile *>()); // Vertex 44 with no initial edges or tiles
  Vertex *v45 = new Vertex(45, vector<Edge *>(), vector<Tile *>()); // Vertex 45 with no initial edges or tiles
  Vertex *v46 = new Vertex(46, vector<Edge *>(), vector<Tile *>()); // Vertex 46 with no initial edges or tiles
  Vertex *v47 = new Vertex(47, vector<Edge *>(), vector<Tile *>()); // Vertex 47 with no initial edges or tiles
  Vertex *v48 = new Vertex(48, vector<Edge *>(), vector<Tile *>()); // Vertex 48 with no initial edges or tiles
  Vertex *v49 = new Vertex(49, vector<Edge *>(), vector<Tile *>()); // Vertex 49 with no initial edges or tiles
  Vertex *v50 = new Vertex(50, vector<Edge *>(), vector<Tile *>()); // Vertex 50 with no initial edges or tiles
  Vertex *v51 = new Vertex(51, vector<Edge *>(), vector<Tile *>()); // Vertex 51 with no initial edges or tiles
  Vertex *v52 = new Vertex(52, vector<Edge *>(), vector<Tile *>()); // Vertex 52 with no initial edges or tiles
  Vertex *v53 = new Vertex(53, vector<Edge *>(), vector<Tile *>()); // Vertex 53 with no initial edges or tiles
  Vertex *v54 = new Vertex(54, vector<Edge *>(), vector<Tile *>()); // Vertex 54 with no initial edges or tiles

  // Creating edges between vertices
  Edge *e1 = new Edge(1, v1, v14);    // Edge 1 connecting Vertex 1 to Vertex 14
  Edge *e2 = new Edge(2, v1, v2);     // Edge 2 connecting Vertex 1 to Vertex 2
  Edge *e3 = new Edge(3, v2, v3);     // Edge 3 connecting Vertex 2 to Vertex 3
  Edge *e4 = new Edge(4, v3, v4);     // Edge 4 connecting Vertex 3 to Vertex 4
  Edge *e5 = new Edge(5, v4, v5);     // Edge 5 connecting Vertex 4 to Vertex 5
  Edge *e6 = new Edge(6, v5, v6);     // Edge 6 connecting Vertex 5 to Vertex 6
  Edge *e7 = new Edge(7, v6, v7);     // Edge 7 connecting Vertex 6 to Vertex 7
  Edge *e8 = new Edge(8, v7, v8);     // Edge 8 connecting Vertex 7 to Vertex 8
  Edge *e9 = new Edge(9, v8, v9);     // Edge 9 connecting Vertex 8 to Vertex 9
  Edge *e10 = new Edge(10, v9, v10);  // Edge 10 connecting Vertex 9 to Vertex 10
  Edge *e11 = new Edge(11, v10, v5);  // Edge 11 connecting Vertex 10 to Vertex 5
  Edge *e12 = new Edge(12, v10, v11); // Edge 12 connecting Vertex 10 to Vertex 11
  Edge *e13 = new Edge(13, v11, v12); // Edge 13 connecting Vertex 11 to Vertex 12
  Edge *e14 = new Edge(14, v12, v3);  // Edge 14 connecting Vertex 12 to Vertex 3
  Edge *e15 = new Edge(15, v12, v13); // Edge 15 connecting Vertex 12 to Vertex 13
  Edge *e16 = new Edge(16, v13, v14); // Edge 16 connecting Vertex 13 to Vertex 14
  Edge *e17 = new Edge(17, v14, v15); // Edge 17 connecting Vertex 14 to Vertex 15
  Edge *e18 = new Edge(18, v16, v16); // Edge 18 (self-loop) at Vertex 16
  Edge *e19 = new Edge(19, v16, v17); // Edge 19 connecting Vertex 16 to Vertex 17
  Edge *e20 = new Edge(20, v17, v18); // Edge 20 connecting Vertex 17 to Vertex 18
  Edge *e21 = new Edge(21, v18, v13); // Edge 21 connecting Vertex 18 to Vertex 13
  Edge *e22 = new Edge(22, v18, v19); // Edge 22 connecting Vertex 18 to Vertex 19
  Edge *e23 = new Edge(23, v19, v20); // Edge 23 connecting Vertex 19 to Vertex 20
  Edge *e24 = new Edge(24, v20, v11); // Edge 24 connecting Vertex 20 to Vertex 11
  Edge *e25 = new Edge(25, v20, v21); // Edge 25 connecting Vertex 20 to Vertex 21
  Edge *e26 = new Edge(26, v21, v22); // Edge 26 connecting Vertex 21 to Vertex 22
  Edge *e27 = new Edge(27, v22, v9);  // Edge 27 connecting Vertex 22 to Vertex 9
  Edge *e28 = new Edge(28, v22, v23); // Edge 28 connecting Vertex 22 to Vertex 23
  Edge *e29 = new Edge(29, v23, v25); // Edge 29 connecting Vertex 23 to Vertex 25
  Edge *e30 = new Edge(30, v25, v24); // Edge 30 connecting Vertex 25 to Vertex 24
  Edge *e31 = new Edge(31, v24, v8);  // Edge 31 connecting Vertex 24 to Vertex 8
  Edge *e32 = new Edge(32, v25, v26); // Edge 32 connecting Vertex 25 to Vertex 26
  Edge *e33 = new Edge(33, v26, v27); // Edge 33 connecting Vertex 26 to Vertex 27
  Edge *e34 = new Edge(34, v27, v28); // Edge 34 connecting Vertex 27 to Vertex 28
  Edge *e35 = new Edge(35, v28, v29); // Edge 35 connecting Vertex 28 to Vertex 29
  Edge *e36 = new Edge(36, v29, v23); // Edge 36 connecting Vertex 29 to Vertex 23
  Edge *e37 = new Edge(37, v29, v30); // Edge 37 connecting Vertex 29 to Vertex 30
  Edge *e38 = new Edge(38, v30, v31); // Edge 38 connecting Vertex 30 to Vertex 31
  Edge *e39 = new Edge(39, v31, v32); // Edge 39 connecting Vertex 31 to Vertex 32
  Edge *e40 = new Edge(40, v31, v32); // Edge 40 connecting Vertex 31 to Vertex 32
  Edge *e41 = new Edge(41, v32, v33); // Edge 41 connecting Vertex 32 to Vertex 33
  Edge *e42 = new Edge(42, v33, v19); // Edge 42 connecting Vertex 33 to Vertex 19
  Edge *e43 = new Edge(43, v33, v34); // Edge 43 connecting Vertex 33 to Vertex 34
  Edge *e44 = new Edge(44, v34, v35); // Edge 44 connecting Vertex 34 to Vertex 35
  Edge *e45 = new Edge(45, v35, v17); // Edge 45 connecting Vertex 35 to Vertex 17
  Edge *e46 = new Edge(46, v35, v36); // Edge 46 connecting Vertex 35 to Vertex 36
  Edge *e47 = new Edge(47, v36, v38); // Edge 47 connecting Vertex 36 to Vertex 38
  Edge *e48 = new Edge(48, v38, v37); // Edge 48 connecting Vertex 38 to Vertex 37
  Edge *e49 = new Edge(49, v37, v16); // Edge 49 connecting Vertex 37 to Vertex 16
  Edge *e50 = new Edge(50, v36, v39); // Edge 50 connecting Vertex 36 to Vertex 39
  Edge *e51 = new Edge(51, v39, v40); // Edge 51 connecting Vertex 39 to Vertex 40
  Edge *e52 = new Edge(52, v40, v41); // Edge 52 connecting Vertex 40 to Vertex 41
  Edge *e53 = new Edge(53, v41, v34); // Edge 53 connecting Vertex 41 to Vertex 34
  Edge *e54 = new Edge(54, v41, v42); // Edge 54 connecting Vertex 41 to Vertex 42
  Edge *e55 = new Edge(55, v42, v43); // Edge 55 connecting Vertex 42 to Vertex 43
  Edge *e56 = new Edge(56, v43, v32); // Edge 56 connecting Vertex 43 to Vertex 32
  Edge *e57 = new Edge(57, v43, v44); // Edge 57 connecting Vertex 43 to Vertex 44
  Edge *e58 = new Edge(58, v44, v45); // Edge 58 connecting Vertex 44 to Vertex 45
  Edge *e59 = new Edge(59, v45, v30); // Edge 59 connecting Vertex 45 to Vertex 30
  Edge *e60 = new Edge(60, v45, v46); // Edge 60 connecting Vertex 45 to Vertex 46
  Edge *e61 = new Edge(61, v46, v47); // Edge 61 connecting Vertex 46 to Vertex 47
  Edge *e62 = new Edge(62, v47, v28); // Edge 62 connecting Vertex 47 to Vertex 28
  Edge *e63 = new Edge(63, v46, v48); // Edge 63 connecting Vertex 46 to Vertex 48
  Edge *e64 = new Edge(64, v48, v49); // Edge 64 connecting Vertex 48 to Vertex 49
  Edge *e65 = new Edge(65, v49, v50); // Edge 65 connecting Vertex 49 to Vertex 50
  Edge *e66 = new Edge(66, v50, v44); // Edge 66 connecting Vertex 50 to Vertex 44
  Edge *e67 = new Edge(67, v50, v51); // Edge 67 connecting Vertex 50 to Vertex 51
  Edge *e68 = new Edge(68, v51, v52); // Edge 68 connecting Vertex 51 to Vertex 52
  Edge *e69 = new Edge(69, v52, v42); // Edge 69 connecting Vertex 52 to Vertex 42
  Edge *e70 = new Edge(70, v52, v53); // Edge 70 connecting Vertex 52 to Vertex 53
  Edge *e71 = new Edge(71, v53, v54); // Edge 69 connecting Vertex 53 to Vertex 54
  Edge *e72 = new Edge(72, v54, v40); // Edge 69 connecting Vertex 54 to Vertex 40

  // Define vertices v1 to v53 and associated edges e1 to e72 and tiles tt1 to tt19

  // Vertex v1
  v1->addEdge(e1);  // Connect v1 to v2 via edge e1
  v1->addEdge(e2);  // Connect v1 to v2 via edge e2
  v1->addTile(tt1); // Assign tile tt1 to v1

  // Vertex v2
  v2->addEdge(e2);  // Connect v2 to v3 via edge e2
  v2->addEdge(e3);  // Connect v2 to v3 via edge e3
  v2->addTile(tt1); // Assign tile tt1 to v2

  // Vertex v3
  v3->addEdge(e3);  // Connect v3 to v4 via edge e3
  v3->addEdge(e4);  // Connect v3 to v4 via edge e4
  v3->addTile(tt1); // Assign tile tt1 to v3
  v3->addTile(tt2); // Assign tile tt2 to v3

  // Vertex v4
  v4->addEdge(e4);  // Connect v4 to v5 via edge e4
  v4->addEdge(e5);  // Connect v4 to v5 via edge e5
  v4->addTile(tt2); // Assign tile tt2 to v4

  // Vertex v5
  v5->addEdge(e5);  // Connect v5 to v6 via edge e5
  v5->addEdge(e6);  // Connect v5 to v6 via edge e6
  v5->addTile(tt2); // Assign tile tt2 to v5
  v5->addTile(tt3); // Assign tile tt3 to v5

  // Vertex v6
  v6->addEdge(e6);  // Connect v6 to v7 via edge e6
  v6->addEdge(e7);  // Connect v6 to v7 via edge e7
  v6->addTile(tt3); // Assign tile tt3 to v6

  // Vertex v7
  v7->addEdge(e7);  // Connect v7 to v8 via edge e7
  v7->addEdge(e8);  // Connect v7 to v8 via edge e8
  v7->addTile(tt3); // Assign tile tt3 to v7

  // Vertex v8
  v8->addEdge(e8);  // Connect v8 to v9 via edge e8
  v8->addEdge(e9);  // Connect v8 to v9 via edge e9
  v8->addEdge(e31); // Connect v8 to v24 via edge e31
  v8->addTile(tt3); // Assign tile tt3 to v8
  v8->addTile(tt7); // Assign tile tt7 to v8

  // Vertex v9
  v9->addEdge(e9);  // Connect v9 to v10 via edge e9
  v9->addEdge(e10); // Connect v9 to v10 via edge e10
  v9->addEdge(e27); // Connect v9 to v22 via edge e27
  v9->addTile(tt3); // Assign tile tt3 to v9
  v9->addTile(tt7); // Assign tile tt7 to v9
  v9->addTile(tt6); // Assign tile tt6 to v9

  // Vertex v10
  v10->addEdge(e11); // Connect v10 to v9 via edge e11
  v10->addEdge(e10); // Connect v10 to v9 via edge e10
  v10->addEdge(e12); // Connect v10 to v11 via edge e12
  v10->addTile(tt2); // Assign tile tt2 to v10
  v10->addTile(tt3); // Assign tile tt3 to v10
  v10->addTile(tt6); // Assign tile tt6 to v10

  // Vertex v11
  v11->addEdge(e12); // Connect v11 to v10 via edge e12
  v11->addEdge(e13); // Connect v11 to v12 via edge e13
  v11->addEdge(e24); // Connect v11 to v20 via edge e24
  v11->addTile(tt2); // Assign tile tt2 to v11
  v11->addTile(tt5); // Assign tile tt5 to v11
  v11->addTile(tt6); // Assign tile tt6 to v11

  // Vertex v12
  v12->addEdge(e13); // Connect v12 to v11 via edge e13
  v12->addEdge(e14); // Connect v12 to v13 via edge e14
  v12->addEdge(e15); // Connect v12 to v13 via edge e15
  v12->addTile(tt1); // Assign tile tt1 to v12
  v12->addTile(tt2); // Assign tile tt2 to v12
  v12->addTile(tt5); // Assign tile tt5 to v12

  // Vertex v13
  v13->addEdge(e15); // Connect v13 to v12 via edge e15
  v13->addEdge(e16); // Connect v13 to v14 via edge e16
  v13->addEdge(e21); // Connect v13 to v19 via edge e21
  v13->addTile(tt1); // Assign tile tt1 to v13
  v13->addTile(tt4); // Assign tile tt4 to v13
  v13->addTile(tt5); // Assign tile tt5 to v13

  // Vertex v14
  v14->addEdge(e1);  // Connect v14 to v1 via edge e1
  v14->addEdge(e16); // Connect v14 to v15 via edge e16
  v14->addEdge(e17); // Connect v14 to v15 via edge e17
  v14->addTile(tt1); // Assign tile tt1 to v14
  v14->addTile(tt4); // Assign tile tt4 to v14

  // Vertex v15
  v15->addEdge(e17); // Connect v15 to v16 via edge e17
  v15->addEdge(e18); // Connect v15 to v16 via edge e18
  v15->addTile(tt4); // Assign tile tt4 to v15

  // Vertex v16
  v16->addEdge(e18); // Connect v16 to v17 via edge e18
  v16->addEdge(e19); // Connect v16 to v17 via edge e19
  v16->addEdge(e49); // Connect v16 to v50 via edge e49
  v16->addTile(tt4); // Assign tile tt4 to v16
  v16->addTile(tt8); // Assign tile tt8 to v16

  // Vertex v17
  v17->addEdge(e20); // Connect v17 to v18 via edge e20
  v17->addEdge(e19); // Connect v17 to v18 via edge e19
  v17->addEdge(e45); // Connect v17 to v46 via edge e45
  v17->addTile(tt4); // Assign tile tt4 to v17
  v17->addTile(tt8); // Assign tile tt8 to v17
  v17->addTile(tt9); // Assign tile tt9 to v17

  // Vertex v18
  v18->addEdge(e20); // Connect v18 to v17 via edge e20
  v18->addEdge(e21); // Connect v18 to v19 via edge e21
  v18->addEdge(e22); // Connect v18 to v19 via edge e22
  v18->addTile(tt4); // Assign tile tt4 to v18
  v18->addTile(tt5); // Assign tile tt5 to v18
  v18->addTile(tt9); // Assign tile tt9 to v18

  // Vertex v19
  v19->addEdge(e22);  // Connect v19 to v18 via edge e22
  v19->addEdge(e23);  // Connect v19 to v20 via edge e23
  v19->addEdge(e42);  // Connect v19 to v43 via edge e42
  v19->addTile(tt5);  // Assign tile tt5 to v19
  v19->addTile(tt10); // Assign tile tt10 to v19
  v19->addTile(tt9);  // Assign tile tt9 to v19

  // Vertex v20
  v20->addEdge(e24);  // Connect v20 to v23 via edge e24
  v20->addEdge(e23);  // Connect v20 to v23 via edge e23
  v20->addEdge(e25);  // Connect v20 to v21 via edge e25
  v20->addTile(tt5);  // Assign tile tt5 to v20
  v20->addTile(tt6);  // Assign tile tt6 to v20
  v20->addTile(tt10); // Assign tile tt10 to v20

  // Vertex v21
  v21->addEdge(e25); // Connect v21 to v20 via edge e25
  v21->addEdge(e26); // Connect v21 to v22 via edge e26
  v21->addEdge(e39); // Connect v21 to v40 via edge e39
  v21->addTile(tt6); // Assign tile tt6 to v21
  // Vertex v21 (continued)
  v21->addTile(tt10); // Assign tile tt10 to v21
  v21->addTile(tt11); // Assign tile tt11 to v21

  // Vertex v22
  v22->addEdge(e27);  // Connect v22 to v23 via edge e27
  v22->addEdge(e28);  // Connect v22 to v23 via edge e28
  v22->addEdge(e26);  // Connect v22 to v21 via edge e26
  v22->addTile(tt6);  // Assign tile tt6 to v22
  v22->addTile(tt7);  // Assign tile tt7 to v22
  v22->addTile(tt11); // Assign tile tt11 to v22

  // Vertex v23
  v23->addEdge(e28);  // Connect v23 to v22 via edge e28
  v23->addEdge(e29);  // Connect v23 to v24 via edge e29
  v23->addEdge(e36);  // Connect v23 to v37 via edge e36
  v23->addTile(tt7);  // Assign tile tt7 to v23
  v23->addTile(tt11); // Assign tile tt11 to v23
  v23->addTile(tt12); // Assign tile tt12 to v23

  // Vertex v24
  v24->addEdge(e31); // Connect v24 to v32 via edge e31
  v24->addEdge(e30); // Connect v24 to v25 via edge e30
  v24->addTile(tt7); // Assign tile tt7 to v24

  // Vertex v25
  v25->addEdge(e29);  // Connect v25 to v24 via edge e29
  v25->addEdge(e30);  // Connect v25 to v24 via edge e30
  v25->addEdge(e32);  // Connect v25 to v26 via edge e32
  v25->addTile(tt7);  // Assign tile tt7 to v25
  v25->addTile(tt12); // Assign tile tt12 to v25

  // Vertex v26
  v26->addEdge(e33);  // Connect v26 to v27 via edge e33
  v26->addEdge(e32);  // Connect v26 to v27 via edge e32
  v26->addTile(tt12); // Assign tile tt12 to v26

  // Vertex v27
  v27->addEdge(e33);  // Connect v27 to v28 via edge e33
  v27->addEdge(e34);  // Connect v27 to v28 via edge e34
  v27->addTile(tt12); // Assign tile tt12 to v27

  // Vertex v28
  v28->addEdge(e34);  // Connect v28 to v29 via edge e34
  v28->addEdge(e35);  // Connect v28 to v29 via edge e35
  v28->addEdge(e62);  // Connect v28 to v63 via edge e62
  v28->addTile(tt6);  // Assign tile tt6 to v28
  v28->addTile(tt12); // Assign tile tt12 to v28

  // Vertex v29
  v29->addEdge(e35);  // Connect v29 to v30 via edge e35
  v29->addEdge(e36);  // Connect v29 to v30 via edge e36
  v29->addEdge(e37);  // Connect v29 to v38 via edge e37
  v29->addTile(tt1);  // Assign tile tt1 to v29
  v29->addTile(tt12); // Assign tile tt12 to v29
  v29->addTile(tt16); // Assign tile tt16 to v29

  // Vertex v30
  v30->addEdge(e37);  // Connect v30 to v31 via edge e37
  v30->addEdge(e38);  // Connect v30 to v31 via edge e38
  v30->addEdge(e59);  // Connect v30 to v60 via edge e59
  v30->addTile(tt11); // Assign tile tt11 to v30
  v30->addTile(tt15); // Assign tile tt15 to v30
  v30->addTile(tt16); // Assign tile tt16 to v30

  // Vertex v31
  v31->addEdge(e40);  // Connect v31 to v32 via edge e40
  v31->addEdge(e38);  // Connect v31 to v32 via edge e38
  v31->addEdge(e39);  // Connect v31 to v40 via edge e39
  v31->addTile(tt10); // Assign tile tt10 to v31
  v31->addTile(tt15); // Assign tile tt15 to v31
  v31->addTile(tt11); // Assign tile tt11 to v31

  // Vertex v32
  v32->addEdge(e40);  // Connect v32 to v33 via edge e40
  v32->addEdge(e41);  // Connect v32 to v33 via edge e41
  v32->addEdge(e56);  // Connect v32 to v57 via edge e56
  v32->addTile(tt10); // Assign tile tt10 to v32
  v32->addTile(tt15); // Assign tile tt15 to v32
  v32->addTile(tt14); // Assign tile tt14 to v32

  // Vertex v33
  v33->addEdge(e41);  // Connect v33 to v34 via edge e41
  v33->addEdge(e42);  // Connect v33 to v34 via edge e42
  v33->addEdge(e43);  // Connect v33 to v44 via edge e43
  v33->addTile(tt10); // Assign tile tt10 to v33
  v33->addTile(tt9);  // Assign tile tt9 to v33
  v33->addTile(tt14); // Assign tile tt14 to v33

  // Vertex v34
  v34->addEdge(e43);  // Connect v34 to v35 via edge e43
  v34->addEdge(e44);  // Connect v34 to v35 via edge e44
  v34->addEdge(e53);  // Connect v34 to v54 via edge e53
  v34->addTile(tt9);  // Assign tile tt9 to v34
  v34->addTile(tt13); // Assign tile tt13 to v34
  v34->addTile(tt14); // Assign tile tt14 to v34

  // Vertex v35
  v35->addEdge(e44);  // Connect v35 to v36 via edge e44
  v35->addEdge(e45);  // Connect v35 to v36 via edge e45
  v35->addEdge(e46);  // Connect v35 to v47 via edge e46
  v35->addTile(tt8);  // Assign tile tt8 to v35
  v35->addTile(tt9);  // Assign tile tt9 to v35
  v35->addTile(tt13); // Assign tile tt13 to v35

  // Vertex v36
  v36->addEdge(e46);  // Connect v36 to v37 via edge e46
  v36->addEdge(e47);  // Connect v36 to v38 via edge e47
  v36->addEdge(e50);  // Connect v36 to v51 via edge e50
  v36->addTile(tt8);  // Assign tile tt8 to v36
  v36->addTile(tt13); // Assign tile tt13 to v36

  // Vertex v37
  v37->addEdge(e49); // Connect v37 to v50 via edge e49
  v37->addEdge(e48); // Connect v37 to v38 via edge e48
  v37->addTile(tt8); // Assign tile tt8 to v37

  // Vertex v38
  v38->addEdge(e47); // Connect v38 to v48 via edge e47
  v38->addEdge(e48); // Connect v38 to v48 via edge e48
  v38->addTile(tt8); // Assign tile tt8 to v38

  // Vertex v39
  v39->addEdge(e50);  // Connect v39 to v51 via edge e50
  v39->addEdge(e51);  // Connect v39 to v52 via edge e51
  v39->addTile(tt13); // Assign tile tt13 to v39

  // Vertex v40
  v40->addEdge(e51);  // Connect v40 to v52 via edge e51
  v40->addEdge(e52);  // Connect v40 to v53 via edge e52
  v40->addEdge(e72);  // Connect v40 to v73 via edge e72
  v40->addTile(tt13); // Assign tile tt13 to v40
  v40->addTile(tt17); // Assign tile tt17 to v40

  // Vertex v41
  v41->addEdge(e52);  // Connect v41 to v53 via edge e52
  v41->addEdge(e53);  // Connect v41 to v54 via edge e53
  v41->addEdge(e54);  // Connect v41 to v55 via edge e54
  v41->addTile(tt13); // Assign tile tt13 to v41
  v41->addTile(tt14); // Assign tile tt14 to v41
  v41->addTile(tt17); // Assign tile tt17 to v41

  // Vertex v42
  v42->addEdge(e54); // Connect v42 to v55 via edge e54
  v42->addEdge(e55); // Connect v42 to v56 via edge e55
  v42->addEdge(e69); // Connect v42 to v70
  // Vertex v42 (continued)
  v42->addTile(tt18); // Assign tile tt18 to v42
  v42->addTile(tt14); // Assign tile tt14 to v42
  v42->addTile(tt17); // Assign tile tt17 to v42

  // Vertex v43
  v43->addEdge(e55);  // Connect v43 to v56 via edge e55
  v43->addEdge(e56);  // Connect v43 to v57 via edge e56
  v43->addEdge(e57);  // Connect v43 to v58 via edge e57
  v43->addTile(tt18); // Assign tile tt18 to v43
  v43->addTile(tt14); // Assign tile tt14 to v43
  v43->addTile(tt15); // Assign tile tt15 to v43

  // Vertex v44
  v44->addEdge(e57);  // Connect v44 to v58 via edge e57
  v44->addEdge(e58);  // Connect v44 to v59 via edge e58
  v44->addEdge(e66);  // Connect v44 to v67 via edge e66
  v44->addTile(tt18); // Assign tile tt18 to v44
  v44->addTile(tt19); // Assign tile tt19 to v44
  v44->addTile(tt15); // Assign tile tt15 to v44

  // Vertex v45
  v45->addEdge(e58);  // Connect v45 to v59 via edge e58
  v45->addEdge(e59);  // Connect v45 to v60 via edge e59
  v45->addEdge(e60);  // Connect v45 to v61 via edge e60
  v45->addTile(tt16); // Assign tile tt16 to v45
  v45->addTile(tt19); // Assign tile tt19 to v45
  v45->addTile(tt15); // Assign tile tt15 to v45

  // Vertex v46
  v46->addEdge(e60);  // Connect v46 to v61 via edge e60
  v46->addEdge(e61);  // Connect v46 to v62 via edge e61
  v46->addEdge(e63);  // Connect v46 to v64 via edge e63
  v46->addTile(tt16); // Assign tile tt16 to v46
  v46->addTile(tt19); // Assign tile tt19 to v46

  // Vertex v47
  v47->addEdge(e62);  // Connect v47 to v63 via edge e62
  v47->addEdge(e61);  // Connect v47 to v62 via edge e61
  v47->addTile(tt16); // Assign tile tt16 to v47

  // Vertex v48
  v48->addEdge(e64);  // Connect v48 to v65 via edge e64
  v48->addEdge(e63);  // Connect v48 to v64 via edge e63
  v48->addTile(tt19); // Assign tile tt19 to v48

  // Vertex v49
  v49->addEdge(e64);  // Connect v49 to v65 via edge e64
  v49->addEdge(e65);  // Connect v49 to v66 via edge e65
  v49->addTile(tt19); // Assign tile tt19 to v49

  // Vertex v50
  v50->addEdge(e65);  // Connect v50 to v66 via edge e65
  v50->addEdge(e66);  // Connect v50 to v67 via edge e66
  v50->addEdge(e67);  // Connect v50 to v68 via edge e67
  v50->addTile(tt19); // Assign tile tt19 to v50
  v50->addTile(tt18); // Assign tile tt18 to v50

  // Vertex v51
  v51->addEdge(e67);  // Connect v51 to v68 via edge e67
  v51->addEdge(e68);  // Connect v51 to v69 via edge e68
  v51->addTile(tt18); // Assign tile tt18 to v51

  // Vertex v52
  v52->addEdge(e68);  // Connect v52 to v69 via edge e68
  v52->addEdge(e69);  // Connect v52 to v70 via edge e69
  v52->addEdge(e70);  // Connect v52 to v71 via edge e70
  v52->addTile(tt17); // Assign tile tt17 to v52
  v52->addTile(tt18); // Assign tile tt18 to v52

  // Vertex v53
  v53->addEdge(e70);  // Connect v53 to v71 via edge e70
  v53->addEdge(e71);  // Connect v53 to v72 via edge e71
  v53->addTile(tt17); // Assign tile tt17 to v53

  /* Vertex pointers to representing the Tiles */
  vector<Vertex *> vTile1 = {v1, v2, v3, v12, v13, v14};
  /*
  - v1: First vertex in Tile 1.
  - v2: Second vertex in Tile 1.
  - v3: Third vertex in Tile 1.
  - v12: Twelfth vertex in Tile 1.
  - v13: Thirteenth vertex in Tile 1.
  - v14: Fourteenth vertex in Tile 1.
  */
  vector<Vertex *> vTile2 = {v3, v4, v5, v12, v11, v10};
  vector<Vertex *> vTile3 = {v5, v6, v7, v8, v9, v10};
  vector<Vertex *> vTile4 = {v13, v14, v15, v16, v17, v18};
  vector<Vertex *> vTile5 = {v11, v12, v13, v18, v19, v20};
  vector<Vertex *> vTile6 = {v9, v10, v11, v20, v21, v22};
  vector<Vertex *> vTile7 = {v8, v9, v3, v22, v23, v25};
  vector<Vertex *> vTile8 = {v16, v17, v35, v36, v38, v37};
  vector<Vertex *> vTile9 = {v17, v18, v19, v33, v34, v35};
  vector<Vertex *> vTile10 = {v19, v20, v21, v31, v32, v33};
  vector<Vertex *> vTile11 = {v21, v22, v23, v29, v30, v31};
  vector<Vertex *> vTile12 = {v23, v25, v26, v27, v28, v29};
  vector<Vertex *> vTile13 = {v34, v35, v36, v39, v40, v41};
  vector<Vertex *> vTile14 = {v32, v33, v34, v41, v42, v43};
  vector<Vertex *> vTile15 = {v30, v31, v32, v43, v44, v45};
  vector<Vertex *> vTile16 = {v28, v29, v30, v45, v46, v47};
  vector<Vertex *> vTile17 = {v40, v41, v42, v52, v53, v54};
  vector<Vertex *> vTile18 = {v42, v43, v44, v50, v51, v52};
  vector<Vertex *> vTile19 = {v44, v45, v46, v48, v49, v50};

  /*Setting vertices for each TileType object*/
  tt1->setVertex(vTile1);
  tt2->setVertex(vTile2);
  tt3->setVertex(vTile3);
  tt4->setVertex(vTile4);
  tt5->setVertex(vTile5);
  tt6->setVertex(vTile6);
  tt7->setVertex(vTile7);
  tt8->setVertex(vTile8);
  tt9->setVertex(vTile9);
  tt10->setVertex(vTile10);
  tt11->setVertex(vTile11);
  tt12->setVertex(vTile12);
  tt13->setVertex(vTile13);
  tt14->setVertex(vTile14);
  tt15->setVertex(vTile15);
  tt16->setVertex(vTile16);
  tt17->setVertex(vTile17);
  tt18->setVertex(vTile18);
  tt19->setVertex(vTile19);

  /* Adding vertices to the 'vertices' vector of the current object*/
  this->vertices.push_back(v1);
  this->vertices.push_back(v2);
  this->vertices.push_back(v3);
  this->vertices.push_back(v4);
  this->vertices.push_back(v5);
  this->vertices.push_back(v6);
  this->vertices.push_back(v7);
  this->vertices.push_back(v8);
  this->vertices.push_back(v9);
  this->vertices.push_back(v10);
  this->vertices.push_back(v11);
  this->vertices.push_back(v12);
  this->vertices.push_back(v13);
  this->vertices.push_back(v14);
  this->vertices.push_back(v15);
  this->vertices.push_back(v16);
  this->vertices.push_back(v17);
  this->vertices.push_back(v18);
  this->vertices.push_back(v19);
  this->vertices.push_back(v20);
  this->vertices.push_back(v21);
  this->vertices.push_back(v22);
  this->vertices.push_back(v23);
  this->vertices.push_back(v24);
  this->vertices.push_back(v25);
  this->vertices.push_back(v26);
  this->vertices.push_back(v27);
  this->vertices.push_back(v28);
  this->vertices.push_back(v29);
  this->vertices.push_back(v30);
  this->vertices.push_back(v31);
  this->vertices.push_back(v32);
  this->vertices.push_back(v33);
  this->vertices.push_back(v34);
  this->vertices.push_back(v35);
  this->vertices.push_back(v36);
  this->vertices.push_back(v37);
  this->vertices.push_back(v38);
  this->vertices.push_back(v39);
  this->vertices.push_back(v40);
  this->vertices.push_back(v41);
  this->vertices.push_back(v42);
  this->vertices.push_back(v43);
  this->vertices.push_back(v44);
  this->vertices.push_back(v45);
  this->vertices.push_back(v46);
  this->vertices.push_back(v47);
  this->vertices.push_back(v48);
  this->vertices.push_back(v49);
  this->vertices.push_back(v50);
  this->vertices.push_back(v51);
  this->vertices.push_back(v52);
  this->vertices.push_back(v53);
  this->vertices.push_back(v54);

  /*Adding edges to the 'edges' vector of the current object*/
  this->edges.push_back(e1);
  this->edges.push_back(e2);
  this->edges.push_back(e3);
  this->edges.push_back(e4);
  this->edges.push_back(e5);
  this->edges.push_back(e6);
  this->edges.push_back(e7);
  this->edges.push_back(e8);
  this->edges.push_back(e9);
  this->edges.push_back(e10);
  this->edges.push_back(e11);
  this->edges.push_back(e12);
  this->edges.push_back(e13);
  this->edges.push_back(e14);
  this->edges.push_back(e15);
  this->edges.push_back(e16);
  this->edges.push_back(e17);
  this->edges.push_back(e18);
  this->edges.push_back(e19);
  this->edges.push_back(e20);
  this->edges.push_back(e21);
  this->edges.push_back(e22);
  this->edges.push_back(e23);
  this->edges.push_back(e24);
  this->edges.push_back(e25);
  this->edges.push_back(e26);
  this->edges.push_back(e27);
  this->edges.push_back(e28);
  this->edges.push_back(e29);
  this->edges.push_back(e30);
  this->edges.push_back(e31);
  this->edges.push_back(e32);
  this->edges.push_back(e33);
  this->edges.push_back(e34);
  this->edges.push_back(e35);
  this->edges.push_back(e36);
  this->edges.push_back(e37);
  this->edges.push_back(e38);
  this->edges.push_back(e39);
  this->edges.push_back(e40);
  this->edges.push_back(e41);
  this->edges.push_back(e42);
  this->edges.push_back(e43);
  this->edges.push_back(e44);
  this->edges.push_back(e45);
  this->edges.push_back(e46);
  this->edges.push_back(e47);
  this->edges.push_back(e48);
  this->edges.push_back(e49);
  this->edges.push_back(e50);
  this->edges.push_back(e51);
  this->edges.push_back(e52);
  this->edges.push_back(e53);
  this->edges.push_back(e54);
  this->edges.push_back(e55);
  this->edges.push_back(e56);
  this->edges.push_back(e57);
  this->edges.push_back(e58);
  this->edges.push_back(e59);
  this->edges.push_back(e60);
  this->edges.push_back(e61);
  this->edges.push_back(e62);
  this->edges.push_back(e63);
  this->edges.push_back(e64);
  this->edges.push_back(e65);
  this->edges.push_back(e66);
  this->edges.push_back(e67);
  this->edges.push_back(e68);
  this->edges.push_back(e69);
  this->edges.push_back(e70);
  this->edges.push_back(e71);
  this->edges.push_back(e72);

  /* Adding each tile to the tiles vector of the board*/
  this->tiles.push_back(tt1);
  this->tiles.push_back(tt2);
  this->tiles.push_back(tt3);
  this->tiles.push_back(tt4);
  this->tiles.push_back(tt5);
  this->tiles.push_back(tt6);
  this->tiles.push_back(tt7);
  this->tiles.push_back(tt8);
  this->tiles.push_back(tt9);
  this->tiles.push_back(tt10);
  this->tiles.push_back(tt11);
  this->tiles.push_back(tt12);
  this->tiles.push_back(tt13);
  this->tiles.push_back(tt14);
  this->tiles.push_back(tt15);
  this->tiles.push_back(tt16);
  this->tiles.push_back(tt17);
  this->tiles.push_back(tt18);
  this->tiles.push_back(tt19);

  // Creating instances of development cards and initializing them
  VictoryPoint *victorypoint = new VictoryPoint();
  YearOfPlenty *yearOfPlenty = new YearOfPlenty();
  Knight *knight = new Knight();
  Monopoly *monopoly = new Monopoly();
  RoadBuilding *roadbuilding = new RoadBuilding();

  // Adding each development card instance and its total count to the 'devCards' map
  devCards[victorypoint] = victorypoint->getTotal();
  devCards[yearOfPlenty] = yearOfPlenty->getTotal();
  devCards[knight] = knight->getTotal();
  devCards[monopoly] = monopoly->getTotal();
  devCards[roadbuilding] = roadbuilding->getTotal();
}

Board::~Board()
{
  // Deleting development cards
  for (auto it = devCards.begin(); it != devCards.end(); ++it)
  {
    delete it->first;
  }

  // Clearing the map after deleting all the cards
  devCards.clear();

  // Deleting vertices
  for (size_t i = 0; i < vertices.size(); ++i)
  {
    delete vertices[i];
  }

  // Deleting edges
  for (size_t i = 0; i < edges.size(); ++i)
  {
    delete edges[i];
  }

  // Deleting tiles
  for (size_t i = 0; i < tiles.size(); ++i)
  {
    delete tiles[i];
  }
}

Vertex *Board::getVertexAt(int i)
{
  if (i >= 0 && i < vertices.size())
  {
    return vertices[i];
  }
  else
  {
    // Handle index out of range error:
    throw std::out_of_range("Vertex index out of range");
  }
}

Edge *Board::getEdgeAt(int i)
{
  if (i >= 0 && i < edges.size())
  {
    return edges[i];
  }
  else
  {
    // Handle index out of range error:
    throw std::out_of_range("Edge index out of range");
  }
}

Tile *Board::getTileAt(int i)
{
  if (i >= 0 && i < tiles.size())
  {
    return tiles[i];
  }
  else
  {
    // Handle index out of range error:
    throw std::out_of_range("Tile index out of range");
  }
}
DevelopmentCard *Board::pickRandomDevCard()
{
  if (devCards.empty())
  {
    return nullptr;
  }

  std::vector<DevelopmentCard *> validCards;

  // Collect pointers to cards with count > 0
  for (auto it = devCards.begin(); it != devCards.end(); ++it)
  {
    if (it->second > 0)
    {
      validCards.push_back(it->first);
    }
  }

  if (validCards.empty())
  {
    return nullptr;
  }

  int ran = rand() % validCards.size();
  DevelopmentCard *pickCard = validCards[ran];

  // Decrement the count of the card
  devCards[pickCard]--;

  // Return a copy of the card have been picked
  return pickCard->copyCard();
}

void ariel::Board::displayBoard()
{
  for (int i = 0; i < 54; i++)
  {
    this->vertices[i]->displayV();
  }
}