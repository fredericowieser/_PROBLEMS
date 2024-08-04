// Is Unique:
// Implement an algorithm to determine if a string has all unique characters.
// What if you cannot use additional data structures?

#include <iostream>
#include <string>
#include <unordered_set>

bool Solution1(const std::string& str) {
    std::unordered_set<char> set;
    for (char c : str) {
        if (set.find(c) != set.end()) {
            return false;
        }
        set.insert(c);
    }
    return true;
}

int main() {
    std::string str = "abcde";

    std::cout << Solution1(str) << std::endl;

    return 0;
}