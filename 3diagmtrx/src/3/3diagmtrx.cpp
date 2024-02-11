#include "../src/3/3diagmtrx.h"
#include <vector>
using namespace std;




vector<double> method_progonka(diagmtrx& A, vector<double>& f) {
   
    int n = A.b.size();

    vector<double> x(n + 1, 0.0);
    vector<double> p(n, 0.0);
    vector<double> q(n, 0.0);

    p[1] = A.c[0]/ (-A.b[0]);
    q[1] = f[0] / A.b[0];

    for (int i = 1; i + 1 <= n; i++) {
        p[i+1] = A.c[i] / (-A.b[i] - A.a[i-1] * p[i]);
        q[i+1] = (A.a[i - 1] * q[i] - f[i]) / (-A.b[i] - A.a[i - 1] * p[i]);
    }
    
   
    x[n-1] = (f[n-1] - A.a[n-2] * q[n-1]) / (A.a[n-2] * p[n - 1] + A.b[n-1]);
    for (int i = n - 2; i >= 0; i--) {
        x[i] = p[i + 1] * x[i + 1] + q[i + 1];
    }

    return x;
}
}

