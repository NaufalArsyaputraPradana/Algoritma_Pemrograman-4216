#include <iostream>
using namespace std;

int main()
{
    string nama,nim;
    int umur;
    cout << "<--> BIODATA <-->\n\nMasukkan Nama Anda : ";
    getline(cin,nama);
    cout << "Masukkan NIM Anda : ";
    getline(cin,nim);
    cout << "Umur : ";
    cin >> umur;

    cout << endl << endl;

    cout << nama << endl << nim << endl << umur << endl << endl;

    if (umur%2 == 0) {
        cout << "Umur Anda Bilangan Genap";
    }
    else {
        cout << "Umur Anda Bilangan Ganjil";
    }
    cout << endl << endl;

    return 0;
}
