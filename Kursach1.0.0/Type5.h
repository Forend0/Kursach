#include <iostream>
#include <cmath>
using namespace std;
class type5 {
private:
    double B, C;
public:
    type5(double b1, double c1) {
        B = b1;
        C = c1;
    }
    void Get_answer() {
        cout << "������ ���������: " << (-1) * (C / B) << endl;
    }
    void show() {
        cout << "��������� " << B << "*x + " << C << " = 0" << endl;
    }
    void Get_answer_podbor() {
        double min = abs(0 - B * (-20) - C);
        double x = -20;
        for (double i = -20; i < 20.01; i = i + 0.01) {
            double temp = abs(0 - B * (i)-C);
            if (temp < min) {
                min = temp;
                x = i;
            }
        }
        cout << "�����������, ���� �� ������ ���������: " << x << endl;
    }
};