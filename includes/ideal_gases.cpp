#include <iostream>
#include <string>
#include "ideal_gases.h"
#include "input_handling.h"

using std::cin, std::cout, std::string;

constexpr double r = 8.31;

void comb_gas_law() {
    double p1 = rand() % 1000 / 10.0;
    double v1 = rand() % 1000 / 100.0;
    double t1 = rand() % 1000 / 10.0;
    double p2 = rand() % 1000 / 10.0;
    double v2 = rand() % 1000 / 100.0;
    double t2 = roundDouble(p2 * v2 * t1 / p1 / v1, 3);
    int whichone = rand() % 6;
    if (whichone == 0) {
        cout << "An ideal gas is stored at " << p1 << " kPa, " << v1 << " dm^3, and " << t1 << " K\nIt is moved into a new environment of " << p2 << " kPa and " << v2 << " dm^3\nFind the final storage temperature in Kelvin\n";
        double ans; cin >> ans;
        checkAnswerD(ans, t2);
    }
    else if (whichone == 1) {
        cout << "An ideal gas is stored at " << p1 << " kPa, " << v1 << " dm^3, and " << t1 << " K\nIt is moved into a new environment of " << p2 << " kPa and " << t2 << " K\nFind the final storage volume in dm^3\n";
        double ans; cin >> ans;
        checkAnswerD(ans, v2);
    }
    else if (whichone == 2) {
        cout << "An ideal gas is stored at " << p1 << " kPa, " << v1 << " dm^3, and " << t1 << " K\nIt is moved into a new environment of " << v2 << " dm^3 and " << t2 << " K\nFind the final storage pressure in kPa\n";
        double ans; cin >> ans;
        checkAnswerD(ans, p2);
    }
    else if (whichone == 3) {
        cout << "An ideal gas is stored at " << p1 << " kPa and " << t1 << " K\nIt is moved into a new environment of " << p2 << " kPa, " << v2 << " dm^3, and " << t2 << " K\nFind the initial storage volume in dm^3\n";
        double ans; cin >> ans;
        checkAnswerD(ans, v1);
    }
    else if (whichone == 4) {
        cout << "An ideal gas is stored at " << p1 << " kPa and " << v1 << " dm^3\nIt is moved into a new environment of " << p2 << " kPa, " << v2 << " dm^3, and " << t2 << " K\nFind the initial storage temperature in Kelvin\n";
        double ans; cin >> ans;
        checkAnswerD(ans, t1);
    }
    else  {
        cout << "An ideal gas is stored at " << v1 << " dm^3 and " << t1 << " K\nIt is moved into a new environment of " << p2 << " kPa, " << v2 << " dm^3, and " << t2 << " K\nFind the initial storage pressure\n";
        double ans; cin >> ans;
        checkAnswerD(ans, p1);
    }
}

void ideal_gas_law() {
    double n = rand() % 1000 / 100.0;
    double p = rand() % 2000 / 10.0;
    double v = rand() % 1000 / 100.0;
    double t = roundDouble(p * v / n / r, 3);
    int whichone = rand() % 4;
    if (whichone == 0) {
        cout << n << " moles of an ideal gas is stored at " << p << " kPa and " << v << " dm^3\nFind the temperature of the gas in K\n";
        double ans; cin >> ans;
        checkAnswerD(ans, t);
    }
    else if (whichone == 1) {
        cout << n << " moles of an ideal gas is stored at " << p << " kPa and " << t << " K\nFind the volume of the gas in dm^3\n";
        double ans; cin >> ans;
        checkAnswerD(ans, v);
    }
    else if (whichone == 2) {
        cout << n << " moles of an ideal gas is stored at " << t << " K and " << v << " dm^3\nFind the pressure of the gas\n";
        double ans; cin >> ans;
        checkAnswerD(ans, p);
    }
    else {
        cout << "An ideal gas is stored at " << p << " kPa, " << v << " dm^3, and " << t << " K\nFind the number of moles of the gas\n";
        double ans; cin >> ans;
        checkAnswerD(ans, n);
    }
}