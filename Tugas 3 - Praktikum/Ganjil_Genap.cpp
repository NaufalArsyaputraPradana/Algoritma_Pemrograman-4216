#include <iostream>
using namespace std;

// Procedure
void bilangan(int x)
{
    if (x % 2 == 1)
    {
        cout << "Ganjil" << endl;
    }
    else if (x % 2 == 0 && x != 0)
    {
        cout << "Genap" << endl;
    }
    else
    {
        cout << "Nol" << endl;
    }
}

// function
string angka(int x)
{
    if (x % 2 == 1)
    {
        return "Ganjil\n";
    }
    else if (x % 2 == 0 && x != 0)
    {
        return "Genap\n";
    }
    else
    {
        return "Nol\n";
    }
}

int main()
{
    // output procedure
    int x;
    cout << "Masukkan Bilangan = ";
    cin >> x;
    cout << "Bilangan Anda Adalah ";
    bilangan(x);

    // output function
    cout << "===============================\n";
    cout << "Masukkan Bilangan = ";
    cin >> x;
    cout << "Bilangan Anda Adalah ";
    cout << angka(x);

    return 0;
}