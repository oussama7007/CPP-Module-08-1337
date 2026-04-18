


#pragma once 


#include <iostream>
#include <algorithm>
#include <exception>



class   
template <typename T>

typename T::iterator    easyfind(T& container, int value)
{
    typename T::iterator it = std::find(container.begin(), container.end(), value); // std::find is a standerd algorithm that works m3a ay container cus it use iterators 
    if(it == container.end())
        return std::string("number not found");
    return it;
}


