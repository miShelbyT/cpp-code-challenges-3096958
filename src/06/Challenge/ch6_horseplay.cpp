// C++ Code Challenges, LinkedIn Learning

// Challenge #6: Horseplay
// Write a function that takes in the location of a knight in a chessboard and returns a vector of strings with the possible locations it might move to.
// The locations are expressed as strings in algebraic notation.
// Print the list on the terminal.
// Don't worry about other pieces on the chessboard.

#include <iostream>
#include <vector>
#include <string>

// knight_moves()
// Summary: This function receives a string with the location of a knight in a chessboard and returns a vector of strings with the possible locations it might move to.
// Arguments:
//           knight: The knight's location.
// Returns: An STL vector of strings with the possible locations to move.
std::vector<std::string> knight_moves(std::string knight){
    std::vector<std::string> moves;

    // Write your code here
    const char& file = knight[0];
    const int& rank = knight[1] - '0';
    std::string move = "";
    // 8 possible moves IF they are on the chessboard
    // chessboard only goes a-h and 1-8
    if(file + 1 < 'i') {// 1/2 moves
        move = file + 1;
        if((rank + 2) < 9)
            moves.push_back(std::string(move) + std::to_string(rank + 2));
        if((rank - 2) > 0)
            moves.push_back(std::string(move) + std::to_string(rank - 2));
        if(file + 2 < 'i') {// 2/1 moves
            move = file + 2;
            if(rank + 1 < 9) 
                moves.push_back(std::string(move) + std::to_string(rank + 1));
            if(rank - 1 > 0)
                moves.push_back(std::string(move) + std::to_string(rank - 1));
        }
    }
    if(file - 1 >= 'a') {// 1/2 moves
        move = file - 1;
        if(rank + 2 < 9)
            moves.push_back(std::string(move) + std::to_string(rank + 2));
        if(rank - 2 > 0)
            moves.push_back(std::string(move) + std::to_string(rank - 2));
        if(file - 2 >= 'a'){
            move = file - 2;
            if(rank + 1 < 9)
                moves.push_back(std::string(move) + std::to_string(rank + 1));
            if(rank - 1 > 0)
                moves.push_back(std::string(move) + std::to_string(rank - 1));
        }
    }
    return moves;
}

// Main function
int main(){
    std::string knight;
    
    std::cout << "Enter the location of the knight: " << std::flush;
    std::cin >> knight;

    std::vector<std::string> the_moves = knight_moves(knight);
    std::cout << std::endl << "Possible moves from " << knight << ": ";

    for (auto element : the_moves)
        std::cout << element << " ";
    std::cout << std::endl << std::endl << std::flush;
    return 0;
}