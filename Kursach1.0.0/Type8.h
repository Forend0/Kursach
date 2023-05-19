#include <iostream>
#include <cmath>
using namespace std;
class type8 {
private:
    double A, B;
public:
    type8(double a1, double b1) {
        A = a1;
        B = b1;
    }
    void Get_answer() {
        double x = ((-1) * B) / A;
        cout << "Корни уравнения: " << endl;
        cout << "X1 = 0" << endl << "X2 = " << x << endl;
    }
    void show() {
        cout << "Уравнение " << A << "*x^2 + " << B << "*x = 0 " << endl;
    }
    void Get_answer_podbor() {
        double min = abs(0 - A * (-20) * (-20) - B * (-20));
        double x = -20;
        for (double i = -20; i < 20.01; i = i + 0.01) {
            if (i != 0) {
                double temp = abs(0 - A * i * i - B * (i));
                if (temp < min) {
                    min = temp;
                    x = i;
                }
            }
        }
        cout << "Приближенно, один из корней уравнения: " << x << endl;
    }
};