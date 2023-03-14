#include <iostream>
using namespace std;

//function
int hitung_tigabilangan(int x, int y, int z)
{
    return x*y*z;
}
int main()
{
    cout << hitung_tigabilangan(4,3,2) << endl;
    cout << hitung_tigabilangan(7,6,5)<< endl;
    cout << hitung_tigabilangan(1,9,8)<< endl << endl;
    return 0;
}

