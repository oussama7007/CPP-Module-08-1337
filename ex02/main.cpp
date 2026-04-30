





#include <iostream>
#include <list>
#include <stack>
#include <string>
#include "MutantStack.h"

template <typename T>
void printMutantStack(MutantStack<T> &mstack)
{
    typename MutantStack<T>::iterator it = mstack.begin();
    typename MutantStack<T>::iterator ite = mstack.end();

    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
}

void subjectTest()
{
    std::cout << "\n===== SUBJECT TEST =====" << std::endl;

    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl;

    mstack.pop();

    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);


    printMutantStack(mstack);
    std::stack<int> s(mstack);
    std::cout << "Copied std::stack size: " << s.size() << std::endl;
}

void listComparisonTest()
{
    std::cout << "\n===== LIST COMPARISON TEST =====" << std::endl;

    std::list<int> lst;

    lst.push_back(5);
    lst.push_back(17);

    std::cout << lst.back() << std::endl;

    lst.pop_back();

    std::cout << lst.size() << std::endl;

    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);

    std::list<int>::iterator it = lst.begin();
    std::list<int>::iterator ite = lst.end();

    // ++it;
    // --it;

    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    // printMutantStack(lst);
}

void copyConstructorTest()
{
    std::cout << "\n===== COPY CONSTRUCTOR TEST =====" << std::endl;

    MutantStack<int> original;

    original.push(1);
    original.push(2);
    original.push(3);

    MutantStack<int> copy(original);

    std::cout << "Original:" << std::endl;
    printMutantStack(original);

    std::cout << "Copy:" << std::endl;
    printMutantStack(copy);

    original.pop();
    original.push(99);

    std::cout << "Original after modification:" << std::endl;
    printMutantStack(original);

    std::cout << "Copy should stay unchanged:" << std::endl;
    printMutantStack(copy);
}

void assignmentOperatorTest()
{
    std::cout << "\n===== ASSIGNMENT OPERATOR TEST =====" << std::endl;

    MutantStack<int> a;
    MutantStack<int> b;

    a.push(10);
    a.push(20);
    a.push(30);

    b.push(100);
    b.push(200);

    std::cout << "Before assignment, b:" << std::endl;
    printMutantStack(b);

    b = a;

    std::cout << "After assignment, b:" << std::endl;
    printMutantStack(b);

    a.pop();
    a.push(999);

    std::cout << "a after modification:" << std::endl;
    printMutantStack(a);

    std::cout << "b should stay as assigned copy:" << std::endl;
    printMutantStack(b);
}

void stringTest()
{
    std::cout << "\n===== STRING TEST =====" << std::endl;

    MutantStack<std::string> words;

    words.push("hello");
    words.push("from");
    words.push("MutantStack");

    printMutantStack(words);

    std::cout << "Top: " << words.top() << std::endl;
}

int main()
{
    subjectTest();
    listComparisonTest();
    copyConstructorTest();
    assignmentOperatorTest();
    stringTest();

    return 0;
}