



#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H



#include <iostream>
#include <stack>   
#include <deque>

// MANDATORY: You must tell the compiler this is a template class BEFORE the class keyword
template <typename T>
class MutantStack : public std::stack<T> // MANDATORY: Inherit from std::stack, not vector
{
public:

    MutantStack() : std::stack<T>() {}
    
    ~MutantStack() {}
    
    MutantStack(const MutantStack &other) : std::stack<T>(other) {}
    
    MutantStack &operator=(const MutantStack &other) {
        if (this != &other) {
            std::stack<T>::operator=(other);
        }
        return *this;
    }

    
    typedef typename std::stack<T>::container_type::iterator iterator;

  
    iterator begin() {
        return this->c.begin();
    }

    iterator end() {
        return this->c.end();
    }

    typedef typename std::stack<T>::container_type::const_iterator const_iterator;

    const_iterator begin() const {
        return this->c.begin();
    }

    const_iterator end() const {
        return this->c.end();
    }
};


#endif
