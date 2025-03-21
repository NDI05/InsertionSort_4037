#include <iostream>
using namespace std;

int arr[20];
int n;

void input(){
    while (true){
        cout << "Masukkan Jumlah Data Array: ":
        cin >> n;
        if (n <= 20){
            break;
        }else{
            cout << "\nArray yang anda masukkan maksimal 20 element \n";
        }
    }
    cout << endl;
    cout << "===============";
    cout << "Masukkaan Element Array";
    cout << "===============";
    for (int i=0l i<n; i++){
        cout << "Data ke-" << (i+1) << ": ";
        cin >> arr[i];
    }
}

void insertionSort(){
    int temp = arr[i];
    j = i -1;
}
