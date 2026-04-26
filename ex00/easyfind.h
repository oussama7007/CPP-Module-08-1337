


#pragma once 


#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>



// // Custom exception class (optional but nice for evaluation)
// class NotFoundException : public std::exception {
// public:
//     const char* what() const throw() {
//         return "Value not found in container";
//     }
// };

// template <typename T>
// typename T::iterator easyfind(T &container, int value) {
//     // std::find returns container.end() if value not found
//     typename T::iterator it = std::find(container.begin(), container.end(), value);// std::find is a standerd algorithm that works m3a ay container cus it use iterators
//     if (it == container.end())
//         throw NotFoundException();
//     return it;
// }



//or 
template <typename T>
typename T::iterator easyfind(T &container, int value) {
    return std::find(container.begin(), container.end(), value); //o mn be3d dik lfunction li 3iytat l easyfind ghadi dir 
                                                                     std::vector<int>::iterator it = easyfind(vec, 42);
                                                                        if (it != vec.end()) {
                                                                                        // found
                                                                            } else {
                                                                            // not found
                                                                                }
}



// mli tsali 7awel traje3 hadchi o recodih caml 3ad push so u make sure 