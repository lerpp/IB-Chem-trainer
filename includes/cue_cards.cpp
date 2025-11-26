#include <iostream>
#include <vector>
#include <string>
#include "cue_cards.h"

using std::cin, std::cout, std::string, std::vector, std::pair;

const vector<pair<string, string>> cueCards = {
    {"What is a pure substance?", "A pure substance contains only one type of particle. These particles can be molecules or atoms. For example, oxygen and water are both pure substances."},
    {"What is a mixture?", "A mixture contains more than one pure substance mixed together. Examples of mixtures include salt water and steel"},
    {"What is an element?", "An element is a substance containing only one kind of atom. Examples of elements include gold and hydrogen."},
    {"What is a molecule?", "A molecule is a particle with more than one type of atom. Example of molecules include table salt and water."},
    {"What is a homogeneous mixture?", "A homogeneous mixture is one where you cannot tell the constituent substances apart. It has one phase (appearance). Examples of homogeneous mixtures include chocolate milk and salt water"},
    {"What is a heterogeneous mixture?", "A heterogeneous mixture is one where you can tell the constituent substances apart. It has more than one phase (appearance). Examples of heterogeneous mixtures include water + oil and chocolate chip cookie batter"},
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
    {"What is the difference between an energy level, a sublevel, and an orbital?", "An energy level contains multiple sublevels. They correspond to the shells in a Bohr diagram\nA subshell contains multiple orbitals and are classified by s, p, d, or f. Depending on their classification, they can hold 2, 6, 10, or 14 electrons\nAn orbital can hold up to 2 electrons with opposite spin"},
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
