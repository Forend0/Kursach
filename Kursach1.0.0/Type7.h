#include <iostream>
#include <cmath>
using namespace std;
class type7 {
private:
    double B;
public:
    type7(double b1) {
        B = b1;
    }
    void Get_answer() {
        cout << "Корень уравнения: x = 0" << endl;
    }
    void show() {
        cout << "Уравнение " << B << "*x = 0" << endl;
    }
};