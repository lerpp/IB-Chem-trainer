#include <iostream>
#include <vector>
#include <string>
#include "electron_configurations.h"
#include "input_handling.h"

#define f first
#define s second

using std::cin, std::cout, std::string, std::vector, std::pair, std::to_string;

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
    "phosphorus",
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
                ans += '[' + symbol + "]";
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
            if (ans != "") ans += " ";
            ans += orbital.f + to_string(element);
            break;
        }
        if (ans != "") ans += " ";
        ans += orbital.f + to_string(orbital.s);
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