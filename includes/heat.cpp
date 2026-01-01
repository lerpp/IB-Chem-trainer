#include <iostream>
#include <string>
#include <cmath>
#include "heat.h"
#include "input_handling.h"

using std::cin, std::cout, std::string;

void qnct() {
    double n = rand() % 1000 / 100.0;
    double t = roundDouble(rand() % 1000 / 50.0 * (-1 + rand() % 2 * 2), 3);
    double c = rand() % 1000 / 100.0;
    double q = roundDouble(n * c * t, 3);
    string change = t > 0 ? "heated" : "cooled";
    string transfer = t > 0 ? "absorbed" : "released";
    int whichone = rand() % 4;
    if (whichone == 0) {
        cout << "A substance has a specific heat capacity of " << c << " J/(K * mol)\n" << n << " mol of the substance is " << change << " by " << fabs(t) << " K\nFind the amount of heat " << transfer << " by the substance\n";
        double ans; cin >> ans;
        checkAnswerD(ans, q);
    }
    else if (whichone == 1) {
        cout << "A substance has a specific heat capacity of " << c << " J/(K * mol)\n" << n << " mol of the substance is " << change << ". The substance " << transfer << " " << fabs(q) << " J of heat\nFind the substance's change in temperature\n";
        double ans; cin >> ans;
        checkAnswerD(ans, t);
    }
    else if (whichone == 2) {
        cout << "A substance has a specific heat capacity of " << c <<  " J/(K * mol)\nSome of the substance is " << change << " by " << fabs(t) << " K, " << transfer << " " << fabs(q) << " J of heat\nFind the number of moles of the substance\n";
        double ans; cin >> ans;
        checkAnswerD(ans, n);
    }
    else {
        cout << n << " mol of a substance is " << change << " by " << fabs(t) << " K. The substance " << transfer << " " << fabs(q) << " J of heat\nFind the specific heat capacity of the substance\n";
        double ans; cin >> ans;
        checkAnswerD(ans, c);
    }
}

void qnl() {
    double n = rand() % 1000 / 100.0;
    double l = rand() % 1000 / 100.0;
    double q = roundDouble(n * l, 3);
    string type = rand() % 2 == 0 ? "fusion" : "vaporization";
    string statechange = type == "fusion" ? "melt" : "evaporate";
    int whichone = rand() % 3;
    if (whichone == 0) {
        cout << "The latent heat of " << type << " of a substance is " << l << " kJ/mol\nHow much heat is required to " << statechange << " " << n << " mol of the substance?\n";
        double ans; cin >> ans;
        checkAnswerD(ans, q);
    }
    else if (whichone == 1) {
        cout << "The latent heat of " << type << " of a substance of " << l << " kJ/mol\nIf " << q << " kJ of heat is required to " << statechange << " the substance, how many moles of the substance are there?\n";
        double ans; cin >> ans;
        checkAnswerD(ans, n);
    }
    else {
        cout << q << " kJ of heat is required to " << statechange << " " << n << " mol of a substance\nFind the latent heat of " << type << " of the substance\n";
        double ans; cin >> ans;
        checkAnswerD(ans, l);
    }
}