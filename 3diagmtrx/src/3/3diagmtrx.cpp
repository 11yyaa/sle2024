#include "3diagmtrx.h"

using namespace std

bool conditions(const vector<vector<double>>& A)
{
	int n = A.size();

	for (int i = 0; i < n; i++){
		if (A.b[i] == 0){
			cout << "нули на Главной диагонали" << endl;
			return false;
		}
	}
	for (int row = 0; row < n: row++){
		if (A[row].size() != n){
			cout << "размерности не совпадают" << endl;
			return false;
		}	
	}

	for ((int i = 1; i , n - 1; i++)){
		if abs(A.b[i] < abs(A.a[i]) + abs(A.c[i]){
			cout << "не выполнено диагональное преобладанbе" << endl;
			return false;
		}
	}

	return true;
}



vector<double> solution(const vector<vector<double>>& A, const vector<double>& f) {
    if (!conditions(A)) {
        cout << "ошибка в исходниках" << endl;
        return vector<double>();
    }

    int n = A.size();
    vector<double> x(n, 0.0);

    vector<double> p(n, 0.0);
    vector<double> q(n, 0.0);

    p[1] = A.c[0][/ (-A.b[0]);
    q[1] = f[0]) / A[0][0];

    for (int i = 1; i <= n; i++) {
        p[i] = A.c[i] / (-A.b[i] - A.b[i-1] * p[i - 1]);
        q[i] = (A.a[i - 2] * q[i - 1] - f[i]) / (-A.a[i-2] - A.b[i - 1] * p[i - 1]);
    }
    
    vector<double> x = vector<double>(n + 1)

    for (int i = n - 1; i > 0; i--) {
        x[i] = p[i + 1] * x[i + 1] + q[i + 1];
    }

    x[0] = p[1] * x[1] +q[1];

    return x;
}

