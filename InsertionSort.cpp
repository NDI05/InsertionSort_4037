#include <iostream>
using namespace std;

int arr[20];
int n;

void input(){
    while (true){
        cout << "Masukkan Jumlah Data Array: ";
        cin >> n;
        if (n <= 20){
            break;
        }else{
            cout << "\nArray yang anda masukkan maksimal 20 element \n";
        }
    }
    cout << endl;
    cout << "=======================" << endl;
    cout << "Masukkaan Element Array" << endl;
    cout << "=======================" << endl;
    for (int i=0; i<n; i++){
        cout << "Data ke-" << (i+1) << ": ";
        cin >> arr[i];
    }
}

void insertionSort(){
    int temp;
    int j, i;
    j = i -1;
    while (j >=0 && arr[j] > temp){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = temp;
}

void display(){
    cout << endl;
    cout << "===============================" << endl;
    cout << "Total Pass =" << n-1 << endl;
    cout << "===============================" << endl;
    cout << "Eelemt Array yang telah tersusun" << endl;
    cout << "===============================" << endl;

    for (int j=0; j<n; j++){
        cout << arr[j] << endl;
    }
    cout  << endl;
}

int main(){
    input();
    insertionSort();
    display();
    system("pause");
    return 0;
}
