#include <iostream>
#include <string>
#include <vector>
#include "intermol_forces.h"
#include "input_handling.h"
#include "continue.h"

using std::cin, std::cout, std::string, std::vector, std::pair;

vector<pair<string, vector<string>>> compounds_imfs = {
    {"H20", {"London dispersion forces", "dipole-dipole", "hydrogen bonding"}},
    {"NH3", {"London dispersion forces", "dipole-dipole", "hydrogen bonding"}},
    {"HCl", {"London dispersion forces", "dipole-dipole"}},
    {"HF", {"London dispersion forces", "dipole-dipole", "hydrogen bonding"}},
    {"CO2", {"London dispersion forces"}},
    {"O2", {"London dispersion forces"}},
    {"N2", {"London dispersion forces"}},
    {"CH4", {"London dispersion forces"}},
    {"SO2", {"London dispersion forces", "dipole-dipole"}},
    {"H2S", {"London dispersion forces", "dipole-dipole"}},
    {"Cl2", {"London dispersion forces"}},
    {"NO2", {"London dispersion forces", "dipole-dipole"}},
    {"PCl3", {"London dispersion forces", "dipole-dipole"}},
    {"CH3OH", {"London dispersion forces", "dipole-dipole", "hydrogen bonding"}},
    {"C2H5OH", {"London dispersion forces", "dipole-dipole", "hydrogen bonding"}},
    {"CH3COOH", {"London dispersion forces", "dipole-dipole", "hydrogen bonding"}},
    {"C6H6", {"London dispersion forces"}},
    {"CH3CHO", {"London dispersion forces", "dipole-dipole"}},
    {"CH3COCH3", {"London dispersion forces", "dipole-dipole"}},
    {"C2H6", {"London dispersion forces"}},
    {"C3H8", {"London dispersion forces"}},
    {"C4H10", {"London dispersion forces"}},
    {"CH3NH2", {"London dispersion forces", "dipole-dipole", "hydrogen bonding"}},
    {"CH3OCH3", {"London dispersion forces", "dipole-dipole"}},
    {"C2H5Cl", {"London dispersion forces", "dipole-dipole"}},
    {"CH2Cl2", {"London dispersion forces", "dipole-dipole"}},
    {"C3H7OH", {"London dispersion forces", "dipole-dipole", "hydrogen bonding"}},
    {"a mixture of I2 and CH3CH2OH", {"London dispersion forces", "dipole-dipole", "dipole-induced dipole", "hydrogen bonding"}},
    {"a mixture of CO2 and H2O", {"London dispersion forces", "dipole-dipole", "dipole-induced dipole", "hydrogen bonding"}},
    {"a mixture of C6H6 and CH2Cl2", {"London dispersion forces", "dipole-dipole", "dipole-induced dipole"}},
    {"a mixture of O2 and H2O", {"London dispersion forces", "dipole-dipole", "dipole-induced dipole", "hydrogen bonding"}}
};

vector<pair<pair<string, string>, string>> compounds_imfs_comparison = {
    {{"H2O", "H2S"}, "Both molecules are polar, but only H2O experiences hydrogen bonding"},
    {{"H2O", "CH4"}, "H2O is polar and experiences hydrogen bonding, while CH4 does not"},
    {{"C2H5OH", "CH3OCH3"}, "C2H5OH experiences hydrogen bonding, while CH3OCH3 does not"},
    {{"CH3COOH", "CH3CHO"}, "CH3COOH experiences hydrogen bonding, while CH3CHO does not"},
    {{"NH3", "CH4"}, "NH3 experiences hydrogen bonding, while CH4 does not"},
    {{"HF", "HCl"}, "HF experiences hydrogen bonding, while HCl does not"},
    {{"CH3OH", "C6H6"}, "CH3OH is polar and experiences hydrogen bonding, while C6H6 does not"},
    {{"CH2Cl2", "C6H6"}, "CH2CL2 is polar, while C6H6 is not"},
    {{"CH3COCH3", "C2H6"}, "CH3COCH3 is polar, while C2H6 is not"},
    {{"C4H10", "C3H8"}, "C4H10 is larger than C3H8, so it experiences increased London dispersion forces"},
    {{"CH3NH2", "CH4"}, "CH3NH2 is polar and experiences hydrogen bonding, while CH4 does not"},
    {{"C3H7OH", "C3H8"}, "C3H7OH is polar and experiences hydrogen bonding, while C3H8 does not"},
    {{"C2H5OH", "C2H6"}, "C2H5OH is polar and experiences hydrogen bonding, while C3H8 does not"},
    {{"SO2", "CO2"}, "SO2 is polar (bent shape) while CO2 is not (linear shape)"},
    {{"CH3COOH", "CH3OCH3"}, "CH3COOH experiences hydrogen bonding, while CH3OCH3 does not"},
    {{"C6H6", "O2"}, "C6H6 is a much larger molecule than O2, so it experiences increased London dispersion forces"},
    {{"C2H5OH", "C2H5Cl"}, "C2H5OH experiences hydrogen bonding, while C2H5Cl does not"}
};

void identify_imfs() {
    auto [compound, forces] = compounds_imfs[rand() % compounds_imfs.size()];
    cout << "What intermolecular forces do " << compound << " experience?\n";
    next();
    cout << "The intermoecular forces are:\n";
    for (const auto &i : forces) cout << i << "\n";
    next();
}

void compare_bp() {
    auto [comps, reason] = compounds_imfs_comparison[rand() % compounds_imfs_comparison.size()];
    auto [higher, lower] = comps;
    int order = rand() % 2;
    cout << "Which has a higher boiling point: ";
    if (order == 0) cout << "Which has a higher boiling point: " << higher << " or " << lower << "?\n";
    else cout << "Which has a higher boiling point: " << lower << " or " << higher << "?\n";
    string ans; cin >> ans;
    checkAnswerS(ans, higher);
    cout << "Why?\n" << reason << '\n';
}