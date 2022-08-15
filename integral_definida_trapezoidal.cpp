#include <iostream>
#include <math.h>
#include <stdio.h>

# define f(t) 3*sin(4*t)

using namespace std;
class Calculo
{
    static const int m = 1000;
    double h;
    double t;
    double s;
    int k;
    public:
        void IntegralDefinida(double a, double b);
};

void Calculo::IntegralDefinida(double a, double b)
{
    h = (b-a)/m;
    t = a;  
    s = 0;
    for (k = 1; k <= m-1; k++) {
        t = t + h;
        s = s + f(t);
    }
    s = h*((f(a)+f(b))/2 + s);
    printf("  /%f\n",b);
    printf("  |  f(x)dx = %f\n", s);
    printf("  /%f\n",a);
}

int main()
{
    double t1, t2;
    try
    {
        cout << "Entre com o intervalo de integração de t1 ate t2:" << endl;
        cin >> t1;
        cin >> t2;
        Calculo objeto;
        objeto.IntegralDefinida(t1, t2);
    }
    catch (...) {
        cout << "Ocorreu uma exceção!" << endl;
        return -1;
    }
    return 0;
}