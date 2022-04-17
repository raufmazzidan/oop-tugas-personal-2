#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string nama;
    cout << "Masukkan nama = ";
    cin >> nama;
    
    for_each(nama.begin(), nama.end(), [](char & c) {
        c = ::tolower(c);
    });
    cout << "Huruf kecil = " << nama << endl;
    
    for_each(nama.begin(), nama.end(), [](char & c) {
        c = ::toupper(c);
    });
    cout << "huruf besar = " << nama << endl;
    
    return 0;
}
