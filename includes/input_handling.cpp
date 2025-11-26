#include <iostream>
#include <string>
#include <sstream>
#include "input_handling.h"

#include <iomanip>

using std::cin, std::cout, std::string, std::setprecision, std::stringstream, std::scientific, std::ostringstream;

double roundDouble( double x, int n ) {
    stringstream ss;
    ss << scientific << setprecision( n - 1 ) << x;
    return stod( ss.str() );
}

void checkAnswerD(const double &input, const double &solution) {
    if (input == solution) cout << "Correct!\n";
    else cout << "Wrong! The answer is " << solution << '\n';
}

void checkAnswerI(const int &input, const int &solution) {
    if (input == solution) cout << "Correct!\n";
    else cout << "Wrong! The answer is " << solution << '\n';
}

void checkAnswerS(const string &input, const string &solution) {
    if (input == solution) cout << "Correct!\n";
    else cout << "Wrong! The answer is " << solution << '\n';
}

string doubleToString(double value) {
    ostringstream oss;
    oss << value;
    return oss.str();
}
