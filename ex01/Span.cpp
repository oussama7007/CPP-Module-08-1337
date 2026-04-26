





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
        throw std::length_error("Span is already full! Cannot add more numbers.");
    }
    
    // 2. If it's not full, add the number to the vector
    arr.push_back(number);
}


int Span::shortestSpan() {
    if (arr.size() < 2) {
        throw std::logic_error("Not enough numbers to calculate a span!");
    }
    // We will write the math logic for this next!
    std::vector<int>::iterator min_it = std::min_element(arr.begin(), arr.end());
    std::vector<int>::iterator max_it = std::max_element(arr.begin(), arr.end());
    return *max_it - *min_it; 
}

int Span::longestSpan() {
    if (arr.size() < 2) {
        throw std::logic_error("Not enough numbers to calculate a span!");
    }


// 2. Create a copy of the array so we don't destroy the user's original order
    std::vector<int> sorted_arr = arr;
    
    
    
    // 3. Sort the copy (This puts the closest numbers right next to each other)
    std::sort(sorted_arr.begin(), sorted_arr.end());



    // 4. Initialize our shortest span tracker to a very high number
    // INT_MAX is the highest possible integer, so the first difference we find will definitely be smaller.
    int min_span = std::numeric_limits<int>::max();



    // 5. Loop through the sorted array to compare adjacent elements
    // We stop at size() - 1 because we are looking at 'i' and 'i + 1'
    for (size_t i = 0; i < sorted_arr.size() - 1; ++i) {
        
        // Calculate the difference between the current number and the next one
        int difference = sorted_arr[i + 1] - sorted_arr[i];
        
        // If this difference is smaller than our current record, update the record!
        if (difference < min_span) {
            min_span = difference;
        }
    }

    // 6. Return the smallest difference we found
    return min_span;
}