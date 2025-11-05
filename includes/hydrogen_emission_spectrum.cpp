#include <bits/stdc++.h>
#include "hydrogen_emission_spectrum.h"
#include "input_handling.h"

using namespace std;

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