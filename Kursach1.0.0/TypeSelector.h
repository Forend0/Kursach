#include <iostream>
#include <cmath>
using namespace std;
class typeselector {
public:
	double A, B, C;
	void Set() {
		cout << "Введите коэффициенты уравнения A, B и C через пробел: " << endl;
		cin >> A >> B >> C;
	}
	int Selection() {
		if (A == 0) {
			if (B == 0) {
				if (C == 0) {
					return 1;
				}
				else {
					return 3;
				}
			}
			else {
				if (C == 0) {
					return 7;
				}
				else {
					return 5;
				}
			}
		}
		else {
			if (B == 0) {
				if (C == 0) {
					return 2;
				}
				else {
					return 4;
				}
			}
			else {
				if (C == 0) {
					return 8;
				}
				else {
					return 6;
				}
			}
		}
	}
	double ReturnA() {
		return A;
	}
	double ReturnB() {
		return B;
	}
	double ReturnC() {
		return C;
	}
};