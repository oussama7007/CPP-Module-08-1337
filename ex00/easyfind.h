


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
            return ("num not found");
        }
}



typename     easyfind(T& container, int value)
{
    
}