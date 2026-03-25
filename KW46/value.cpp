#include <iostream>
void stellenwertsysteme()
{ 
    for(int i = 0; i < 3000; ++i)
    {
        std::cout <<(i* 1000000) <<std::endl; 
    }
}
int main()
{
    stellenwertsysteme(); 
    return 0; 
}