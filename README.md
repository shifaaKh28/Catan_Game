# Catan Game Project

## Overview

This project simulates the popular board game "Catan". The game involves players building settlements, roads, and cities, collecting and trading resources, and earning development cards. The player who first reaches 10 points wins the game.

The project is implemented in C++ and includes several classes to represent the game components and logic, including `Board`, `Player`, `Catan`, and various types of cards (`DevelopmentCard`, `ResourceCard`, etc.). The game can be played through a command-line interface.

## Project Structure

- **Board.hpp/cpp**: Represents the game board, including vertices, edges, and tiles.
- **Player.hpp/cpp**: Represents a player in the game, including their resources, development cards, and actions.
- **Catan.hpp/cpp**: Manages the overall game, including setup, turns, and determining the winner.
- **Card.hpp/cpp**: Base class for different types of cards in the game.
- **DevelopmentCard.hpp/cpp**: Represents development cards that players can purchase.
- **ResourceCard.hpp/cpp**: Represents resource cards that players collect.
- **demo.cpp**: Demonstrates gameplay with a series of turns, including initial placements, rolling dice, building roads and settlements, trading, and buying development cards.
- **test.cpp**: Contains test cases for the various classes and methods using the `doctest` framework.

## Getting Started

### Prerequisites

To compile and run this project, you need:
- A C++ compiler (e.g., g++)
- The `doctest` testing framework


## Game Rules and Flow:

The game consists of several turns where players take actions such as rolling dice, placing roads and settlements, trading resources, and buying development cards. The game proceeds as follows:

1. **Initialization**:
   - Players are prompted to enter their names.
   - The board and players are initialized.
   - Initial placements of settlements and roads are made.

2. **Turns**:
   - Each turn, players roll dice to collect resources.
   - Players can build roads, settlements, and cities, buy development cards, and trade resources.
   - Each action checks for valid conditions (e.g., enough resources, valid placement) and handles exceptions appropriately.

3. **Winning**:
   - The game checks for a winner at the end of each turn. The first player to reach 10 points wins the game.

## Example Gameplay

The `demo.cpp` file provides an example gameplay sequence with 10 turns, showcasing the various actions players can take. The game prints the state of each player, including their resources and points, at the end of each turn.

## Testing

The `test.cpp` file includes comprehensive tests for the `Board`, `Player`, and `Catan` classes. The tests cover initialization, actions, and edge cases to ensure the game logic is correct and robust.

