#include <iostream>
#include <cmath>
using namespace std;
class type6 {
private:
    double A, B, C;
public:
    type6(double a1, double b1, double c1) {
        A = a1;
        B = b1;
        C = c1;
    }
    void Get_answer() {
        double D = B * B - 4 * A * C;
        if (D < 0) {
            cout << "��������� �� ����� �������������� ������" << endl;
        }
        else {
            if (D == 0) {
                double x = ((-1) * B - sqrt(D)) / (2 * A);
                cout << "������ ���������: " << x << endl;
            }
            else {
                double x1 = ((-1) * B - sqrt(D)) / (2 * A);
                double x2 = ((-1) * B + sqrt(D)) / (2 * A);
                cout << "����� ���������: " << endl;
                cout << "X1 = " << x1 << endl << "X2 = " << x2 << endl;
            }
        }
    }
    void show() {
        cout << "��������� " << A << "*x^2 + " << B << "*x + " << C << " = 0" << endl;
    }
    void Get_answer_podbor() {
        double D = B * B - 4 * A * C;
        if (D < 0) {
            cout << "��������� �� ����� �������������� ������" << endl;
        }
        else {
            double min = abs(0 - A * (-20) * (-20) - B * (-20) - C);
            double x = -20;
            for (double i = -20; i < 20.01; i = i + 0.01) {
                double temp = abs(0 - A * (i) * (i)-B * i - C);
                if (temp < min) {
                    min = temp;
                    x = i;
                }
            }
            cout << "�����������, ���� �� ������ ���������: " << x << endl;
        }
    }
};