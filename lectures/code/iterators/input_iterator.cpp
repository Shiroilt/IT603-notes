#include <iostream>
#include <vector>
#include <iterator> // Required for these iterators
#include <algorithm>

int main() {
    std::cout << "Enter some numbers (then 'q' to quit): ";

    // 1. Input iterators:
    //    'in_it' reads ints from 'std::cin'
    std::istream_iterator<int> in_it(std::cin);

    //    'eof' is the default "end-of-stream" iterator
    std::istream_iterator<int> eof;

    std::vector<int> myVec;

    // 2. This 'while' loop is what 'std::copy' does
    while (in_it != eof) {
        myVec.push_back(*in_it); // Read the value
        ++in_it;                 // Move to the next value
    }

    std::cout << "You entered: ";
    for(auto n : myVec){
        std::cout << n << " ";
    }
    std::cout << std::endl;
    return 0;
}