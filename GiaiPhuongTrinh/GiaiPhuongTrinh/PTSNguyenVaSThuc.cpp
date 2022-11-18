#include "PTSNguyenVaSThuc.h"
#include <iostream>

using namespace std;

void NhapHeCoSo_SoThuc(double& A, double& B) {
    cout << "He Co So A : "; cin >> A;
    cout << "He Co So B : "; cin >> B;
}

void NhapHeCoSo_SoThuc(double& A, double& B, double& C, double& D) {
    cout << "He Co So A : "; cin >> A;
    cout << "He Co So B : "; cin >> B;
    cout << "He Co So C : "; cin >> C;
    cout << "He Co So D : "; cin >> D;
}

int Giaipt1_Thuc(double a, double b, double& x)
{
    if (a == 0)
    {
        if (b == 0)
            return 1; //xuat ra vo so nghiem
        else
            return 2; //xuat ra vo nghiem
    }
    else {
        x = -b / a;
        return 3; //xuat ra x
    }
}

int Giaipt2_Thuc(double a, double b, double c, double d, double& x)
{
    if (a == 0) {
        x = (b - d) / c;
        return 1; // xuat ra x
    }
    else if (c == 0) {
        x = (d - b) / a;
        return 2; //xuat ra x
    }
    else if (a == 0 && c == 0) {
        if (b == d)
            return 3; // xuat ra vo so nghiem
        else
            return 4; // xuat ra vo nghiem
    }
    else {
        x = (d - b) / (a - c);
        return 5; //xuat ra x
    }

}

void XuatNghiem_PT1_Thuc(double a, double b)
{
    double x;
    Giaipt1_Thuc(a, b, x);
    switch (Giaipt1_Thuc(a, b, x))
    {
    case 3:
        cout << "X = " << x << endl;
        break;
    case 1:
        cout << "Vo so nghiem\n";
        break;
    case 2:
        cout << "Vo nghiem\n";
        break;
    }
}

void XuatNghiem_PT2_Thuc(double a, double b, double c, double d)
{
    double x;
    Giaipt2_Thuc(a, b, c, d, x);
    switch (Giaipt2_Thuc(a, b, c, d, x))
    {
    case 1: case 2: case 5:
        cout << "X = " << x << endl;
        break;
    case 3:
        cout << "Vo so nghiem \n";
        break;
    case 4:
        cout << "Vo nghiem \n";
        break;
    }

}

