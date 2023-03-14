#include <iostream>
using namespace std;

// menampilkan batas
void batas(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "=========================================" << endl;
    }
}

// manmpilkan menu
void menu()
{
    cout << "1. Nasi Goreng" << endl;
    cout << "2. Indomie Goreng" << endl;
    cout << "3. Indomie Kuah" << endl;
    cout << "4. Es Kopi" << endl;
}

// menentukan harga menu
int harga(int menu)
{
    if (menu == 1)
    {
        return 11000;
    }
    else if (menu == 2)
    {
        return 6000;
    }
    else if (menu == 3)
    {
        return 5000;
    }
    else if (menu == 4)
    {
        return 3000;
    }
}

// perhitungan total bayar
int total(int jumlah, int harga)
{
    return jumlah * harga;
}

int main()
{
    // Judul
    batas(1);
    cout << "- SELAMAT DATANG DI BURJO LARIS MANIS -" << endl;

    // Program
    int sum = 0;
    string lanjut;
    do
    {
        int pilih;
        batas(1);
        menu();
        batas(1);
        cout << "Pilih menu: ";
        cin >> pilih;
        int harga_makanan = harga(pilih);
        cout << "Harga: Rp " << harga_makanan << endl;
        cout << "Jumlah: ";
        int jumlah_porsi;
        cin >> jumlah_porsi;
        int bayar = total(jumlah_porsi, harga_makanan);
        sum += bayar;
        batas(1);
        cout << "Total harga: Rp " << sum << endl;
        batas(1);
        cout << "Apakah ada pesanan lagi?(y/n)";
        cin >> lanjut;
    } while (lanjut == "y");

    return 0;
}
