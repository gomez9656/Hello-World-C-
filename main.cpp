#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Hola 1\n" << "Hello world!\n" << endl;

    int _var1;
    char var2;
    char letra;
    float var3;
    double var4;
    bool var5;
    double var6 = 5.3e3;
    double var7 = 7.7e-6;
    unsigned int var8 = 3;


    _var1 = 2;
    var2 = 'c';
    var3 = 3.4;
    var4 = 6.7;
    var5 = true;
    letra = 65;

    cout << _var1 << endl;
    cout << var2 << endl;
    cout << var3 << endl;
    cout << var4 << endl;
    cout << var5 << endl;
    cout << var6 << endl;
    cout << var7 << endl;
    cout << letra << endl;

    cout << sizeof(int) << endl;

    cout << "Ingrese un numero";
    cin >> var8;
    cout << "El valor es: " << var8 << endl;

    double potencia = pow(5, 5);
    double raiz = sqrt(100.0);
    double seno = sin(0.5);
    double coseno = cos(1);

    return 0;
}
