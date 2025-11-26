#include <iostream>
#include <string>
#include "ionization_energy.h"
#include "input_handling.h"

using std::cin, std::cout, std::string;

void calcIE() {
    double c = 3e8, h = 6.63e-34, avogadro = 6.02e23;
    double freq = roundDouble(rand() % 1000 * 1000000000000, 3);
    double lambda = roundDouble(c / freq, 3);
    double energy = roundDouble(h * freq * avogadro / 1000, 3);
    int whichone = rand() % 4;
    double ans;
    if (whichone == 0) {
        cout << "An element has first ionization energy " << energy << " kJ\nFind its frequency of convergence\n";
        cin >> ans;
        checkAnswerD(ans, freq);
    }
    else if (whichone == 1) {
        cout << "An element has frequency of convergence " << freq << " Hz\nFind its ionization energy in kJ\n";
        cin >> ans;
        checkAnswerD(ans, energy);
    }
    else if (whichone == 2) {
        cout << "An element has first ionization energy " << energy << " kJ\nFind the wavelength required to ionize\n";
        cin >> ans;
        checkAnswerD(ans, lambda);
    }
    else {
        cout << "An element requires light with wavelength " << lambda << " m to ionize.\nFind its ionization energy in kJ\n";
        cin >> ans;
        checkAnswerD(ans, energy);
    }
}
