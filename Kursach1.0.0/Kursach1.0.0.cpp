#include <iostream>
#include <cmath>
#include <Windows.h>
#include "type1.h"
#include "type2.h"
#include "type3.h"
#include "type4.h"
#include "type5.h"
#include "type6.h"
#include "type7.h"
#include "type8.h"
#include "TypeSelector.h"
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double A, B, C;
    
    int t;
    
    typeselector t1;
    t1.Set();
    t = t1.Selection();
    A = t1.ReturnA();
    B = t1.ReturnB();
    C = t1.ReturnC();

    /*cout << "Выберете тип уравнения(от 1 до 8) : ";
    cin >> t;*/

    if (t == 1) {
        /*cout << "Введите коэффициенты 1-го уравнения A, B и C через пробел: " << endl;
        cin >> A >> B >> C;*/
        type1 eq1;
        eq1.show();
        eq1.Get_answer();
    }
    if (t == 2) {
        /*cout << "Введите коэффициенты 2-го уравнения A, B и C через пробел: " << endl;
        cin >> A >> B >> C;*/
        type2 eq2(A);
        eq2.show();
        eq2.Get_answer();
    }
    if (t == 3) {
        /*cout << "Введите коэффициенты 3-го уравнения A, B и C через пробел: " << endl;
        cin >> A >> B >> C;*/
        type3 eq3(C);
        eq3.show();
        eq3.Get_answer();
    }
    if (t == 4) {
        /*cout << "Введите коэффициенты 4-го уравнения A, B и C через пробел: " << endl;
        cin >> A >> B >> C;*/
        type4 eq4(A, C);
        eq4.show();
        eq4.Get_answer();
        //eq4.Get_answer_podbor();
    }
    if (t == 5) {
        /*cout << "Введите коэффициенты 5-го уравнения A, B и C через пробел: " << endl;
        cin >> A >> B >> C;*/
        type5 eq5(B, C);
        eq5.show();
        eq5.Get_answer();
        //eq5.Get_answer_podbor();
    }
    if (t == 6) {
        /*cout << "Введите коэффициенты 6-го уравнения A, B и C через пробел: " << endl;
        cin >> A >> B >> C;*/
        type6 eq6(A, B, C);
        eq6.show();
        eq6.Get_answer();
        //eq6.Get_answer_podbor();
    }
    if (t == 7) {
        /*cout << "Введите коэффициенты 7-го уравнения A, B и C через пробел: " << endl;
        cin >> A >> B >> C;*/
        type7 eq7(B);
        eq7.show();
        eq7.Get_answer();
    }
    if (t == 8) {
        /*cout << "Введите коэффициенты 8-го уравнения A, B и C через пробел: " << endl;
        cin >> A >> B >> C;*/
        type8 eq8(A, B);
        eq8.show();
        eq8.Get_answer();
        //eq8.Get_answer_podbor();
    }
    
    /*cout << "Введите коэффициенты 1-го уравнения A, B и C через пробел: " << endl;
    cin >> A >> B >> C;
    type1 eq1;

    cout << "Введите коэффициенты 2-го уравнения A, B и C через пробел: " << endl;
    cin >> A >> B >> C;
    type2 eq2(B);

    cout << "Введите коэффициенты 3-го уравнения A, B и C через пробел: " << endl;
    cin >> A >> B >> C;
    type3 eq3(C);

    cout << "Введите коэффициенты 4-го уравнения A, B и C через пробел: " << endl;
    cin >> A >> B >> C;
    type4 eq4(A, C);

    cout << "Введите коэффициенты 5-го уравнения A, B и C через пробел: " << endl;
    cin >> A >> B >> C;
    type5 eq5(B, C);

    cout << "Введите коэффициенты 6-го уравнения A, B и C через пробел: " << endl;
    cin >> A >> B >> C;
    type6 eq6(A, B, C);

    cout << "Введите коэффициенты 7-го уравнения A, B и C через пробел: " << endl;
    cin >> A >> B >> C;
    type7 eq7(B);

    cout << "Введите коэффициенты 8-го уравнения A, B и C через пробел: " << endl;
    cin >> A >> B >> C;
    type8 eq8(A, B);

    eq1.show();
    eq1.Get_answer();

    eq2.show();
    eq2.Get_answer();

    eq3.show();
    eq3.Get_answer();

    eq4.show();
    eq4.Get_answer();
    eq4.Get_answer_podbor();

    eq5.show();
    eq5.Get_answer();
    eq5.Get_answer_podbor();

    eq6.show();
    eq6.Get_answer();
    eq6.Get_answer_podbor();

    eq7.show();
    eq7.Get_answer();

    eq8.show();
    eq8.Get_answer();
    eq8.Get_answer_podbor();*/
    return 0;
}