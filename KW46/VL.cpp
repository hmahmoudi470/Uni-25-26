#include <iostream>
#include <iomanip>
int main()
{   /*//Limited range for intergers
    int a= 2147483647;
    std::cout <<"Value of a   "<<a <<std::endl; 
    int b= 1;
    std::cout<<"Value of b  "<<b<<std::endl; 
    std::cout<<"Value of a+b "<<a+b<<std::endl;
    if(a>=0 && b>=0 && a+b<0)std::cout<<"Overflow!\n";
    return 0;
    */

    /*//Limited accuracy for floating point varibales
    float f = 0.4; 
    std::cout <<"Value of f "<<f <<std::endl; 
    std::cout<<std::fixed <<std::setprecision(22); //22 Zahlen nach Komma werden dargestellt.
    std::cout <<"Value of f  "<<f <<std::endl;
    return 0; 
    */
   //Exact value comparisions for floats are not so meaningful
   std::cout <<"Value of limit: "<<1.2 <<std::endl; 
   float count=0.4; 
   for(; count <= 1.2; count +=0.4)
   {
        std::cout<<"Value of count: "<<count<<"\n";
   }
   std::cout <<"E value of count: "<<count <<"\n"; 
   return 0; 

   int x=7; 
   int y=2; 
   std::cout<<"E value of x & y: " <<(x&y)<<std::endl; 
}