//https://chatgpt.com/c/69b2a09b-0f18-8330-8a14-bb005ec3042d
/*#include <iostream>
int main() {
    int decimal;
    int binary[32];
    int i = 0;
    std::cout << "Gib eine Dezimalzahl ein: ";
    std::cin >> decimal;
    if (decimal == 0) {
        std::cout << "Binaer: 0";
        return 0;
    }
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }
    std::cout << "Binaer: ";
    for (int j = i - 1; j >= 0; j--) {
        std::cout << binary[j];
    }
    return 0;
}*/
#include <iostream>
int main()
{
    int decimal = 13; 
    int binary[32];
    int i = 0; 
    //std::cout<<"Gib eine Dezimalzahl ein: \n"; 
    //std::cin>>decimal; 
    if(decimal == 0)
    {
        std::cout<<"Binaer: 0\n";
        return 0;
    }
    while (decimal > 0)
    {
        binary[i] = decimal % 2;
        decimal = decimal / 2; i++; 
    }
    std::cout<<"Binaer: "; 
    for(int j = i-1; j>=0; j--)
    {
        std::cout<< binary[j];
    }
    return 0; 
}