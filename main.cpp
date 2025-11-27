#include <iostream>
#include <vector>
#include <ctime>
#include <string>
#include "includes/cue_cards.h"
#include "includes/acceleration_velocity_time.h"
#include "includes/velocity_distance_time.h"
#include "includes/graph_analysis.h"
#include "includes/add_vectors.h"
#include "includes/projectile_motion.h"
#include "includes/fma.h"
#include "includes/continue.h"
#include "includes/force_pairs.h"
#include "includes/friction.h"
#include "includes/grav_attraction.h"
#include "includes/spring_force.h"
#include "includes/connected_carts.h"
#include "includes/hanging_weight_pulley.h"
#include "includes/wfd.h"
#include "includes/mech_energy.h"
#include "includes/power.h"
#include "includes/energy_types.h"
#include "includes/efficiency.h"
#include "includes/heat_capacity.h"
#include "includes/latent_heat.h"
#include "includes/calorimeter.h"
#include "includes/iqt.h"
#include "includes/veq.h"
#include "includes/evit.h"
#include "includes/material_resistance.h"
#include "includes/ohms_law.h"

using std::vector, std::string, std::cin, std::cout, std::ws, std::pair;

const vector all_questions = {
    pickCueCard,
    analyzeGraph,
    vdt,
    avt,
    addVector,
    projectile_motion,
    fma,
    force_pairs,
    sfriction,
    kfriction,
    two_body_grav,
    fm_grav_field,
    grav_field,
    spring_force,
    connected_carts,
    hang_weight_pulley,
    frict_hang_weight_pulley,
    wfdcos,
    kinetic_en,
    grav_potential_en,
    spring_en,
    pick_question,
    pwt,
    pfv,
    crane_lift_block,
    choose_energy,
    efficiency,
    heat_cap,
    latent_heat,
    calorimeter,
    iqt,
    veq,
    evit,
    mat_resist,
    ohms_law,
    piv,
    pir,
    pvr
};

const vector cards = {pickCueCard};
const vector graphs = {analyzeGraph};

const vector kinematics = {
    vdt,
    avt,
    addVector,
    projectile_motion,
};

const vector dynamics = {
    fma,
    force_pairs,
    sfriction,
    kfriction,
    two_body_grav,
    fm_grav_field,
    grav_field,
    spring_force,
    connected_carts,
    hang_weight_pulley,
    frict_hang_weight_pulley,
};

const vector energy = {
    wfdcos,
    kinetic_en,
    grav_potential_en,
    spring_en,
    pick_question,
    pwt,
    pfv,
    crane_lift_block,
    choose_energy,
    efficiency,
    heat_cap,
    latent_heat,
    calorimeter
};

const vector electricity = {
    iqt,
    veq,
    evit,
    mat_resist,
    ohms_law,
    pir,
    pvr,
    piv
};

const vector<pair<vector<void(*)()>, string>> units = {
    {cards, "Cue cards"},
    {graphs, "Graph analysis"},
    {kinematics, "Kinematics"},
    {dynamics, "Dynamics"},
    {energy, "Energy"},
    {electricity, "Electricity"},
    {all_questions, "Everything"},
};

int main() {
    srand(time(0));
    cout << "Select your desired activity:\n";
    for (int i = 1; i <= units.size(); i++) {
        cout << units[i - 1].second << " (" << i << ")\n";
    }
    int unit; cin >> unit;
    vector activity = units[unit - 1].first;
    while(true) {
        int task = rand() % activity.size();
        activity[task]();
        next();
    }
    return 0;
}
