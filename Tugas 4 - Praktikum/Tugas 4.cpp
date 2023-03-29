#include <iostream>
using namespace std;

/*bubbleSort membandingkan setiap pasangan elemen berturut turut dari array
dan menukar posisi jika urutannya salah*/
void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
/*printArray digunakan untuk mencetak array ke main*/
void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
	/*angka random*/
    int arr[] = {27, 79, 33, 11, 45, 9, 82};
    /*(sizeof()/sizeof()) berfungsi untuk menghtiung jumlah angka dalam array*/
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Angka Array Awal : ";
    printArray(arr, n);

    bubbleSort(arr, n);

	cout << endl;
    cout << "Array Sudah Urut : ";
    printArray(arr, n);

    return 0;
}
