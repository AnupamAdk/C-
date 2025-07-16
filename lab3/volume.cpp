#include <iostream>
#include <cmath>

#define PI 3.14

using namespace std;

class calcu {
    int l, b, h, r;

public:
    void getdata() {
        cout << "Enter length: ";
        cin >> l;
        cout << "Enter breadth: ";
        cin >> b;
        cout << "Enter height: ";
        cin >> h;
        cout << "Enter radius: ";
        cin >> r;
    }

    void volume(int h, int r) {
        cout << "The volume is: " << PI * pow(r, 2) * h << endl;
    }

    void volume() {
        cout << "The volume is: " << l * b * h << endl;
    }

    void volume(int l) {
        cout << "The volume is: " << pow(l, 3) << endl;
    }
};

int main() {
    calcu v;
    v.getdata();
    v.volume(v.h, v.r);
    v.volume();
    v.volume(v.l);
    return 0;
}

