#include <iostream>
using namespace std;           

int main() {
    int a;
    

    cout << "Masukkan nilai a: ";
    cin >> a;

   if (a > 90) {
        cout << "Nilai Bagus" << endl;
    } else if (a >= 75) {
        cout << "Nilai Cukup" << endl;
    } else {
        cout << "Nilai Kurang" << endl;
    }
    
    return 0;
}
