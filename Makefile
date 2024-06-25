#shifaakhatib28@gmail.com
CXX = g++
CXXFLAGS = -Wall -g -Wno-builtin-declaration-mismatch

.PHONY: all clean demo test tidy

SRC = Board.cpp Catan.cpp Tile.cpp Player.cpp GameTools.cpp ResourceCards.cpp DevelopmentCard.cpp Vertices.cpp Edges.cpp
OBJ = $(SRC:.cpp=.o)

TEST_SRC = test.cpp
TEST_OBJ = $(TEST_SRC:.cpp=.o)

all: demo test

demo: $(OBJ) demo.o
	$(CXX) $(CXXFLAGS) $^ -o demo

test: $(OBJ) $(TEST_OBJ)
	$(CXX) $(CXXFLAGS) $^ -o test

tidy:
	clang-tidy $(SRC) demo.cpp $(TEST_SRC) -checks=bugprone-*,g++-analyzer-*,cppcoreguidelines-*,performance-*,portability-*,readability-*,-cppcoreguidelines-pro-bounds-pointer-arithmetic,-cppcoreguidelines-owning-memory --warnings-as-errors=-* --

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f *.o demo test
