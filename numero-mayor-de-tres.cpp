#include <iostream>
using namespace std;

int main() {
    double n1, n2, n3;
    cout << "Numero 1: "; cin >> n1;
    cout << "Numero 2: "; cin >> n2;
    cout << "Numero 3: "; cin >> n3;

    if (n1 > n2 && n1 > n3) cout << "El mayor es: " << n1;
    else if (n2 > n3) cout << "El mayor es: " << n2;
    else cout << "El mayor es: " << n3;
    
    return 0;
}
