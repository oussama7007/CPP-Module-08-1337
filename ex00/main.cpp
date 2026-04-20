

#include "easyfind.h"
#include <list>



void printHeader(const std::string& msg) {
    std::cout << "\n========== " << msg << " ==========" << std::endl;
}
// int main() {
//     // ---------------------------------------------
//     // Test 1: std::vector (most common container)
//     // ---------------------------------------------
//     printHeader("TEST 1: std::vector");
//     std::vector<int> vec;
//     vec.push_back(10);
//     vec.push_back(20);
//     vec.push_back(30);
//     vec.push_back(20);  // duplicate to verify first occurrence

//     try {
//         std::vector<int>::iterator it = easyfind(vec, 20);
//         std::cout << "✓ Found " << *it << " at index "
//                   << std::distance(vec.begin(), it) << std::endl;

//         // Try finding a non-existent value
//         // it = easyfind(vec, 99);
//         std::cout << "✗ This line should not be printed (99 not found)" << std::endl;
//     } catch (const std::exception& e) {
//         std::cout << "✓ Exception caught: " << e.what() << std::endl;
//     }
// }




int main()
{
    
    printHeader("TEST 1: std::vector");
    std::vector<int> vec;
    vec.push_back(11);
    vec.push_back(11);
    vec.push_back(123);
    vec.push_back(12);
    vec.push_back(110);
    try
    {
            std::vector<int>::iterator it = easyfind(vec, 20);
            std::cout << "found" << *it << "at index" << std::distance(vec.begin(), it) << std::endl;
            
    }
    catch(std::exception &e)
    {
        std::cout << "number not found "; 
    }
  
}