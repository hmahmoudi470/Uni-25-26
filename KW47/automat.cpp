#include <iostream>
using namespace std;

int main() {
    string input;

    while (true) {
        cout << "Eingabe (0/1, q zum Beenden): ";
        if (!(cin >> input))
            break;
        if (input == "q" || input == "Q")
            break;

        char state = 'A';   // Startzustand
        bool gueltigeEingabe = true;

        if (input.empty()) {
            gueltigeEingabe = false;
        }

        for (int i = 0; i < (int)input.length() && gueltigeEingabe; i++) {
            char symbol = input[i];

            if (symbol != '0' && symbol != '1') {
                cout << "Unzulässiges Zeichen '" << symbol << "' entdeckt. Zulässig: 0 oder 1" << endl;
                gueltigeEingabe = false;
                break;
            }

            char voriger = state;

            switch (state) {
                case 'A':
                    if (symbol == '0')
                        state = 'B';
                    else if (symbol == '1')
                        state = 'E';
                    break;

                case 'B':
                    if (symbol == '0')
                        state = 'C';
                    else if (symbol == '1')
                        state = 'E';
                    break;

                case 'C':
                    state = 'C'; // akzeptierender Zustand, bleibt in C
                    break;

                case 'D':
                    state = 'D';
                    break;

                case 'E':
                    state = 'E';
                    break;
            }

            cout << "  " << voriger << " --" << symbol << "--> " << state << endl;
        }

        cout << "Endzustand: " << state << endl;

        if (!gueltigeEingabe) {
            cout << "Eingabe nicht akzeptiert (ungültige Zeichen oder leer)." << endl;
        } else if (state == 'C') {
            cout << "Eingabe akzeptiert." << endl;
        } else {
            cout << "Eingabe nicht akzeptiert. (Aktuell nicht im Endzustand C)" << endl;
        }

        cout << "---" << endl;
    }

    return 0;
}
