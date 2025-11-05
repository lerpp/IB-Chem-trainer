#include <bits/stdc++.h>
#include "includes/cue_cards.h"
#include "includes/filtration_types.h"
#include "includes/state_changes.h"
#include "includes/relative_atomic_mass.h"
#include "includes/molar_mass.h"
#include "includes/ionization_energy.h"
#include "includes/frequency_wavelength.h"
#include "includes/hydrogen_emission_spectrum.h"
#include "includes/electron_configurations.h"

using namespace std;

const vector questions = {
    pickCueCard,
    pickFiltration,
    pickState,
    calcAr,
    calcMolMass,
    calcFreq,
    emissionSpectrum,
    calcIE,
    elecConfig
};

int main() {
    srand(time(0));
    while(true) {
        int activity = rand() % questions.size();
        questions[activity]();
        string cont; getline(cin >> ws, cont);
    }
    return 0;
}
