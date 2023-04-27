#include <iostream>
using namespace std;


int main()
{
    double D, Y1, Y2, X1, X2, A, B;
    cout << "Enter A and B:";
    cin >> A >> B;
    D = 4 * A * A - 8 * (A * A - B);
    if (D < 0){
        cout << "Error! Net korney\n";
        cout << "Error!!!\n";
    }
    else if (D>0){
        Y1 = (2 * A - sqrt(D)) / 4;
        Y2 = (2 * A + sqrt(D)) / 4;
        X1 = A - Y1;
        X2 = A - Y2;
        cout << "X1=" << X1 << " Y1=" << Y1 << " X2=" << X2 << " Y2=" << Y2 << '\n';
        cout << "Sum=" << X1 + Y1 << " " << X2 + Y2 << '\n';
        cout << "Sumsq=" << X1 * X1 + Y1 * Y1 << " " << X2 * X2 + Y2 * Y2 << '\n';
    }
    else
    {
        cout << "D=0";
        Y1 = (2 * A - sqrt(D)) / 4;
        X1 = A - Y1;
        cout << "X1=" << X1 << " Y1=" << Y1;
        cout << "Sum=" << X1 + Y1;
        cout << "Sumsq=" << X1 * X1 + Y1 * Y1;
    }

    return (0);
}
