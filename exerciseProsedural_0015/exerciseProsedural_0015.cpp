#include <iostream>
using namespace std;

double rerata(double a, double b) {
    return (a + b) / 2;
}

string status(double r) {
    if (r >= 20) {
        return "lulus";
    }
    else {
        return "gagal";
    }
}

string status2(double r, double n) {
    if (r >= 70 && n >= 80) {
        return "lulus";
    }
    else {
        return "gagal";
    }
}

string status3(double r, double n) {
    if (r >= 70 || n >= 80) {
        return "lulus";
    }
    else {
        return "gagal";
    }
}

int main() {
    double nilaiMath, nilaiinggris;


    cout << "Masukkan nilai matematika : ";
    cin >> nilaiMath;
    cout << "Masukkan nilai bahasa inggris : ";
    cin >> nilaiinggris;

    //rerata = (nilaiMath + nilaiBindo)/2;

    //rata = rerata(nilaiMath, nilaiBindo);
    //st = status(rerata(nilaiMath, nilaiBindo));

    // if (rata >= 70){
    //     status = "lulus";
    // }else {
    //      status = "gagal";
    // }

    cout << "Nilai rata-ratanya : " << rerata(nilaiMath, nilaiinggris);
    cout << "\nStatus kelulusannya : " << status(rerata(nilaiMath, nilaiinggris));
    cout << "\nStatus kelulusannya : " << status2(rerata(nilaiMath, nilaiinggris), nilaiMath);
    cout << "\nStatus kelulusannya : " << status3(rerata(nilaiMath, nilaiinggris), nilaiMath);
}