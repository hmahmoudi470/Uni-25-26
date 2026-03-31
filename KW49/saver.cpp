#include <iostream>

void set(uint8_t param[]) //Was bedeutet uint8_t? u = unsigned
{
    param[1] = 10;    //mit -10 auch probieren!
}

int main()
{
    uint8_t array[2] = {4, 2};

    set(array);

    for (int i = 0; i < 2; ++i)
    {
        int value = array[i];
        std::cout <<value<<std::endl; 
    }
    return 0;
}