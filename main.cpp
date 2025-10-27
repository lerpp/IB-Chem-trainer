#include <bits/stdc++.h>

using namespace std;

void calcAr() {
    double p = rand() % 100 / 100.0;
    double mass1 = rand() % 100, mass2 = rand() % 100;
    double ar = round(p * mass1 + (1.0 - p) * mass2);
    int whichone = rand() % 2;
    double ans;
    char cont;
    if (whichone == 0) {
        cout << p * 100 << "% of an elements isotopes have mass number " << mass1 << " and the rest have mass number " << mass2 << "\nWhat is the relative atomic mass of this element?\n";
        cin >> ans;
        if (ans == ar) cout << "Correct!\n";
        else cout << "Wrong! The answer is " << ar << '\n';
        cin >> cont;
    }
    else {
        cout << "The relative atomic mass of an element is " << ar << " and its two isotopes have mass number " << mass1 << " and " << mass2 << "\nFind the percent abundance of the first isotope\n";
        cin >> ans;
        if (ans == p * 100) cout << "Correct!\n";
        else cout << "Wrong! The answer is " << p * 100 << '%\n';
        cin >> cont;
    }
}

const vector<pair<pair<string, string>, string>> states  = {
    {{"solid", "liquid"}, "melting"},
    {{"liquid", "gas"}, "evaporation"},
    {{"gas", "liquid"}, "condensation"},
    {{"liquid", "solid"}, "freezing"},
    {{"solid", "gas"}, "sublimation"},
    {{"gas", "solid"}, "deposition"}
};

void pickState() {
    int statechange = rand() % 6;
    cout << "What is the name of the change in state from " << states[statechange].first.first << " to " << states[statechange].first.second << "?\n";
    string ans; cin >> ans;
    if (ans == states[statechange].second) cout << "Correct!\n";
    else cout << "Wrong! The answer is " << states[statechange].second << "\n";
    cin >> ans;
}

const vector<pair<string, vector<string>>> filtration = {
    {"filtration", {"water and sand", "water and wood pulp", "ethanol and sand", "mud and water", "tea and tea leaves", "iron filings and sand in water", "rice and water"}},
    {"evaporation", {"salt water", "sugar water", "ink and water", "lemon juice and water"}},
    {"distillation", {"salt water", "sugar water", "ink and water", "lemon juice and water"}},
    {"separation", {"water and oil", "water and ethanol", "oil and vinegar"}}
};

void pickFiltration() {
    int type = rand() % filtration.size();
    int substance = rand() % filtration[type].second.size();
    cout << "How can you separate " << filtration[type].second[substance];
    if (filtration[type].first == "distillation") cout << " without losing anything";
    cout << "?\n";
    string ans; cin >> ans;
    if (ans == filtration[type].first) cout << "Correct!\n";
    else cout << "Wrong! The answer is " << filtration[type].first << '\n';
    cin >> ans;
}

const vector<pair<string, string>> cueCards = {
    {"What is a pure substance?", "A pure substance contains only one type of particle. These particles can be molecules or atoms. For example, oxygen and water are both pure substances."},
    {"What is a mixture?", "A mixture contains more than one pure substance mixed together. Examples of mixtures include salt water and steel"},
    {"What is an element?", "An element is a substance containing only one kind of atom. Examples of elements include gold and hydrogen."},
    {"What is a molecule?", "A molecule is a particle with more than one type of atom. Example of molecules include table salt and water."},
    {"What is a homogeneous mixture?", "A homoegeneous mixture is one where you cannot tell the constituent substances apart. It has one phase (appearance). Examples of homogeneous mixtures include chocolate milk and salt water"},
    {"What is a hetereogeneous mixture?", "A heterogeneous mixture is one where you can tell the constituent substances apart. It has more than one phase (appearance). Examples of heterogeneous mixtures include water + oil and chocolate chip cookie batter"},
    {"What is filtration?", "Filtration is separation of a heterogeneous mixture (solid & liquid) by filtering particles by size, weight, etc. For example, you can filter sand and water"},
    {"What is evaporation?", "Evaporation is heating up a liquid until it evaporates, leaving behind residue. For example, you can get salt from saltwater by evaporating the water."},
    {"What is distillation?", "Distillation is heating up a liquid until it evaporates, leaving behind residue, and condensing the evaporated liquid. For example, you can separate water and salt through distillation."},
    {"What is separation?", "Separation occurs when two substances have different densities, so they naturally separate on their own. A separatory funnel may be used to drain one substance. For example, you can separate water and oil."},
    {"What is chromatography?", "Chromatography utilises a solvent. Substances are separated based off their solubility in the solvent."},
    {"What are 2 indicators of a pure substance?", "Narrow, high melting point (higher than impure substance) and low separation in chromatography"},
{"What is the difference between boiling and evaporation?", "Boiling occurs at boiling point and occurs throughout the liquid. Evaporation occurs only at the surface and happens at various temperatures"},
    {"What are the 4 parts of the Kinetic Molecular Theory?", "All matter is made up of small particles.\nThese particles have kinetic energy.\n Kinetic energy is proportional to temperature and magnitude of motion.\nCollisions between particles are elastic (no loss in kinetic energy)"},
    {"What is the difference between kinetic energy, temperature, and heat?", "Kinetic energy is energy relating to movement.\nTemperature is the average kinetic energy.\nHeat is the amount of thermal energy a substance is transferring to its environment"},
    {"What is the difference between Kelvin and Celsius?", "Kelvin and Celsius follow the same scale, but Kelvin is 273 degrees higher (to get to Kelvin from Celcius, add 273)"},
    {"What are the relative masses of the proton, neutron, and electron?", "1, 1, and 1/2000"},
    {"What is the difference between relative atomic mass and mass number?", "Mass number is the mass of one specific isotope of an element.\nRelative atomic mass is the weighted average of all isotopes of an element."}
};

void pickCueCard() {
    cout << "Cue Card\n";
    int card = rand() % cueCards.size();
    cout << cueCards[card].first << "\n";
    string proceed; cin >> proceed;
    cout << cueCards[card].second << '\n';
    cin >> proceed;
}

const vector<void(*)()> questions = {pickCueCard, pickFiltration, pickState, calcAr};

int main() {
    srand(time(0));
    while(true) {
        int activity = rand() % questions.size();
        questions[activity]();
    }
    return 0;
}
