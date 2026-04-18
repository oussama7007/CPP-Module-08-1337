

#include <iostream>
#include <vector>
#include <algorithm>

// template <typename T>
// void    test(T container)
// {
//     typename T::iterator it = container.back();
//     std::cout << *it << std::endl;
// }


// int main()
// {
//     std::vector<int> v = {1,2,3};
//     test(v);
// }


#include <iostream>
#include <vector>
#include <algorithm>   // for std::find

int main() {
    // 1. Create a vector with some numbers
    std::vector<int> numbers;
    numbers.push_back(5);
    numbers.push_back(12);
    numbers.push_back(8);
    numbers.push_back(12);  // duplicate on purpose
    numbers.push_back(3);

    // 2. Try to find the value 12
    std::vector<int>::iterator it = std::find(numbers.begin(), numbers.end(), 12);

    // 3. Check the result
    if (it != numbers.end()) {
        std::cout << "Value " << *it << " found!" << std::endl;
        std::cout << "It is at index: " << std::distance(numbers.begin(), it) << std::endl;
    } else {
        std::cout << "Value not found." << std::endl;
    }

    // 4. Try to find a value that doesn't exist
    it = std::find(numbers.begin(), numbers.end(), 99);
    if (it == numbers.end()) {
        std::cout << "99 was not found (correct)." << std::endl;
    }

    return 0;
}