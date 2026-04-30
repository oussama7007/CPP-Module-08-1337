



#include <algorithm>
#include <iostream>
#include <vector>
#include <list>


int main()
{
    std::list<int> oussama;

    for(int i = 0 ; i < 20; i++ )
        oussama.push_back(i+100);

    std::list<int>::iterator it = oussama.end();
    while(it != oussama.begin())
    {
        it--;
        std::cout << *it << std::endl;
        
    } 
}