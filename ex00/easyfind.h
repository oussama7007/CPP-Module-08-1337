


#ifndef EASYFIND_H
#define EASYFIND_H



#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>


class   except : public std::exception
{
    public:
        const char* what() const throw()
        {
            return ("Value not found in the container");
        }
};

template <typename T>

typename T::iterator easyfind(T &container, int value)
{
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if(it == container.end())
        throw except();
    return it;
}


#endif