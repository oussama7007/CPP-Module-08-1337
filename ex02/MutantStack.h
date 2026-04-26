


#pragma once

#include <iostream>
#include <stack>   // MANDATORY: Must include stack
#include <deque>

// MANDATORY: You must tell the compiler this is a template class BEFORE the class keyword
template <typename T>
class MutantStack : public std::stack<T> // MANDATORY: Inherit from std::stack, not vector
{
public:
    // Default constructor
    MutantStack() : std::stack<T>() {}
    
    // Destructor
    ~MutantStack() {}
    
    // Copy constructor
    MutantStack(const MutantStack &other) : std::stack<T>(other) {}
    
    // Assignment operator
    MutantStack &operator=(const MutantStack &other) {
        if (this != &other) {
            std::stack<T>::operator=(other);
        }
        return *this;
    }

    // Typedef to expose the underlying container's iterators
    typedef typename std::stack<T>::container_type::iterator iterator;

    // Return the iterators from the protected 'c' variable
    iterator begin() {
        return this->c.begin();
    }

    iterator end() {
        return this->c.end();
    }
};