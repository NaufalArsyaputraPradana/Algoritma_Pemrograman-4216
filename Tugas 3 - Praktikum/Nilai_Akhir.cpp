#include <iostream>
using namespace std;

int nilaiAkhir(int tugas, int uts, int uas)
{
    tugas = tugas * 40 / 100;
    uts = uts * 30 / 100;
    uas = uas * 30 / 100;
    return tugas + uts + uas;
}

void grade(int nilaiAkhir)
{
    if (nilaiAkhir >= 90 && nilaiAkhir <= 100)
    {
        cout << "A";
    }
    else if (nilaiAkhir >= 85 && nilaiAkhir < 90)
    {
        cout << "AB";
    }
    else if (nilaiAkhir >= 80 && nilaiAkhir < 85)
    {
        cout << "B";
    }
    else if (nilaiAkhir >= 75 && nilaiAkhir < 80)
    {
        cout << "BC";
    }
    else if (nilaiAkhir >= 60 && nilaiAkhir < 75)
    {
        cout << "C";
    }
    else if (nilaiAkhir >= 45 && nilaiAkhir < 60)
    {
        cout << "D";
    }
    else
    {
        cout << "E";
    }
}

int main()
{
    int tugas, uts, uas;

    cout << "Masukkan Nilai Tugas = ";
    cin >> tugas;
    cout << "Masukkan Nilai UTS = ";
    cin >> uts;
    cout << "Masukkan Nilai UAS = ";
    cin >> uas;

    cout << "Nilai Akhir = ";
    // grade(nilaiAkhir(tugas,uts,uas));
    int akhir = nilaiAkhir(tugas, uts, uas);
    grade(akhir);
    cout << endl;
}