#include <iostream>
#include <string>
#include <vector>
#include "change_types.h"
#include "input_handling.h"

using std::cin, std::cout, std::string, std::vector, std::pair;

vector<pair<string, string>> changes = {
    {"breaking glass", "physical"},
    {"shredding paper", "physical"},
    {"melting ice", "physical"},
    {"chopping wood", "physical"},
    {"cutting hair", "physical"},
    {"boiling water", "physical"},
    {"cracking eggs", "physical"},
    {"iron rusting", "chemical"},
    {"wood burning", "chemical"},
    {"human metabolism", "chemical"},
    {"cooking an egg", "chemical"},
    {"baking a cake", "chemical"},
    {"a rotting banana", "chemical"},
    {"fireworks going off", "chemical"},
    {"uranium decaying into thorium", "nuclear"},
    {"alpha decay", "nuclear"},
    {"beta decay", "nuclear"},
    {"gamma decay", "nuclear"}
};

void identify_change() {
    auto [change, type] = changes[rand() % changes.size()];
    cout << "Is " << change << " an example of physical, chemical, or nuclear change?\n";
    string ans; cin >> ans;
    checkAnswerS(ans, type);
}