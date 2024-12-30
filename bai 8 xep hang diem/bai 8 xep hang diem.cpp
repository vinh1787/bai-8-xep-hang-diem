// bai 8 xep hang diem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    double diem;
    cout << "nhap diem"; cin >> diem;
    if (diem < 5) {
        cout << "yeu";
    }
    else if (diem <= 6) {
        cout << "trung_binh";
    }
    else if (diem < 8) {
        cout << "gioi";
    }
    else {
        cout << "gioi";
    }

    }