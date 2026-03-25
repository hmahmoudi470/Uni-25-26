#include <iostream>
#include <string>

void myFunction()
{
    std::string var = "Hello"; 
    var = var +"Welt"; 

    std::cout <<var <<std::endl; 

    for(int i = 0; i <var.size(); ++i)
    {
        char c=var.at(i); 

        std::cout << c << "in ASCII: "<<(int)c <<std::endl; 
    }
}
int main()
{
    myFunction(); 
    return 0; 
}