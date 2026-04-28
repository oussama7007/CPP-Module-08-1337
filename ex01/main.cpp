








// #include <iostream>
// #include <vector>
// #include <cstdlib> // For rand()
// #include <ctime>   // For time()
// #include "Span.h"

// int main()
// {
//     // ========================================================
//     // TEST 1: The Subject PDF Example
//     // ========================================================
//     std::cout << "--- TEST 1: Basic Subject Test ---" << std::endl;
//     try {
//         Span sp = Span(5);
//         sp.addNumber(6);
//         sp.addNumber(3);
//         sp.addNumber(17);
//         sp.addNumber(9);
//         sp.addNumber(11);
        
//         std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl; // Expected: 2
//         std::cout << "Longest Span: " << sp.longestSpan() << std::endl;   // Expected: 14
//     } catch (const std::exception& e) {
//         std::cerr << "Error: " << e.what() << std::endl;
//     }

//     // ========================================================
//     // TEST 2: Exception Handling (Overfilling & Too Few Elements)
//     // ========================================================
//     std::cout << "\n--- TEST 2: Error Handling ---" << std::endl;
//     try {
//         Span tiny(1);
//         tiny.addNumber(100);
//         std::cout << "Trying to add to a full Span..." << std::endl;
//         tiny.addNumber(200); // This SHOULD throw an exception!
//     } catch (const std::exception& e) {
//         std::cerr << "Caught expected error: " << e.what() << std::endl;
//     }

//     try {
//         Span tiny(1);
//         tiny.addNumber(100);
//         std::cout << "Trying to find span of 1 number..." << std::endl;
//         tiny.shortestSpan(); // This SHOULD throw an exception!
//     } catch (const std::exception& e) {
//         std::cerr << "Caught expected error: " << e.what() << std::endl;
//     }

//     // ========================================================
//     // TEST 3: The 10,000 Number Stress Test
//     // ========================================================
//     std::cout << "\n--- TEST 3: 10,000 Numbers ---" << std::endl;
//     try {
//         Span massive(10000);
        
//         // Seed the random number generator
//         std::srand(std::time(0)); 
        
//         // Let's add 10,000 random numbers one by one
//         for (int i = 0; i < 10000; ++i) {
//             massive.addNumber(std::rand()); 
//         }
        
//         std::cout << "Successfully added 10,000 numbers!" << std::endl;
//         std::cout << "Massive Shortest Span: " << massive.shortestSpan() << std::endl;
//         std::cout << "Massive Longest Span: " << massive.longestSpan() << std::endl;
//     } catch (const std::exception& e) {
//         std::cerr << "Error: " << e.what() << std::endl;
//     }

//     return 0;
// }



#include <vector>
#include <list>
#include <iostream>


int main()
{
    std::vector<std::string> arr;
    arr.push_back("sdfsdF");
    arr.push_back("sdf");
    std::cout << arr.size() << std::endl;
}