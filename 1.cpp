#include <iostream>

using namespace std;

class Time {
   private:
    int hour, minute;

   public:
    void setTime(int h, int m) {
        hour = h;
        minute = m;
    }

    void print() {
        cout << "H: " << hour << " M: " << minute << endl;
    }

    Time operator++() {
        Time tmp;
        tmp.minute = ++minute;
        return tmp;
    }

    Time operator--() {
        Time tmp;
        tmp.hour = --hour;
        return tmp;
    }
};

int main() {
    Time time1, time2;
    time1.setTime(12, 0);
    time1.print();
    ++time1;
    time1.print();

    time2.setTime(10, 41);
    time2.print();
    ++time2;
    time2.print();
    return 0;
}
