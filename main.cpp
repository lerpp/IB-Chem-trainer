#include <iostream>
#include <vector>
#include <string>
#include "includes/continue.h"
#include "includes/cue_cards.h"
#include "includes/filtration_types.h"
#include "includes/state_changes.h"
#include "includes/relative_atomic_mass.h"
#include "includes/molar_mass.h"
#include "includes/ionization_energy.h"
#include "includes/frequency_wavelength.h"
#include "includes/hydrogen_emission_spectrum.h"
#include "includes/electron_configurations.h"
#include "includes/comps_molmass.h"
#include "includes/percent_composition.h"
#include "includes/emp_formula.h"
#include "includes/molecular_formula.h"
#include "includes/hydrates.h"
#include "includes/concentration.h"
#include "includes/ideal_gases.h"
#include "includes/lewis_diagram.h"
#include "includes/vsepr.h"
#include "includes/intermol_forces.h"
#include "includes/polymers.h"
#include "includes/change_types.h"
#include "includes/heat.h"
#include "includes/calorimetry.h"
#include "includes/hess_law.h"
#include "includes/net_equation_entropy.h"
#include "includes/gibbs_free_energy.h"

using std::vector, std::cin, std::cout, std::getline, std::ws, std::string, std::pair;

const vector all_questions = {
    pickCueCard,
    pickFiltration,
    pickState,
    calcAr,
    calcMolMass,
    calcFreq,
    emissionSpectrum,
    calcIE,
    elecConfig,
    find_comp_molmass,
    percent_comp,
    emp_formula,
    mol_formula,
    find_hydrate,
    cnv,
    cvcv,
    comb_gas_law,
    ideal_gas_law,
    draw_lewis,
    find_vsepr,
    identify_imfs,
    compare_bp,
    addition_polymer,
    condensation_polymer,
    identify_change,
    qnct,
    qnl,
    calorimetry,
    hess_law,
    net_entropy,
    gibbs_free_energy
};

const vector structure1 = {
    pickFiltration,
    pickState,
    calcAr,
    calcMolMass,
    calcFreq,
    emissionSpectrum,
    calcIE,
    elecConfig,
    find_comp_molmass,
    percent_comp,
    emp_formula,
    mol_formula,
    find_hydrate,
    cnv,
    cvcv,
    comb_gas_law,
    ideal_gas_law
};

const vector structure2 = {
    draw_lewis,
    find_vsepr,
    identify_imfs,
    compare_bp,
    addition_polymer,
    condensation_polymer
};

const vector reactivity1 = {
    identify_change,
    qnct,
    qnl,
    calorimetry,
    hess_law,
    net_entropy,
    gibbs_free_energy
};

const vector cuecards = {
    pickCueCard
};

const vector<pair<vector<void(*)()>, string>> units = {
    {cuecards, "Cue cards"},
    {structure1, "Structure 1"},
    {structure2, "Structure 2"},
    {reactivity1, "Reactivity 1"},
    {all_questions, "Everything"}
};

int main() {
    srand(time(0));
    cout << "Select your desired topic\n";
    for (int i = 1; i <= units.size(); i++) cout << units[i - 1].second << " (" << i << ")\n";
    int unit; cin >> unit;
    vector activity = units[unit - 1].first;
    while(true) {
        int task = rand() % activity.size();
        activity[task]();
        next();
    }
    return 0;
}
