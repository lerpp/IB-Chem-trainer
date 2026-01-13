#include <iostream>
#include <string>
#include <cmath>
#include "gibbs_free_energy.h"
#include "input_handling.h"

using std::cin, std::cout, std::string;

void gibbs_free_energy() {
    double h = rand() % 1000 / 10.0 * pow(-1, rand() % 2);
    double t = rand() % 1000 / 10.0;
    double s = rand() % 1000 / 10.0 * pow(-1, rand() % 2);
    double g = roundDouble(h - t * s, 3);
    cout << "At " << t << " K, a reaction has an enthalpy change of " << h << " J/mol and an entropy change of " << s << " J/K\nIs the reaction spontaneous?\n(y/n)\n";
    string ans; cin >> ans;
    checkAnswerS(ans, g > 0 ? "n" : "y");
}