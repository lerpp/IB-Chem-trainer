#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include "molecular_formula.h"
#include "input_handling.h"

using std::cin, std::cout, std::string, std::vector, std::pair;

vector<pair<pair<string, double>, vector<pair<string, double>>>> compounds_mol_formula = {
        { {"H20", 18.02}, {
                {"H", 11.21},
                {"O", 88.78}
        }},
        {{"CO2", 44.01}, {
                {"C", 28.29},
                {"O", 72.71}
        }},
        {{"CH4", 16.05}, {
                {"C", 74.83},
                {"H", 25.17}
        }},
        {{"NH3", 17.04}, {
                {"N", 82.22},
                {"H", 17.78}
        }},
        {{"O2", 32.0}, {
                {"O", 100.0}
        }},
        {{"N2", 28.02}, {
                {"N", 100.0}
        }},
        {{"HCl", 36.46}, {
                {"H", 2.77},
                {"Cl", 97.23}
        }},
        {{"NaCl", 58.44}, {
                {"Na", 39.34},
                {"Cl", 60.66}
        }},
        {{"MgO", 40.31}, {
                {"Mg", 60.31},
                {"O", 39.69}
        }},
        {{"SO2", 64.07}, {
                {"S", 50.04},
                {"O", 49.96}
        }},
        {{"H2SO4", 98.09}, {
                {"S", 32.7},
                {"O", 65.24},
                {"H", 2.06}
        }},
        {{"CaCO3", 100.09}, {
                {"Ca", 40.04},
                {"C", 12.0},
                {"O", 47.96}
        }},
        {{"NH4NO3", 80.06}, {
                {"N", 35.0},
                {"H", 5.05},
                {"O", 59.95}
        }},
        {{"C2H6", 30.08}, {
                {"C", 79.85},
                {"H", 20.15}
        }},
        {{"C2H5OH", 46.08}, {
                {"C", 52.13},
                {"H", 13.15},
                {"O", 34.72}
        }},
        {{"C2H4O2", 60.06}, {
                {"C", 39.99},
                {"H", 6.73},
                {"O", 53.28}
        }},
        {{"C6H12O6", 180.18}, {
                {"C", 39.99},
                {"H", 6.73},
                {"O", 53.28}
        }},
        {{"C3H8", 44.11}, {
                {"C", 81.68},
                {"H", 18.32}
        }},
        {{"C6H6", 78.12}, {
                {"C", 92.22},
                {"H", 7.78}
        }}
};

void mol_formula() {
        double scalar = pow(10, rand() % 100 / 100.0 * (-1 + rand() % 2 * 2));
        auto [data, composition] = compounds_mol_formula[rand() % compounds_mol_formula.size()];
        auto [formula, mol_m] = data;
        cout << "A sample of a compound has the following composition:\n";
        for (const auto &[element, percent] : composition) {
                cout << element << ": " << percent * scalar << "g\n";
        }
        cout << "The compound has molar mass " << mol_m << "\nFind the molecular formula of the compound\n";
        string ans; cin >> ans;
        checkAnswerS(ans, formula);
}