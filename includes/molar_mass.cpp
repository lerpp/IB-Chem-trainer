#include <bits/stdc++.h>
#include "molar_mass.h"
#include "input_handling.h"

using namespace std;

void calcMolMass(){
    double n = roundDouble(rand() % 1000 / 100.0, 3);
    double M = roundDouble(rand() % 1000 / 10.0, 3);
    double m = roundDouble(n * M, 3);
    int whichone = rand() % 3;
    double ans;
    if (whichone == 0) {
        cout << "Bob has " << n << " moles of an element with molar mass " << M << " grams per mole. Find the mass of the sample of the element\n";
        cin >> ans;
        checkAnswerD(ans, m);
    }
    else if (whichone == 1) {
        cout << "Bob has " << m << " grams of an element with molar mass " << M << " grams per mole. Find the number of moles present\n";
        cin >> ans;
        checkAnswerD(ans, n);
    }
    else {
        cout << "Bob has " << n << " moles of an element which weighs " << m << " grams. Find the molar mass of the element\n";
        cin >> ans;
        checkAnswerD(ans, M);
    }
}