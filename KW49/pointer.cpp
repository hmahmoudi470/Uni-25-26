#include <iostream>
#include <string>

int main()
{
    std::string food = "Pizza"; //A string variable 
    std::string* ptr = &food; //A pointer variable that stores the address fo food

    //Output the value of food 
    std::cout <<food <<std::endl; 

    // Output the memory address of food 
    std::cout <<"Refrence: "<<&food <<std::endl; 

    // Output the memory address of food with the pointer 
    std::cout <<"Pointer: "<<ptr <<std::endl; //If I put a * before ptr, this indicates the content of the pointer.

    return 0; 
} 
