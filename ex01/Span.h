
#pragma once

#include <vector>
#include <algorithm>
#include <iostream>
#include <exception>

class Span 
{
    private:
        std::vector<int> arr;  
        unsigned int     max;  

    public:
        
        Span(); 
        
      
        Span(unsigned int N);
        
        
        Span(const Span &obj);
        
        
        Span& operator=(const Span &obj);
        
        
        ~Span();

     
        void addNumber(int number);
        int shortestSpan();
        int longestSpan();
};