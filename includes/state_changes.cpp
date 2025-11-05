#include <bits/stdc++.h>
#include "state_changes.h"
#include "input_handling.h"

#define f first
#define s second

using namespace std;

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
    cout << "What is the name of the change in state from " << states[statechange].f.f << " to " << states[statechange].f.s << "?\n";
    string ans; cin >> ans;
    checkAnswerS(ans, states[statechange].s);
}