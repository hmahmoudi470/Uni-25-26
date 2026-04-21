#include <cmath>
#include <numeric>
#include <iostream>

int fi()
{
    int sum = 0; 
    for (int i = 0; i != 1000; ++i)
        if (i % 3 == 0 || i % 5 == 0)
         sum += i; 
    return sum; 
}

int f2()
{
    int sum = 0; 
    int a = 1; 
    int b = 2; 
    while (b <= 4000000)
    {
        if (b % 2 == 0) sum += b; 
        int h = b; 
        b += a; 
        a = h;
    }
    return sum; 
}
int main()
{
    int result1 = fi();
    int result2 = f2();

    std::cout << "Ergebnis von fi(): " << result1 << std::endl;
    std::cout << "Ergebnis von f2(): " << result2 << std::endl;

    return 0;
}