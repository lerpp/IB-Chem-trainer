#include <iostream>
#include <string>
#include "concentration.h"
#include "input_handling.h"

using std::cin, std::cout, std::string;

void cnv() {
    double solute = rand() % 1000 / 100.0;
    double volume = rand() % 1000 / 10.0;
    double concentration = roundDouble(solute / volume, 3);
    int whichone = rand() % 3;
    if (whichone == 0) {
        cout << solute << " moles of salt is dissolved in water, forming " << volume << " cm^3 of salt water\nFind the concentration of the solution\n";
        double ans; cin >> ans;
        checkAnswerD(ans, concentration);
    }
    else if (whichone == 1) {
        cout << solute << " moles of salt is dissolved in water, forming a solution with concentration " << concentration << " mol/cm^3\nFind the volume of the solution\n";
        double ans; cin >> ans;
        checkAnswerD(ans, volume);
    }
    else {
        cout << "A salt water solution has volume " << volume << " cm^3 and concentration " << concentration << "mol/cm^3\nFind the amount of salt dissolved in the water\n";
        double ans; cin >> ans;
        checkAnswerD(ans, solute);
    }
}

void cvcv() {
    double c1 = rand() % 1000 / 100.0;
    double c2 = rand() % 1000 / 100.0;
    double n = rand() % 1000 / 10.0;
    double v1 = roundDouble(n / c1, 3);
    double v2 = roundDouble(n / c2, 3);
    string growth = c2 < c1 ? "reduced" : "diluted";
    int whichone = rand() % 4;
    if (whichone == 0) {
        cout << "A " << v1 << " cm^3 solution of salt water with concentration " << c1 << " mol/c^3 is " << growth << " to a volume of " << v2 << " cm^3\nFind the concentration of the final solution\n";
        double ans; cin >> ans;
        checkAnswerD(ans, c2);
    }
    else if (whichone == 1) {
        cout << "A " << v1 << " cm^3 solution of salt water with concentration " << c1 << " mol/c^3 is " << growth << " to a concentration of " << c2 << " mol/cm^3\nFind the volume of the final solution\n";
        double ans; cin >> ans;
        checkAnswerD(ans, v2);
    }
    else if (whichone == 2) {
        cout << "A " << v1 << " cm^3 solution of salt water is " << growth << " to a volume of " << v2 << " cm^3 and a concentration of " << c2 << " mol/cm^3\nFind the concentration of the initial solution\n";
        double ans; cin >> ans;
        checkAnswerD(ans, c1);
    }
    else {
        cout << "A " << c1 << " mol/cm^3 solution of salt water is " << growth << " to a volume of " << v2 << " cm^3 and a concentration of " << c2 << " mol/cm^3\nFind the volume of the initial solution\n";
        double ans; cin >> ans;
        checkAnswerD(ans, v1);
    }
}