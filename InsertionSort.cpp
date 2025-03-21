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
    while (j >=0 && arr[j] > tempt){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = temp;
}

void display(){
    cout << endl;
    cout << "===============================";
    cout << "Total Pass =" << n-1 << end;
    cout << "===============================";
    cout << "Eelemt Array yang telah tersusun";
    cout << "===============================";

    
}
