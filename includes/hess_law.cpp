#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
#include "hess_law.h"
#include "input_handling.h"

using std::cin, std::cout, std::string, std::vector, std::pair;

vector<pair<vector<pair<string, double>>, pair<string, double>>> cycles = {
    {
        {
            {"C2H4(g) + 3 O2(g) => 2 CO2(g) + 2 H2O(l)", -1411},
            {"C2H6(g) + 7/2 O2(g) => 2 CO2(g) + 3 H2O(l)", -1560},
            {"H2(g) + 1/2 O2(g) => H2O(l)", -285.8}
        }, {"C2H4(g) + H2(g) => C2H6(g)", -137}},
    {
        {
            {"N2(g) + O2(g) => 2 NO(g)", -180.5},
            {"N2(g) + 3 H2(g) => 2 NH3(g)", -91.8},
            {"2 H2(g) + O2(g) => 2 H2O(g)", -483.6}
        }, {"4 NH3(g) + 5 O2(g) => 4 NO(g) + 6 H2O(g)", -1630}},
    {
        {
            {"HC2H3O2(l) + 2 O2(g) => 2 CO2(g) + 2 H2O(l)", -875},
            {"C(s, graphite) + O2(g) => CO2(g)", -394.51},
            {"H2(g) + 1/2 O2(g) => H2O(l)", -285.8}
        }, {"2 H2(g) + 2 C(s, graphite) + O2(g) => HC2H3O2(l)", -486}},
    {
        {
            {"N2(g) + 3 H2(g) => 2 NH3(g)", -91.8},
            {"C(s, graphite) + 2 H2(g) => CH4(g)", -74.9},
            {"H2(g) + 2 C(s, graphite) + N2(g) => 2 HCN(g)", 270.3}
        }, {"CH4(g) + NH3(g) => HCN(g) + 3 H2(g)", 256}},
    {
        {
            {"2 Al(s) + 6 HCl(aq) => 2 AlCl3(aq) + 3 H2(g)", -1049},
            {"HCl(g) => HCl(aq)", -74.8},
            {"H2(g) + Cl2(g) => 2 HCl", -1845},
            {"AlCl3(s) => AlCl3(aq)", -323}
        }, {"2 Al(s) + 3 Cl2(g) => 2 AlCl3(s)", -6390}}
};

void hess_law() {
    SetConsoleOutputCP(CP_UTF8);
    auto [eqs, solution] = cycles[rand() % cycles.size()];
    auto [target_eq, mol_enthalpy] = solution;
    cout << "Find the molar enthalpy of " << target_eq << " using Hess's law and the following equations:\n";
    for (const auto &[eq, enthalpy] : eqs) {
        cout << eq << "    " << "ΔH = " << enthalpy << " kJ/mol\n";
    }
    double ans; cin >> ans;
    checkAnswerD(ans, mol_enthalpy);
}