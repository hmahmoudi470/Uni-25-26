#include <iostream>
/*void set(uint8_t param[]) //u = unsigned
{
    param[2] = 10;     //Try with -10 too!
}
int main()
{
    uint8_t array[2] = {4, 2};

    set(array); //that one my function from above

    for (int i = 0; i < 2; ++i)
    {
        int value = array[i];
        std::cout <<value<<std::endl; 
    }
    return 0;
}*/
void set(uint8_t param[])
{
    param[3]= 20;
}
int main()
{
    uint8_t array[4] = {5, 10, 20, 30};

    set(array); 

    for(int i = 0; i < 4; ++i)
    {
        int value = array[i];
        std::cout <<value<<std::endl;
    }
    return 0;
}