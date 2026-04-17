
#include <iostream>
#include <vector>
#include <algorithm>



int main()
{
    std::vector<int> test;

    for(int i = 0; i < 5; i++)
    {
        test[i] = i+10;
    }
    for(int i = 0; i < 5; i++)
    {
        std::cout << test[i] << std::endl;
    }
}