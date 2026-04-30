
#ifndef SPAN_H
#define SPAN_H


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
        
        class   not_enough : public std::exception 
        {
            public:
                const char * what() const throw()
                {
                    return "Not enough numbers to calculate a span!";
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

        template <typename T>
        void    addNumbers(T begin, T end)
        {
            typename std::iterator_traits<T>::difference_type count;
            
            count = std::distance(begin, end); // djistance returns the number of elemnts between two itrators donc ila kan end first ghadir tkon nigative
            
            if(count < 0)
                throw Span::spanfull();
            
            if(static_cast<size_t>(count) > static_cast<size_t>( max - arr.size()))
                throw Span::spanfull();
            arr.insert(arr.end(), begin, end);
        }
     
        void addNumber(int number);
        unsigned int shortestSpan() const ;
        unsigned int longestSpan() const;
};


#endif