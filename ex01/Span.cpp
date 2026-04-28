





#include "Span.h"
#include <limits>

Span::Span() : max(0) {}

Span::Span(unsigned int N) : max(N) {
}

Span::Span(const Span &obj) : arr(obj.arr) , max(obj.max) {}

Span&   Span::operator=(const Span &obj)
{
    if(this != &obj)
    {
        arr = obj.arr;
        max = obj.max;

    }
    return *this;
}


Span::~Span() {}


void Span::addNumber(int number) 
{


    if (arr.size() >= max) {
        throw Span::spanfull();
    }
    
    arr.push_back(number);
}

int Span::longestSpan()
{
    if (arr.size() < 2)
        throw Span::not_enough();

    std::vector<int>::iterator min_it = std::min_element(arr.begin(), arr.end());
    std::vector<int>::iterator max_it = std::max_element(arr.begin(), arr.end());

    return *max_it - *min_it;
}




int     Span::shortestSpan()
{
    if(arr.size() < 2)
        throw Span::not_enough();
    
    std::vector<int> tmp = arr;
    std::sort(tmp.begin(), tmp.end());

    int shortest = tmp[1] - tmp[0];
    for(size_t i = 1 ; i < tmp.size() - 1; i++)
    {
        int check = tmp[1 + i ] - tmp[i];
        if(shortest > check)
            shortest = check;
    }
    return shortest;
}
