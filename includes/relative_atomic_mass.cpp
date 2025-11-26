#include <iostream>
#include <string>
#include <cmath>
#include "relative_atomic_mass.h"
#include "input_handling.h"

using std::cin, std::cout, std::string;

void calcAr() {
    double p = rand() % 100 / 100.0;
    double mass1 = rand() % 100, mass2 = rand() % 100;
    double ar = round(p * mass1 + (1.0 - p) * mass2);
    int whichone = rand() % 2;
    double ans;
    if (whichone == 0) {
        cout << p * 100 << "% of an elements isotopes have mass number " << mass1 << " and the rest have mass number " << mass2 << "\nWhat is the relative atomic mass of this element?\n";
        cin >> ans;
        checkAnswerD(ans, ar);
    }
    else {
        cout << "The relative atomic mass of an element is " << ar << " and its two isotopes have mass number " << mass1 << " and " << mass2 << "\nFind the percent abundance of the first isotope\n";
        cin >> ans;
        checkAnswerD(ans, p);
    }
}
