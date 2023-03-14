#include <iostream>

using namespace std;

void bilangan(int x)
{
    if (x % 2 == 0)
    {
        cout << "Bilangan Genap";
    }
    else {
        cout << "Bilangan Ganjil";
    }
}

int main()
{
    bilangan(4);
    return 0;
}
