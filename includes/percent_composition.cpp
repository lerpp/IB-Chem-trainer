#include <iostream>
#include <string>
#include <vector>
#include "percent_composition.h"
#include "input_handling.h"

using std::cin, std::cout, std::string, std::vector, std::pair;

vector<pair<pair<string, string>, vector<pair<string, double>>>> compounds_percent_comp = {
    {{"water", "H2)"}, {
        {"H", 11.21},
        {"O", 88.78}
    }},
    {{"carbon dioxide", "CO2"}, {
        {"C", 28.29},
        {"O", 72.71}
    }},
    {{"methane", "CH4",}, {
        {"C", 74.83},
        {"H", 25.17}
    }},
    {{"ammonia", "NH3"}, {
        {"N", 82.22},
        {"H", 17.78}
    }},
    {{"oxygen", "O2"}, {
        {"O", 100.0}
    }},
    {{"nitrogen", "N2"}, {
        {"N", 100.0}
    }},
    {{"hydrochloric acid", "HCl"}, {
        {"H", 2.77},
        {"Cl", 97.23}
    }},
    {{"table salt", "NaCl"}, {
        {"Na", 39.34},
        {"Cl", 60.66}
    }},
    {{"magnesium oxide", "MgO"}, {
        {"Mg", 60.31},
        {"O", 39.69}
    }},
    {{"sulfur dioxide", "SO2"}, {
        {"S", 50.04},
        {"O", 49.96}
    }},
    {{"sulfuric acid", "H2SO4"}, {
        {"S", 32.7},
        {"O", 65.24},
        {"H", 2.06}
    }},
    {{"calcium carbonate", "CaCO3"}, {
        {"Ca", 40.04},
        {"C", 12.0},
        {"O", 47.96}
    }},
    {{"ammonium nitrate", "NH4NO3"}, {
        {"N", 35.0},
        {"H", 5.05},
        {"O", 59.95}
    }},
    {{"ethane", "C2H6"}, {
        {"C", 79.85},
        {"H", 20.15}
    }},
    {{"ethanol", "C2H5OH"}, {
        {"C", 52.13},
        {"H", 13.15},
        {"O", 34.72}
    }},
    {{"glucose", "C6H12O6"}, {
        {"C", 39.99},
        {"H", 6.73},
        {"O", 53.28}
    }},
    {{"acetic acid", "CH3COOH"}, {
        {"C", 39.99},
        {"H", 6.73},
        {"O", 53.28}
    }},
    {{"propane", "C3H8"}, {
        {"C", 81.68},
        {"H", 18.32}
    }},
    {{"benzene", "C6H6"}, {
        {"C", 92.22},
        {"H", 7.78}
    }}
};

void percent_comp() {
    auto [compound, composition] = compounds_percent_comp[rand() % compounds_percent_comp.size()];
    auto [name, formula] = compound;
    auto [element, percent] = composition[rand() % composition.size()];
    cout << "What percent of " << name << " (" << formula << "), does " << element << " take up by mass?\n";
    double ans; cin >> ans;
    checkAnswerD(ans, percent);
}
