#include <iostream>
#include <vector>

using namespace std;

struct 3diagmtrx{
	vector<double> a;
	vector<double> b;
	vector<double> c;
};

vector<double> mthd_progonka(3diagmtrx A, vector<double> f);

