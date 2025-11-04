#ifndef IB_TOOLS_INPUT_HANDLING_H
#define IB_TOOLS_INPUT_HANDLING_H
#include <string>
using namespace std;

double roundDouble(double x, int n);

void checkAnswerD(const double &input, const double &solution);
void checkAnswerI(const int &input, const int &solution);
void checkAnswerS(const string &input, const string &solution);

string doubleToString(double value);

#endif IB_TOOLS_INPUT_HANDLING_H
