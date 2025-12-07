#include <iostream>
#include <string>
#include <vector>
#include "lewis_diagram.h"
#include "continue.h"

using std::cin, std::cout, std::string, std::vector, std::pair;

vector<pair<string, string>> compounds_lewis = {
    {"H20",
R"(
 |O|
 / \
H   H
  )"
},
    {"CO2", R"(
 _     _
|O==C==O|
)"},
    {"CH4",
    R"(
   H
   |
H--C--H
   |
   H
    )"},
    {"NH3",
    R"(
  H
  |
  N|
 / \
H   H
  )"},
    {"HCl", R"(
H-Cl)"},
    {"SO2", R"(
 _     _
|O==S==O|
)"},
    {"C2H6", R"(
   H  H
   |  |
H--C--C--H
   |  |
   H  H)"},
    {"C2H5OH", R"(
   H  H
   |  |  _
H--C--C--O|
   |  |   \
   H  H    H)"},
    {"CH3COOH", R"(
        _
   H   |O--H
   |   /
H--C--C
   |  \\
   H   O
)"},
    {"C3H8", R"(
   H  H  H
   |  |  |
H--C--C--C--H
   |  |  |
   H  H  H
)"},
    {"C2H4", R"(
H  H
|  |
C==C
|  |
H  H
)"},
    {"C6H6", R"(
   H       H
    \     /
     C---C
    //    \\
H--C       C--H
    \     /
     C===C
    /     \
   H       H)"},
    {"XeF4", R"(
F    F
 \  /
 |Xe|
 /  \
F    F
)"},
    {"PCl5", R"(
     _
    |Cl|
 _   |   _
|Cl--P--Cl|
 ^^ / \ ^^
 |Cl| |Cl|
  ^^   ^^
)"},
    {"PCl3", R"(
  _  _   _
|Cl--P--Cl|
 ^^  |  ^^
    |Cl|
     ^^
)"},
};

void draw_lewis() {
    auto [formula, diagram] = compounds_lewis[rand() % compounds_lewis.size()];
    cout << "Draw the Lewis dot diagram for " << formula << "\n(Note: due to display restrictions, please google the correct diagram to further confirm your answer)\n";
    next();
    cout << diagram << '\n';
}