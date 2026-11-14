#include <iostream>
using namespace std;

void myFunction() {
    int angka;
    int hasil = 1;

    cout << "masukkan angka : " << endl;
    cin >> angka;

    if (angka < 0) {
        cout << "angka tak boleh negatif" << endl;
    } else {
        for (int i = 1; i <= angka; i++) {
            hasil *= i;
        }
        cout << "hasil faktorial dari " << angka << " adalah: " << hasil << endl;
    }
}

int main () {  
    myFunction();
    return 0;
}
      