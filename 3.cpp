#include <iostream>
#include <string>

using namespace std;

class Shape {
   public:
    int width, height;
    string name;

    void setProps(int w, int h) {
        width = w;
        height = h;
    }

    void getInfo() {
        cout << "Jenis Shape\t: " << name << endl;
        cout << "Lebar\t\t: " << width << endl;
        cout << "Tinggi\t\t: " << height << endl;
    }
};

class Rectangle : public Shape {
   public:
    Rectangle() { name = "Rectangle"; }

    void getArea() {
        cout << "Luas\t\t: Lebar x tinggi = " << width << "x"
             << height << " = " << width * height << " \n";
    }
};

int main() {
    Rectangle r;
    r.setProps(7, 5);
    r.getInfo();
    r.getArea();
    return 0;
}
