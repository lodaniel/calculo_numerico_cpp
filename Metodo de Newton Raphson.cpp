#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
float func(float x){
    return x*sin(x);
}
float deriv_func(float x){
    return sin(x)+(x*cos(x));
}
int main(){
    int itera,maxitera;
    float delta,xi,xf,erro;
    cout << "Entre com chute inicial, erro tolerado e iteracao maxima:"
    << endl;
    cin >> xi >> erro >> maxitera;
    cout << fixed;
    for (itera=1;itera<=maxitera;itera++){
        delta = func(xi)/deriv_func(xi);
        xf = xi - delta;
        cout << "Iteracao" << setw(3) << itera
        << ",  x = " << setw(9) << setprecision(6)
        << xf << endl;
        if (fabs(delta) < erro){
            cout << "Apos " << setw(3) << itera
            << "  iteracoes a raiz eh: "
            << setw(8) << setprecision(6) << xf;
            return 0;
        }
        xi = xf;
    }
    cout << "Iteracoes insuficientes,"
    << "nao convergiu, infelizmente" << endl;
    return 1;
}