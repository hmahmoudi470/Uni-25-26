#include <iostream>

void print(int32_t param)
{
    param = 17;
    std::cout<<param <<std::endl;
}

int main()
{
    uint8_t small = 2; 
    int32_t large = -10;

    {
        float inner = 1.0f;
    }
    print(small);
    print(large);

    return 0;
}