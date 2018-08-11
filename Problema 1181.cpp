#include <iostream>
#include <iomanip>

using namespace std;

int main () {


    int fila;
    char operacion;

    float matriz[12][12];

    cin >> fila;
    cin >> operacion;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> matriz[i][j];
        }
    }

    float sol = 0.0;

    for (int j = 0; j < 12; ++j) {
        sol+= matriz[fila][j];
    }

    if (operacion == 'S') {
        cout << setprecision(1) << fixed << sol << endl;
    }else {
        cout << setprecision(1) << fixed << sol/12.0 << endl;
    }



return 0;
}
