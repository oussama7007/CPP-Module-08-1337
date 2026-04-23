
#include <iostream>
#include <vector>
#include <list>         // Add this for the second test
#include "easyfind.h"   // Don't forget your header!

int main() {
    // ==========================================
    // TEST 1: std::vector
    // ==========================================
    std::cout << "--- Testing with std::vector ---" << std::endl;
    std::vector<int> numbers;
    for(int i = 0 ; i < 6; i++) {
        numbers.push_back(i + 10); 
    }

    try {
        
        std::vector<int>::iterator it = easyfind(numbers, 12);
        std::cout << "Success: Found " << *it << " in vector!" << std::endl;

        // Test a failure case
        std::cout << "Searching for 99..." << std::endl;
        easyfind(numbers, 99); 
    } catch (const std::exception& e) {
        std::cerr << "Caught Exception: " << e.what() << std::endl;
    }

    // ==========================================
    // TEST 2: std::list (Proves the template works)
    // ==========================================
    std::cout << "\n--- Testing with std::list ---" << std::endl;
    std::list<int> myList;
    myList.push_back(42);
    myList.push_back(21);
    myList.push_back(84);

    try {
        std::list<int>::iterator list_it = easyfind(myList, 42);
        std::cout << "Success: Found " << *list_it << " in list!" << std::endl;
        
        std::cout << "Searching for 0..." << std::endl;
        easyfind(myList, 0);
    } catch (const std::exception& e) {
        std::cerr << "Caught Exception: " << e.what() << std::endl;
    }

    return 0;
}