#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    string nominal[] = {"100.000", "250.000", "500.000"};
    int nominalSize = sizeof(nominal)/sizeof(nominal[0]);
    int choose;
start:
    cout << "Silakan pilih (1-" << nominalSize << ") jumlah uang yang akan anda ambil \n";
    for(int i = 0; i < nominalSize; i++){
        cout << i+1 <<". " << nominal[i] << "\n";
    }
    cout << "Pilihan: ";
    cin >> choose;
    cout << "\n";
    if((choose-1) >= 0 && (choose-1) < nominalSize){
        cout << "Silahkan ambil uang " << nominal[choose-1] << " anda \n";
    }else{
        cout << "Maaf, harap pilih sesuai nominal yang tersedia \n";
    }
akhir:
    string restart;
    cout << "Apakah anda ingin melakukan transaksi lagi? (Y/N) ";
    cin >> restart;
    if (restart == "Y" || restart == "y")
    {
        cout << "\n";
        goto start;
    }
    cout << "Terimakasih telah menggunakan ATM ini"
         << "\n";
    cout << "============================================";
}