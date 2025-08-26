// C++ Code Challenges, LinkedIn Learning

// Challenge #1: Checking for Palindromes
// Write a function to check if a string is a palindrome or not.
// Examples: civic, radar, level.

#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>

// is_palindrome()
// Summary: This function receives a string and returns true if the string is a palindrome, false otherwise.
// Arguments:
//           str: The string to analyze.
// Returns: A boolean value. True for palindromes, false otherwise.
// bool is_palindrome(std::string str){
//     int start = 0;
//     int end = str.length()-1;
//     // Write your code here
//     while(start < end) {
//         if(tolower(str.at(start)) != tolower(str.at(end))) {
//             return false;
//         }
//         start++;
//         end--;
//     }

//     return true;
// }

bool is_palindrome(std::string str) {
    std::transform(str.begin(), str.end(), str.begin(), tolower);
    std::string reversed = str;
    std::reverse(reversed.begin(), reversed.end());
    return str == reversed;
}

// Main function
int main(){
    std::string s;
    std::cout << "Enter a string: " << std::flush;
    std::getline(std::cin,s);
    std::cout << "\n\"" << s << (is_palindrome(s) ? "\" is" : "\" is not" ) << " a palindrome.\n\n";
    return 0;
}
