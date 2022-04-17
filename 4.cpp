#include <iostream>
#include <string>

using namespace std;

class Binatang {
   protected:
    string nama, suara;
    void setInfo(string n, string s) {
        nama = n;
        suara = s;
    }
   public:
    virtual void getInfo() = 0;
};

class Kucing : public Binatang {
   public:
    Kucing() {
        setInfo("Kucing", "meow meow");
    };
    void getInfo() {
        cout << "Informasi Binatang \n";
        cout << "Nama\t: " << nama << "\n";
        cout << "Suara\t: \"" << suara << "\"\n";
    }
};

class Bebek : public Binatang {
   public:
    Bebek() {
       setInfo("Bebek", "kukuruyuk");
    };
    void getInfo() {
        cout << "Informasi Binatang \n";
        cout << "Nama\t: " << nama << "\n";
        cout << "Suara\t: \"" << suara << "\"\n";
    }
};

int main() {
    Kucing garfield;
    Bebek donald;
    
    cout << "POLIMORFISME 2" << endl << "------------------" << endl;
    garfield.getInfo();
    cout << endl;
    donald.getInfo();
    
    return 0;
}
