#include <iostream>
#include <string>
#include <cmath>
#include "calorimetry.h"
#include "input_handling.h"

using std::cin, std::cout, std::string;

constexpr double c_water = 4.18;

void calorimetry() {
    double scalar = rand() % 1000 / 100.0;
    double m = rand() % 1000 / 10.0;
    double t = rand() % 1000 / 100.0 * pow(-1, rand() % 2 + 1);
    double q = roundDouble(m * c_water * t, 3);
    double h = roundDouble(q / scalar, 3);
    cout << "A reaction occurs inside a perfectly sealed and insulated calorimeter containing " << m << " mL of water, changing the temperature of the water by " << t << " K\nThere are " << scalar << " mol of the compound of interest\nWhat is the molar enthalpy of the reaction?\n";
    double ans; cin >> ans;
    checkAnswerD(ans, h);
}