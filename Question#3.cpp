#include <iostream>
using namespace std;

class Printer {
public:
    void print(int x) {
        cout << "Integer: " << x << endl;
    }

    void print(double y) {
        cout << "Double: " << y << endl;
    }
};

int main() {
    Printer p;

    p.print(10);
    p.print(15.75);

    return 0;
}
