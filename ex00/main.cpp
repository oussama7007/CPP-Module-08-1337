



#include <iostream>
#include <vector>
#include <algorithm>



template <typename T>
void    test(T container)
{
    typename T::iterator it = container.back();
    std::cout << *it << std::endl;
}


int main()
{
    std::vector<int> v = {1,2,3};
    test(v);
}
