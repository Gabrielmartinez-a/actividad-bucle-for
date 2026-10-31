#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Numero: ";
    cin >> num;

    for (int i = 1; i <= 12; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
    return 0;
}
