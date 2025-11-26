#include <iostream>
#include <string>
#include "frequency_wavelength.h"
#include "input_handling.h"

using std::cin, std::cout, std::string;

void calcFreq() {
    double c = 3e8, h = 6.63e-34;
    double freq = roundDouble(rand() % 1000 * 1000000000000, 3);
    double lambda = roundDouble(c / freq, 3);
    double energy = roundDouble(h * freq, 3);
    int whichone = rand() % 6;
    double ans;
    if (whichone == 0) {
        cout << "A ray of light has frequency " << freq << " Hz\nFind its wavelength\n";
        cin >> ans;
        checkAnswerD(ans, lambda);
    }
    else if (whichone == 1) {
        cout << "A ray of light has wavelength " << lambda << " m\nFind its frequency\n";
        cin >> ans;
        checkAnswerD(ans, freq);
    }
    else if (whichone == 2) {
        cout << "A ray of light has energy " << energy << " J\nFind its frequency\n";
        cin >> ans;
        checkAnswerD(ans, freq);
    }
    else if (whichone == 3) {
        cout << "A ray of light has frequency " << freq << " Hz\nFind its energy\n";
        cin >> ans;
        checkAnswerD(ans, energy);
    }
    else if (whichone == 4) {
        cout << "A ray of light has energy " << energy << " J\nFind its wavelength\n";
        cin >> ans;
        checkAnswerD(ans, lambda);
    }
    else {
        cout << "A ray of light has wavelength " << lambda << " m\nFind its energy\n";
        cin >> ans;
        checkAnswerD(ans, energy);
    }
}
