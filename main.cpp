#include <bits/stdc++.h>
#include <../input_handling.h>
#define f first
#define s second
using namespace std;

const vector<string> periodicTable = {
    "hydrogen",
    "helium",
    "lithium",
    "beryllium",
    "boron",
    "carbon",
    "nitrogen",
    "oxygen",
    "fluorine",
    "neon",
    "sodium",
    "magnesium",
    "aluminium",
    "silicon",
    "phosphor",
    "sulfur",
    "chlorine",
    "argon",
    "potassium",
    "calcium",
    "scandium",
    "titanium",
    "vanadium",
    "chromium",
    "manganese",
    "iron",
    "cobalt",
    "nickel",
    "copper",
    "zinc",
    "gallium",
    "germanium",
    "arsenic",
    "selenium",
    "bromine",
    "krypton",
    "rubidium",
    "strontium",
    "yttrium",
    "zirconium",
    "niobium",
    "molybdenum",
    "technetium",
    "ruthenium",
    "rhodium",
    "palladium",
    "silver",
    "cadmium",
    "indium",
    "tin",
    "antimony",
    "tellurium",
    "iodine",
    "xenon",
    "cesium",
    "barium",
    "lanthanum",
    "cerium",
    "praseodymium",
    "neodymium",
    "promethium",
    "samarium",
    "europium",
    "gadolinium",
    "terbium",
    "dysprosium",
    "holmium",
    "erbium",
    "thulium",
    "ytterbium",
    "lutetium",
    "hafnium",
    "tantalum",
    "tungsten",
    "rhenium",
    "osmium",
    "iridium",
    "platinum",
    "gold",
    "mercury",
    "thallium",
    "lead",
    "bismuth",
    "polonium",
    "astatine",
    "radon",
    "francium",
    "radium",
    "actinium",
    "thorium",
    "protactinium",
    "uranium",
    "neptunium",
    "plutonium",
    "americium",
    "curium",
    "berkelium",
    "californium",
    "einsteinium",
    "fermium",
    "mendelevium",
    "nobelium",
    "lawrencium",
    "rutherfordium",
    "dubnium",
    "seaborgium",
    "bohrium",
    "hassium",
    "meitnerium",
    "darmstadtium",
    "roentgenium",
    "copernicium",
    "nihonium",
    "flerovium",
    "moscovium",
    "livermorium",
    "tennessine",
    "oganesson"
};

const vector<pair<string, pair<int, int>>> nobleGases = {{"Og", {118, 0}}, {"Rn", {86, 0}}, {"Xe", {54, 0}}, {"Kr", {36, 0}}, {"Ar", {18, 5}}, {"Ne", {10, 3}}, {"He", {2, 1}}};

const vector<pair<string, int>> orbitals = {
    {"1s", 2},
    {"2s", 2},
    {"2p", 6},
    {"3s", 2},
    {"3p", 6},
    {"4s", 2},
    {"3d", 10},
    {"4p", 6}
};

void elecConfig() {
    int element = rand() % 36 + 1;
    string elementName = periodicTable[element - 1];
    int shortened = rand() % 2;
    int offset = 0;
    string ans = "";
    if (shortened == 1) {
        for (const auto &[symbol, data] : nobleGases) {
            if (data.f <= element) {
                ans += '[' + symbol + "] ";
                element -= data.f;
                offset = data.s;
                break;
            }
        }
    }
    for (int i = offset; i < orbitals.size(); i++) {
        pair<string, int> orbital = orbitals[i];
        if (element == 0) break;
        if (element < orbital.s) {
            ans += orbital.f + to_string(element);
            break;
        }
        ans += orbital.f + to_string(orbital.s) + " ";
        element -= orbital.s;
    }
    if (elementName == "chromium") {
        if (shortened == 1) ans = "[Ar] 4s1 3d5";
        else ans = "1s2 2s2 2p6 3s2 3p6 4s1 3d5";
    }
    if (elementName == "copper") {
        if (shortened == 1) ans = "[Ar] 4s1 3d10";
        else ans = "1s2 2s2 2p6 3s2 3p6 4s1 3d10";
    }
    if (shortened == 1) cout << "State the shortened electron configuration of " << elementName << " separated by spaces\n";
    else cout << "State the full electron configuration of " << elementName << " separated by spaces\n";
    string userin; getline(cin, userin);
    checkAnswerS(userin, ans);
}

void emissionSpectrum() {
    int init = rand() % 6 + 1;
    int final = rand() % 6 + 1;
    if (final == init) final++;
    string ans = "";
    if (init == 1 || final == 1) ans = "ultraviolet";
    else if (init == 2 || final == 2) ans = "visible";
    else ans = "infrared";
    if (init < final) cout << "After absorbing a photon, an electron jumps from n = " << init << " to n = " << final << "\nWhat kind of electromagnetic radiation was the photon?\n";
    else cout << "An electron drops from n = " << init << " to n = " << final << " and emits a photon\nWhat kind of electromagnetic radiation is the photon?\n";
    string userin; cin >> userin;
    checkAnswerS(userin, ans);
}

void calcFreq() {
    double c = 3e8, h = 6.63e-34;
    double freq = roundDouble(rand() % 1000 * 1000000000000, 3);
    double lambda = roundDouble(c / freq, 3);
    double energy = roundDouble(h * freq, 3);
    int whichone = rand() % 6;
    double ans;
    if (whichone == 0) {
        cout << "A ray of light has frequency " << freq << " Hz\nFind its wavelength\n";
        cin >> ans;
        checkAnswerD(ans, lambda);
    }
    else if (whichone == 1) {
        cout << "A ray of light has wavelength " << lambda << " m\nFind its frequency\n";
        cin >> ans;
        checkAnswerD(ans, freq);
    }
    else if (whichone == 2) {
        cout << "A ray of light has energy " << energy << " J\nFind its frequency\n";
        cin >> ans;
        checkAnswerD(ans, freq);
    }
    else if (whichone == 3) {
        cout << "A ray of light has frequency " << freq << " Hz\nFind its energy\n";
        cin >> ans;
        checkAnswerD(ans, energy);
    }
    else if (whichone == 4) {
        cout << "A ray of light has energy " << energy << " J\nFind its wavelength\n";
        cin >> ans;
        checkAnswerD(ans, lambda);
    }
    else {
        cout << "A ray of light has wavelength " << lambda << " m\nFind its energy\n";
        cin >> ans;
        checkAnswerD(ans, energy);
    }
}

void calcIE() {
    double c = 3e8, h = 6.63e-34, avogadro = 6.02e23;
    double freq = roundDouble(rand() % 1000 * 1000000000000, 3);
    double lambda = roundDouble(c / freq, 3);
    double energy = roundDouble(h * freq * avogadro / 1000, 3);
    int whichone = rand() % 4;
    double ans;
    if (whichone == 0) {
        cout << "An element has first ionization energy " << energy << " kJ\nFind its frequency of convergence\n";
        cin >> ans;
        checkAnswerD(ans, freq);
    }
    else if (whichone == 1) {
        cout << "An element has frequency of convergence " << freq << " Hz\nFind its ionization energy in kJ\n";
        cin >> ans;
        checkAnswerD(ans, energy);
    }
    else if (whichone == 2) {
        cout << "An element has first ionization energy " << energy << " kJ\nFind the wavelength required to ionize\n";
        cin >> ans;
        checkAnswerD(ans, lambda);
    }
    else {
        cout << "An element requires light with wavelength " << lambda << " m to ionize.\nFind its ionization energy in kJ\n";
        cin >> ans;
        checkAnswerD(ans, energy);
    }
}

void calcMolMass(){
    double n = roundDouble(rand() % 1000 / 100.0, 3);
    double M = roundDouble(rand() % 1000 / 10.0, 3);
    double m = roundDouble(n * M, 3);
    int whichone = rand() % 3;
    double ans;
    if (whichone == 0) {
        cout << "Bob has " << n << " moles of an element with molar mass " << M << " grams per mole. Find the mass of the sample of the element\n";
        cin >> ans;
        checkAnswerD(ans, m);
    }
    else if (whichone == 1) {
        cout << "Bob has " << m << " grams of an element with molar mass " << M << " grams per mole. Find the number of moles present\n";
        cin >> ans;
        checkAnswerD(ans, n);
    }
    else {
        cout << "Bob has " << n << " moles of an element which weighs " << m << " grams. Find the molar mass of the element\n";
        cin >> ans;
        checkAnswerD(ans, M);
    }
}

void calcAr() {
    double p = rand() % 100 / 100.0;
    double mass1 = rand() % 100, mass2 = rand() % 100;
    double ar = round(p * mass1 + (1.0 - p) * mass2);
    int whichone = rand() % 2;
    double ans;
    if (whichone == 0) {
        cout << p * 100 << "% of an elements isotopes have mass number " << mass1 << " and the rest have mass number " << mass2 << "\nWhat is the relative atomic mass of this element?\n";
        cin >> ans;
        checkAnswerD(ans, ar);
    }
    else {
        cout << "The relative atomic mass of an element is " << ar << " and its two isotopes have mass number " << mass1 << " and " << mass2 << "\nFind the percent abundance of the first isotope\n";
        cin >> ans;
        checkAnswerD(ans, p);
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
    checkAnswerS(ans, states[statechange].second);
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
    checkAnswerS(ans, filtration[type].first);
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
    {"What is the difference between relative atomic mass and mass number?", "Mass number is the mass of one specific isotope of an element.\nRelative atomic mass is the weighted average of all isotopes of an element."},
    {"What happens when you change the number of protons in an element?", "It becomes a different element"},
    {"What happens when you change the number of neutrons in an element?", "It becomes a different isotopes. Different isotopes have different physical properties but similar chemical properties\nUnstable isotopes can undergo radioactive decay"},
    {"What happens when you change the number of electrons in an element?", "It becomes a different ion. Different ions have similar physical properties and different chemical properties (reactivity changes)"},
    {"What does mass spectrometry separate ions by?", "Mass/charge ratio"},
    {"What is the difference between an energy level, a sublevel, and an orbital?", "An energy level contains multiple sublevels. They correpond to the shells in a Bohr diagram\nA subshell contains multiple orbitals and are classified by s, p, d, or f. Depending on their classification, they can hold 2, 6, 10, or 14 electrons\nAn orbital can hold up to 2 electrons with opposite spin"},
    {"What is an atoms ground state?", "Arrangement of electrons with the lowest energy"},
    {"What is an atoms excited state?", "Any electron configuration other than the ground state"},
    {"What is ionization energy?", "The amount of energy it takes to ionize an electron (bring it to energy level infinity where it leaves the atom)\nAtoms are exposed to specific wavelengths of light which excite the electrons away from the atom"},
    {"What are some factors that can affect ionization energy?", "Atoms with more energy levels have lower ionization energies because the electrons are further from the nucleus and experience less electrostatic attraction\nAtoms with more protons have higher ionization energies because there is more positive charge to attract the electrons"},
    {"How does ionization energy change across groups and periods?", "IE drops sharpy when moving to a new period (new energy level, less attraction)\nIE increases gradually across a period (more protons, stronger attraction)\nIE jumps down from half filled/fully filled sublevel (stable configuration, easy to reach)"},
    {"How does ionization energy change as you remove more and more electrons?", "It strictly increases. There are less electrons for the protons to attract so they experience stronger attraction and require more energy to overcome electrostatic attraction"}
};

void pickCueCard() {
    cout << "Cue Card\n";
    int card = rand() % cueCards.size();
    cout << cueCards[card].first << "\n";
    string proceed; cin >> proceed;
    cout << cueCards[card].second << '\n';
}

const vector<void(*)()> questions = {pickCueCard, pickFiltration, pickState, calcAr, calcFreq, emissionSpectrum, calcIE};

int main() {
    srand(time(0));
    while(true) {
        int activity = rand() % questions.size();
        questions[activity]();
        string cont; getline(cin >> ws, cont);
    }
    return 0;
}
