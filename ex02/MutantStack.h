







#include <iostream>
#include <algorithm>

class MutantStack 
{
public:
    MutantStack() {}
    ~MutantStack() {}

    void push(int value) {
        stack_.push_back(value);
    }

    void pop() {
        if (!stack_.empty()) {
            stack_.pop_back();
        }
    }

    int top() const {
        if (!stack_.empty()) {
            return stack_.back();
        }
        throw std::out_of_range("Stack is empty");
    }

    size_t size() const {
        return stack_.size();
    }

    typedef std::vector<int>::iterator iterator;
    typedef std::vector<int>::const_iterator const_iterator;

    iterator begin() { return stack_.begin(); }
    iterator end() { return stack_.end(); }
    const_iterator begin() const { return stack_.begin(); }
    const_iterator end() const { return stack_.end(); }
}