#include <iostream>
#include <string>
#include <vector>
#include "comps_molmass.h"
#include "input_handling.h"

using std::cin, std::cout, std::string, std::vector, std::pair;

vector<pair<pair<string, string>, double>> compounds_molmass = {
    {{"water", "H20"}, 18.02},
    {{"carbon dioxide", "CO2"}, 44.01},
    {{"methane", "CH4",}, 16.05},
    {{"ammonia", "NH3"}, 17.04},
    {{"oxygen", "O2"}, 32.0},
    {{"nitrogen", "N2"}, 28.02},
    {{"hydrochloric acid", "HCl"}, 36.46},
    {{"table salt", "NaCl"}, 58.44},
    {{"magnesium oxide", "MgO"}, 40.31},
    {{"sulfur dioxide", "SO2"}, 64.07},
    {{"sulfuric acid", "H2SO4"}, 98.09},
    {{"calcium carbonate", "CaCO3"}, 100.09},
    {{"ammonium nitrate", "NH4NO3"}, 80.06},
    {{"ethane", "C2H6"}, 30.08},
    {{"ethanol", "C2H5OH"}, 46.08},
    {{"glucose", "C6H12O6"}, 180.18},
    {{"acetic acid", "CH3COOH"}, 60.06},
    {{"propane", "C3H8"}, 44.11},
    {{"benzene", "C6H6"}, 78.12}
};

void find_comp_molmass() {
    auto compound = compounds_molmass[rand() % compounds_molmass.size()];
    auto [name, formula] = compound.first;
    double molmass = compound.second;
    cout << "What is the molar mass of " << name << "? (" << formula << ")\n";
    double ans; cin >> ans;
    checkAnswerD(ans, molmass);
}
