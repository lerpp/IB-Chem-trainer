#include <bits/stdc++.h>
#include "filtration_types.h"
#include "input_handling.h"

#define f first
#define s second

using namespace std;

const vector<pair<string, vector<string>>> filtration = {
    {"filtration", {"water and sand", "water and wood pulp", "ethanol and sand", "mud and water", "tea and tea leaves", "iron filings and sand in water", "rice and water"}},
    {"evaporation", {"salt water", "sugar water", "ink and water", "lemon juice and water"}},
    {"distillation", {"salt water", "sugar water", "ink and water", "lemon juice and water"}},
    {"separation", {"water and oil", "water and ethanol", "oil and vinegar"}}
};

void pickFiltration() {
    int type = rand() % filtration.size();
    int substance = rand() % filtration[type].s.size();
    cout << "How can you separate " << filtration[type].s[substance];
    if (filtration[type].f == "distillation") cout << " without losing anything";
    cout << "?\n";
    string ans; cin >> ans;
    checkAnswerS(ans, filtration[type].f);
}