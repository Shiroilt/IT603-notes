#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <sstream> // Using stringstream for a complete example

int main() {
    // --- Simulating input ---
    // Let's use a stringstream instead of cin to make this
    // example runnable all at once.
    std::stringstream fake_input("10 20 30");
    std::istream_iterator<int> in_it(fake_input);
    std::istream_iterator<int> eof;

    std::vector<int> myVec;
    // Copy from the "input" stream into the vector
    std::copy(in_it, eof, std::back_inserter(myVec));

    std::ostream_iterator<int> out_it(std::cout, " ");
    std::copy(myVec.begin(), myVec.end(), out_it);
    std::cout << std::endl; // For a final newline

    return 0;
}