#include <iostream>
#include <cmath>
using namespace std;
class type3 {
private:
    double C;
public:
    type3(double c1) {
        C = c1;
    }
    void Get_answer() {
        cout << "Корней нет" << endl;
    }
    void show() {
        cout << C << " = 0" << endl;
    }
};