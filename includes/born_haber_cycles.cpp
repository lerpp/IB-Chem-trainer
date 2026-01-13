#include <iostream>
#include <vector>
#include <string>
#include "born_haber_cycles.h"
#include "input_handling.h"

using std::cin, std::cout, std::string, std::vector, std::pair;

vector<pair<string, pair<pair<int, int>, int>>> bh_cycles = {
    {"NaCl", {{108, -411}, 787}},
    {"KBr", {{89, -394}, 674}},
    {"Li2O", {{161, -598}, 2520}},
    {"Na2O", {{108, -414}, 2180}},
    {"LiF", {{161, -617}, 1050}}
};

void bh_cycle() {
    auto [compound, data] = bh_cycles[rand() % bh_cycles.size()];
    auto [extra, solution] = data;
    auto [atomization, formation] = extra;
    cout << "Using Sections 9 and 12 of the IB Chemistry data booklet, find the lattice enthalpy of " << compound << "\nNote: the enthalpy of atomization of the metal is " << atomization << " kJ/mol\nThe enthalpy of formation of " << compound << " is " << formation << " kJ/mol\n";
    double ans; cin >> ans;
    checkAnswerD(ans, solution);
}