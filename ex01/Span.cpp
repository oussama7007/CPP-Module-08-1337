





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

static unsigned int spanDistance(int bigger, int smaller)
{
    return static_cast<unsigned int>(bigger) - static_cast<unsigned int>(smaller);
}

unsigned int Span::longestSpan() const
{
    if (arr.size() < 2)
        throw Span::not_enough();

    int minValue = arr[0];
    int maxValue = arr[0];

    for (size_t i = 1; i < arr.size(); i++)
    {
        if (arr[i] < minValue)
            minValue = arr[i];
        if (arr[i] > maxValue)
            maxValue = arr[i];
    }

    return spanDistance(maxValue, minValue);
}



// unsigned int     Span::shortestSpan() const 
// {
//     if(arr.size() < 2)
//         throw Span::not_enough();
    
//     std::vector<int> tmp = arr;
//     std::sort(tmp.begin(), tmp.end());

//     unsigned int  shortest = tmp[1] - tmp[0];
//     for(size_t i = 1 ; i < tmp.size() - 1; i++)
//     {
//         unsigned int  check = tmp[1 + i ] - tmp[i];
//         if(shortest > check)
//             shortest = check;
//     }
//     return shortest;
// }
unsigned int Span::shortestSpan() const
{
    if (arr.size() < 2)
        throw Span::not_enough();

    std::vector<int> tmp = arr;
    std::sort(tmp.begin(), tmp.end());

    unsigned int shortest = spanDistance(tmp[1], tmp[0]);

    for (size_t i = 1; i + 1 < tmp.size(); i++)
    {
        unsigned int check = spanDistance(tmp[i + 1], tmp[i]);

        if (check < shortest)
            shortest = check;

        if (shortest == 0)
            return 0;
    }

    return shortest;
}