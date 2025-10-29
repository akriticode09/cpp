#include <iostream>
#include <vector>

int main() {
    // Create a vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Iterate using a for loop with iterators
    std::cout << "Using for loop with iterators:" << std::endl;
    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Iterate using a range-based for loop
    std::cout << "Using range-based for loop:" << std::endl;
    for (const int& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Iterate using the std::for_each algorithm
    std::cout << "Using std::for_each algorithm:" << std::endl;
    std::for_each(numbers.begin(), numbers.end(), [](int num) {
        std::cout << num << " ";
    });
    std::cout << std::endl;

    return 0;
}

//Explanation:

//For loop with iterators:

//This method uses explicit iterators to traverse the vector.
//std::vector<int>::iterator it is used to declare the iterator.
//it != numbers.end() checks if the iterator has reached the end of the vector.
//++it increments the iterator to point to the next element.

//Range-based for loop:

//This is a more modern and concise way to iterate over a vector.
//const int& num ensures that each element is accessed by reference, avoiding unnecessary copies.

//std::for_each algorithm:

//This method uses the std::for_each algorithm from the <algorithm> header.
//A lambda function [](int num) is used to specify the operation to be performed on each element.

//Feel free to use any of these methods based on your preference and the specific requirements of your code!//