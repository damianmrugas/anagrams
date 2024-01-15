/*

C++ program to check if two words are anagrams.

*/

#include <iostream>
#include <string>
#include <algorithm>

bool anagrams(std::string first_word, std::string second_word) {

    if (first_word.length() != second_word.length()) {
        return false;
    };

    std::sort(first_word.begin(), first_word.end());
    std::sort(second_word.begin(), second_word.end());

    if (first_word == second_word) {
        return true;
    };

    return false;

};

int main(void) {

    std::cout << "Welcome to Anagrams!\n";

    std::string first_word;
    std::string second_word;

    std::cout << "Please enter the first word: \n";
    std::cin >> first_word;

    std::cout << "Please enter the second word: \n";
    std::cin >> second_word;

    if (anagrams(first_word, second_word)) {
        std::cout << "Congratulations, " << first_word << " and " << second_word << " are anagrams!\n";
    } else {
        std::cout << "I am sorry, " << first_word << " and " << second_word << " are not anagrams.\n";
    };

    return 0;

};