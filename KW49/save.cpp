#include <iostream>

void print(int32_t param)
{
    param = 17;
    std::cout<<param <<std::endl;
}

int main()
{
    uint8_t small = 2;     //(uint8_t , "8 bits") unsigned (range: 0 to 255)
    int32_t large = -10;    // 32 bits (range: 0 to 4, 294, 967,295)

    {
        float inner = 1.0f; //local variable 
    }
    print(small);
    print(large);

    return 0;
}