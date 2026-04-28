
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
        class   not_enough 
        {
            public:
                const char * what() const throw()
                {
                    
                }
        };
        class   spanfull : public std::exception
        {
                public:
                    const char * what() const throw()
                    {
                        return "span is full!";
                    }
        };
     
        void addNumber(int number);
        int shortestSpan();
        int longestSpan();
};