


#pragma once 


#include <iostream>
#include <algorithm>
#include <exception>


class NumNotFound : public std::exception
{
    public:
        const char* what() const throw()
        {
            return ("Value not found in container");
        }
};

template <typename T>

typename T::iterator    easyfind(T& container, int value)
{
    typename T::iterator it = std::find(container.befin(), container.end(), value); // std::find is a standerd algorithm that works m3a ay container cus it use iterators 
    if(it == container.end())
        throw NumNotFound();
    return it;
}


