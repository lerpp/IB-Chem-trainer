#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include "emp_formula.h"
#include "input_handling.h"

using std::cin, std::cout, std::string, std::vector, std::pair;

vector<pair<string, vector<pair<string, double>>>> compounds_emp_formula = {
    { "H20", {
        {"H", 11.21},
        {"O", 88.78}
    }},
    {"CO2", {
        {"C", 28.29},
        {"O", 72.71}
    }},
    {"CH4", {
        {"C", 74.83},
        {"H", 25.17}
    }},
    {"NH3", {
        {"N", 82.22},
        {"H", 17.78}
    }},
    {"O2", {
        {"O", 100.0}
    }},
    {"N2", {
        {"N", 100.0}
    }},
    {"HCl", {
        {"H", 2.77},
        {"Cl", 97.23}
    }},
    {"NaCl", {
        {"Na", 39.34},
        {"Cl", 60.66}
    }},
    {"MgO", {
        {"Mg", 60.31},
        {"O", 39.69}
    }},
    {"SO2", {
        {"S", 50.04},
        {"O", 49.96}
    }},
    {"H2SO4", {
        {"S", 32.7},
        {"O", 65.24},
        {"H", 2.06}
    }},
    {"CaCO3", {
        {"Ca", 40.04},
        {"C", 12.0},
        {"O", 47.96}
    }},
    {"NH4NO3", {
        {"N", 35.0},
        {"H", 5.05},
        {"O", 59.95}
    }},
    {"CH3", {
        {"C", 79.85},
        {"H", 20.15}
    }},
    {"C2H5OH", {
        {"C", 52.13},
        {"H", 13.15},
        {"O", 34.72}
    }},
    {"CH2O", {
        {"C", 39.99},
        {"H", 6.73},
        {"O", 53.28}
    }},
    {"C3H8", {
        {"C", 81.68},
        {"H", 18.32}
    }},
    {"CH", {
        {"C", 92.22},
        {"H", 7.78}
    }}
};

void emp_formula() {
    double scalar = pow(10, rand() % 100 / 100.0 * (-1 + rand() % 2 * 2));
    auto [formula, composition] = compounds_emp_formula[rand() % compounds_emp_formula.size()];
    cout << "A sample of a compound has the following composition:\n";
    for (const auto &[element, percent] : composition) {
        cout << element << ": " << percent * scalar << "g\n";
    }
    cout << "Find the empirical formula of the compound\n";
    string ans; cin >> ans;
    checkAnswerS(ans, formula);
}