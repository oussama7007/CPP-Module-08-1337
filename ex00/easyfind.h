


#pragma once 


#include <iostream>
#include <algorithm>
#include <exception>

template <typename T>

class noumfound : public std::exception
{
    public:
        const char* what() const throw()
        {
            return ("Value not found in container");
        }
}

typename     easyfind(T& container, int value)
{
    
}