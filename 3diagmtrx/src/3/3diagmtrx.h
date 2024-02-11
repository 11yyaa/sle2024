#include <iostream>
#include <vector>

using namespace std;

struct diagmtrx{
	vector<double> a;
	vector<double> b;
	vector<double> c;
};

vector<double> method_progonka(diagmtrx& A, vector<double>& f);

