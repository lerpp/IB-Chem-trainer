#include <iostream>
#include <string>
#include <vector>
#include "vsepr.h"
#include "input_handling.h"
#include "continue.h"

using std::cin, std::cout, std::string, std::vector, std::pair, std::getline, std::ws;

vector<pair<string, pair<pair<pair<string, string>, string>, pair<string, string>>>> compounds_vsepr = {
    {"H2S",{{{"tetrahedral","bent"}, "sp3"}, {"<<109.5","polar"}}},
    {"CF4",{{{"tetrahedral","tetrahedral"}, "sp3"}, {"109.5", "non-polar"}}},
    {"HCN",{{{"linear","linear"}, "sp"}, {"180","polar"}}},
    {"NF3",{{{"tetrahedral","trigonal pyramid"}, "sp3"}, {"<109.5","polar"}}},
    {"BCl3",{{{"trigonal planar", "trigonal planar"}, "sp2"}, {"120","non-polar"}}},
    {"NH2Cl",{{{"tetrahedral","trigonal pyramid"}, "sp3"}, {"<109.5","polar"}}},
    {"OF2",{{{"tetrahedral","bent"}, "sp3"}, {"<<109.5","polar"}}},
    {"PH3",{{{"tetrahedral","trigonal pyramid"}, "sp3"}, {"<109.5","polar"}}},
    {"BeCl2",{{{"linear","linear"}, "sp"}, {"180","non-polar"}}},
    {"XeF2",{{{"trigonal bipyramid","linear"}, "n/a"}, {"180","non-polar"}}},
    {"XeO4",{{{"tetrahedral","tetrahedral"}, "sp3"}, {"109.5", "non-polar"}}},
    {"ClBr3",{{{"trigonal bipyramid","t-shape"}, "n/a"}, {"<90","polar"}}},
    {"TeF6",{{{"octahedral","octahedral"}, "n/a"}, {"90","non-polar"}}},
    {"IF3",{{{"trigonal bipyramid","t-shape"}, "n/a"}, {"<90","polar"}}},
    {"[PCl6]-",{{{"octahedral","octahedral"}, "n/a"}, {"90","non-polar"}}},
    {"[IO4]-",{{{"tetrahedral","tetrahedral"}, "sp3"}, {"109.5", "non-polar"}}},
    {"[BrF4]-",{{{"octahedral","square planar"}, "n/a"}, {"90","non-polar"}}},
    {"[PCl4]-",{{{"trigonal bipyramid","seesaw"}, "n/a"}, {"<90, <120", "polar"}}},
    {"[FCl2]+",{{{"tetrahedral","bent"}, "sp3"}, {"<<109.5","polar"}}},
    {"[ClO3]-",{{{"tetrahedral","trigonal pyramid"}, "sp3"}, {"<109.5","polar"}}},
    {"[NO2]+",{{{"linear","linear"}, "sp"}, {"180","non-polar"}}},
    {"[NO2]-",{{{"trigonal planar","bent"}, "sp2"}, {"<120","polar"}}},
    {"[ClF2]+",{{{"tetrahedral","bent"}, "sp3"}, {"<<109.5","polar"}}},
    {"[SnCl3]-", {{{"tetrahedral","trigonal pyramid"}, "sp3"}, {"<109.5","polar"}}}
};

void find_vsepr() {
    auto [compound, data] = compounds_vsepr[rand() % compounds_vsepr.size()];
    auto [shape, properties] = data;
    auto [geometries, hybridization] = shape;
    auto [elec_geo, molec_geo] = geometries;
    auto [bond_angles, polarity] = properties;
    cout << "VSEPR: " << compound << "\n";
    cout << "Find the electron domain geometry of " << compound << '\n';
    string ans; getline(cin >> ws, ans);
    checkAnswerS(ans, elec_geo);
    if (ans != elec_geo && ans == molec_geo) cout << "Remember: electron domain geometry describes where the bonds/lone pairs are, not which domains are lone pairs and how they affect the geometry\n";
    next();
    cout << "Find the molecular geometry of " << compound << '\n';
    getline(cin >> ws, ans);
    checkAnswerS(ans, molec_geo);
    next();
    if (hybridization != "n/a") {
        cout << "State the hybridization of " << compound << '\n';
        getline(cin >> ws, ans);
        checkAnswerS(ans, hybridization);
        next();
    }
    cout << "State the bond angles of " << compound << " in ascending order\n(Use < and << for less than and much less than)\n";
    getline(cin >> ws, ans);
    checkAnswerS(ans, bond_angles);
    next();
    cout << "State the polarity of " << compound << "\n";
    getline(cin >> ws, ans);
    checkAnswerS(ans, polarity);
}
