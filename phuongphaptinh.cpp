#include<iostream>
#include<cmath>

using namespace std;

float f(float x) {
    return pow(x, 4) - x - 1;
}

int main() {
    float a, b;
    float saiSoAnDinh, nghiem;
    cout << "Nhập cận dưới dò khoảng phân li: ";
    cin >> a;
    cout << "Nhập cận trên tìm khoảng phân li: ";
    cin >> b;
    do {
        a += 0.000005;
        b += 0.000005;
    } while(f(a) * f(b) > 0);
    cout << a << endl << b;
    cout << "\nNhập sai số ấn định: ";
    cin >> saiSoAnDinh;
    float saiSo;
    do {
        float x0 = (a+b)/2;
        if(f(x0)*f(a) < 0) {
            b = x0;
        } else {
            a = x0;
        }
        saiSo = abs(b - a);
        nghiem = x0;
    } while(saiSo > saiSoAnDinh);
    cout << nghiem;
    return 0;
}