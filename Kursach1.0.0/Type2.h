#include <iostream>
#include <cmath>
using namespace std;
class type2 {
private:
    double A;
public:
    type2(double a1) {
        A = a1;
    }
    void Get_answer() {
        cout << "������� �������� � = 0" << endl;
    }
    void show() {
        cout << "��������� " << A << "*x^2 = 0" << endl;
    }
};