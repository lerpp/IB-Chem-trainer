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

using std::vector, std::cin, std::getline, std::ws, std::string;

const vector questions = {
    pickCueCard,
    pickFiltration,
    pickState,
    calcAr,
    calcMolMass,
    calcFreq,
    emissionSpectrum,
    calcIE,
    elecConfig,
    find_comp_molmass
};

int main() {
    srand(time(0));
    while(true) {
        int activity = rand() % questions.size();
        questions[activity]();
        next();
    }
    return 0;
}
