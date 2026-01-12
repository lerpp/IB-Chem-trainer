#include <iostream>
#include <vector>
#include <string>
#include "net_equation_entropy.h"
#include "input_handling.h"

using std::cin, std::cout, std::string, std::vector, std::pair;

constexpr int o_s = 205;
constexpr int h_s = 131;
constexpr int c6h12_s = 157;

vector<pair<string ,double>> entropy_eqs = {
    {"CH4(g) + 2 O2(g) => CO2(g) + 2 H2O(l)", -242},
    {"C2H4(g) + H2(g) => C2H6(g)", -121},
    {"C6H12(l) => C6H6(l) + 3 H2(g)", 409},
    {"2 CO(g) + O2(g) => 2 CO2(g)", -173},
    {"C2H5OH(l) => C2H4(g) + H2O(l)", 129}
};

void net_entropy() {
    auto [eq, net_entropy] = entropy_eqs[rand() % entropy_eqs.size()];
    cout << "Using Section 13 of the IB Chemistry Data Booklet, find the net entropy of the following equation:\n" << eq << '\n';
    if (eq == "CH4(g) + 2 O2(g) => CO2(g) + 2 H2O(l)" || eq == "2 CO(g) + O2(g) => 2 CO2(g)") cout << "Note:\nThe standard entropy of O2(g) is " << o_s << " J/K/mol\n";
    else if (eq == "C2H4(g) + H2(g) => C2H6(g)") cout << "Note:\nThe standard entropy of H2(g) is: " << h_s << " J/K/mol\n";
    else if (eq == "C6H12(l) => C6H6(l) + 3 H2(g)") cout << "Note:\nThe standard entropy of H2(g) is: " << h_s << " J/K/mol\nThe standard entropy of C6H12(l) is: " << c6h12_s << " J/K/mol\n";
    double ans; cin >> ans;
    checkAnswerD(ans, net_entropy);
}