cmake_minimum_required(VERSION 4.0)
project(ib_chem_tool)

set(CMAKE_CXX_STANDARD 20)

add_executable(ib_chem_tool main.cpp
        includes/input_handling.cpp
        includes/input_handling.h
        includes/cue_cards.cpp
        includes/cue_cards.h
        includes/filtration_types.cpp
        includes/filtration_types.h
        includes/state_changes.cpp
        includes/state_changes.h
        includes/relative_atomic_mass.cpp
        includes/relative_atomic_mass.h
        includes/molar_mass.cpp
        includes/molar_mass.h
        includes/ionization_energy.cpp
        includes/ionization_energy.h
        includes/frequency_wavelength.cpp
        includes/frequency_wavelength.h
        includes/hydrogen_emission_spectrum.cpp
        includes/hydrogen_emission_spectrum.h
        includes/electron_configurations.cpp
        includes/electron_configurations.h)
