#include <iostream>
#include <string>
#include "continue.h"

using std::cin, std::cout, std::string, std::getline, std::ws;

void next() {
    cout << "(type a to continue)\n";
    string cont; getline(cin >> ws, cont);
}