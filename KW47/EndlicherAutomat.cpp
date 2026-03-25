//Dies ist eine exemplarische Loesungsskizze
#include <iostream>


int main() 
{
    int bit = 0;
    int zustand = 1; //1 = A, 2 =B...5 = E

    std::cout << "Zum Beenden der Eingabe 9 drücken." << std::endl;
    std::cout << "Der Automat startet in Zustand A : ";

    while(true)                                                                                                              
    {
        // Eingabe + Kontrolle
        std::cin >> bit;


        if(bit == 9)
        {
          break;
        } else if(bit != 0 && bit != 1) 
        {
            std::cout << std::endl << "Eingabe war keine 0 oder 1, probiere es nochmal." <<std::endl;                       
            std::cout << "Der Automat befindet sich Zustand A : ";
            zustand = 1;
            continue;
        } else 
        {
            if(zustand == 1) 
            {
                if(bit == 1) 
                {
                    zustand = 5; //von A zu E
                    std::cout << std::endl << " -> E : ";
                    continue;
                } else 
                {
                    zustand = 2; //von A zu B
                    std::cout << std::endl << " -> B : ";
                    continue;
                }
            }

            if(zustand == 2) 
            {
                if(bit == 1) 
                {
                    zustand = 5; //von B zu E
                    std::cout << std::endl << " -> E : ";
                    continue;
                } else 
                {
                    zustand = 3; //von B zu C
                    std::cout << std::endl << " -> |C| : ";
                    continue;
                }
            }

            if(zustand == 3) 
            {
                if(bit == 1) 
                {
                    zustand = 4; //von C zu D
                    std::cout << std::endl << " -> D : ";
                    continue;
                } else 
                {
                    zustand = 3; //von A zu C
                    std::cout << std::endl << " -> |C| : ";
                    continue;
                }
            }

            if(zustand == 4) 
            {
                if(bit == 1) 
                {
                    zustand = 3; //von D zu C
                    std::cout << std::endl << " -> |C| : ";
                    continue;
                } else 
                {
                    zustand = 4; //von D zu D
                    std::cout << std::endl << " -> D : ";
                    continue;
                }
            }

            if(zustand == 5) 
            {
                if(bit == 1) 
                {
                    zustand = 5; //von E zu E
                    std::cout << std::endl << " -> E : ";
                    continue;
                } else 
                {
                    zustand = 5; //von E zu E
                    std::cout << std::endl << " -> E : ";
                    continue;
                }
            }
        }
    }

    if(zustand == 3) 
        std::cout << std::endl << "Der Automat hat den Endzustand erreicht" << std::endl;
    else
        std::cout << std::endl << "Der Automat hat den Endzustand nicht erreicht" << std::endl;

    return 0;
}