#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include "hydrates.h"
#include "input_handling.h"

using std::cin, std::cout, std::getline, std::ws, std::string, std::vector, std::pair, std::to_string;

constexpr double water_molmass = 18.02;

vector<pair<pair<string, double>, pair<int, int>>> hydrates = {
    {
        {"CuSO4", 159.62},
        {1, 5}
    },
    {
        {"MgSO4", 120.38},
        {1, 7}
    },
    {
        {"Na2CO3", 105.99},
        {1, 10}
    },
    {
        {"CoCl2", 129.83},
        {1, 6}
    },
    {
        {"BaCl2", 208.23},
        {1, 2}
    },
    {
        {"FeSO4", 151.92},
        {1, 7}
    },
    {
        {"CaCl2", 110.98},
        {1, 2}
    },
    {
        {"CaSO4", 136.15},
        {1, 2}
    },
    {
        {"ZnSO4", 161.45},
        {1, 7}
    },
    {
        {"NiSO4", 154.76},
        {1, 6}
    },
    {
        {"Na2S2O3", 158.12},
        {1, 5}
    },
    {
        {"Al(NO3)3", 213.01},
        {1, 9}
    },
    {
        {"CrCl3", 158.35},
        {1, 6}
    },
    {
        {"CH3COONa", 82.04},
        {1, 3}
    },
    {
        {"SrCl2", 158.52},
        {1, 6}
    }
};

void find_hydrate() {
    auto [hydrate, coefs] = hydrates[rand() % hydrates.size()];
    auto [formula, mol_m] = hydrate;
    auto [comp_coef, water_coef] = coefs;
    double moles = pow(10, rand() % 100 / 100.0 * (-1 + rand() % 2 * 2));
    double hydrate_m = (comp_coef * mol_m + water_coef * water_molmass) * moles;
    double anhydrate_m = comp_coef * mol_m * moles;
    cout << "A " << hydrate_m << "g sample of " << formula << " was heated, evaporating water in the hydrate and reducing its mass to " << anhydrate_m << "g\nFind the formula of the hydrate\n(Example: ABC x 6H2O)\n";
    string ans; getline(cin >> ws, ans);
    checkAnswerS(ans, formula + " x " + to_string(water_coef) + "H2O");
}