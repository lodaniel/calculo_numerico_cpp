#include <iostream>
#include <iomanip>
using namespace std;
float y(float x) {
    return 1 / (1 + x * x);
}

int main() {
    float x0, xn, h, s;
    int i, n;
    cout << "Entre com x0, xn, e o numero de subintervalos: ";
    cin >> x0 >> xn >> n;
    cout << fixed;
    h = (xn - x0) / n;
    s = y(x0) + y(xn);

    for (i = 1; i < n; i++) {
        if (i % 2 == 0) {
            s += 2 * y(x0 + i * h);
        } else {
            s += 4 * y(x0 + i * h);
        }
    }
    cout << "Resultado da integral: " << setw(6) << setprecision(4) << (h / 3) * s << endl;
    return 0;
}