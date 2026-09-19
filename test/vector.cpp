#include <vector>
#include <iostream>

int main()
{
    std::vector<int> a(10);
    a[0] = 10;
    a[1] = 20;
    for(auto c : a)
    {
        std::cout << c << std::endl;
    }
    return 0;
}
