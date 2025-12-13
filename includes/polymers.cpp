#include <iostream>
#include <string>
#include <vector>
#include "polymers.h"
#include "input_handling.h"
#include "continue.h"

using std::cin, std::cout, std::string, std::vector, std::pair;

vector<pair<string, string>> addition_polymers = {
    {"polyethene", "C2H4"},
    {"polypropene", "CH2CHCH3"},
    {"polychloroethene", "CH2CHCl"},
    {"poly 1,1-dichloroethene", "CH2CCl2"},
    {"polystyrene", "CH2CHC6H5"},
    {"polytetrafluoroethene", "C2F4"},
    {"polymethyl methacrylate", "CH2CCH3COOCH3"},
    {"polyacrylonitrile", "CH2CHCN"},
    {"polyvinyl acetate", "CH3COOCHCH2"},
    {"polybutadiene", "CH2CHCHCH2"},
    {"polyethyl ethanoate", "CH2CHCOOCH3"},
    {"polyethenol", "CH2CHOH"}
};

vector<pair<pair<string, vector<string>>, pair<string, string>>> condensation_polymers = {
    {{"polyethylene terephthalate", {"ethane-1,2-diol", "terephthalic acid"}}, {"ester", "H2O"}},
    {{"polyglycolic acid", {"glycolic acid"}}, {"ester", "H2O"}},
    {{"polybenzene-1,4-dymethylene terephthalate", {"terephthalic acid", "benzene-1,4-dimethanol"}}, {"ester", "H2O"}},
    {{"dacron", {"ethanol", "terephthalic acid"}}, {"ester", "H2O"}},
    {{"nylon 6,6", {"hexane-1,6-diamine", "hexanedioic acid"}}, {"amide", "H2O"}},
    {{"kevlar", {"1,4-phenylene-diamine", "terephthaloyl chloride"}}, {"amide", "HCl"}},
    {{"nomex", {"m-phenylenediamine", "isophthaloyl chloride"}}, {"amide", "HCl"}}
};

void addition_polymer() {
    auto [polymer, formula] = addition_polymers[rand() % addition_polymers.size()];
    cout << "Draw the repeating unit of " << polymer << '\n';
    cout << "The chemical formula of " << polymer.substr(4, polymer.npos) << " is " << formula << '\n';
    cout << "(You may use Google to look up the monomer)\n";
    next();
    cout << "Use Google to confirm your answer\n";
}

void condensation_polymer() {
    auto [poly_data, link_data] = condensation_polymers[rand() % condensation_polymers.size()];
    auto [name, reactants] = poly_data;
    auto [link, product] = link_data;
    cout << "The polymer " << name << " is formed from the following polymers:\n";
    for (const auto &i : reactants) cout << i << '\n';
    cout << "Look up the reactants on Google for reference\n";
    next();
    cout << "Draw the repeating unit of " << name << '\n';
    next();
    cout << "Confirm your answer on Google\n";
    next();
    cout << "What kind of link is formed in this polymer?\n";
    string ans; cin >> ans;
    checkAnswerS(ans, link);
    cout << "What is the chemical formula of the molecule created during the polymerization of " << name << "?\n";
    cin >> ans;
    checkAnswerS(ans, product);
}