Chess Piece Movements Simulation
Overview
This project simulates the movements of chess pieces — Rook, Bishop, Queen, and Knight — using recursive functions and nested loops in C. It demonstrates advanced programming techniques such as recursion and complex control flow to model piece movements on a chessboard.

Features
Recursive implementation for the Rook, Bishop, and Queen movements.

Nested loops to simulate the Knight’s "L"-shaped movement.

Clear console output showing step-by-step directions (Up, Down, Left, Right).

Well-documented code explaining recursion and loop logic.

Simple input configuration via variables in the code (no user input needed).

Project Structure
main.c — Contains all the movement functions and the main execution flow.

Clear separation of piece movement logic into individual functions.

How to Run
Make sure you have a C compiler installed (e.g., gcc).

Compile the code:
gcc main.c -o chess_moves
Run the executable:
./chess_moves
Observe the output in the terminal.

Code Explanation
Rook, Bishop, and Queen: Use recursion to print each move until the specified number of moves is reached.

Bishop: Uses recursion combined with nested loops to simulate diagonal movement.

Knight: Uses nested loops without recursion to simulate the fixed "L" movement.

The main function initializes move counts and calls each piece's movement function in order.
