


#pragma once 


#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>




// class NotFoundException : public std::exception {
// public:
//     const char* what() const throw() {
//         return "Value not found in container";
//     }
// };

// template <typename T>
// typename T::iterator easyfind(T &container, int value) {
    
//     typename T::iterator it = std::find(container.begin(), container.end(), value);// std::find is a standerd algorithm that works m3a ay container cus it use iterators
//     if (it == container.end())
//         throw NotFoundException();
//     return it;
// }



template <typename T>

typename T::iterator easyfind(T &container, int value)
{
    T::iterator it
}