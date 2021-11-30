#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float range = 0;
start:
    cout << "Jumlah Baris? ";
    cin >> range;
    cout << "\n";
    if (int(range) % 2 == 0)
    {
        cout << "Masukkan bilangan ganjil bukan genap!"
             << "\n"
             << "\n";
        goto akhir;
    }
    for (int i = 1; i <= range; i++)
    {
        if (i == round(range / 2))
        {
            for (int j = 1; j <= range; j++)
            {
                cout << "*";
            }
            cout << "\n";
        }
        else
        {
            for (int j = 1; j <= floor(range / 2); j++)
            {
                cout << " ";
            }
            cout << "*"
                 << "\n";
        }
    }
    cout << "\n";
akhir:
    string restart;
    cout << "Apakah anda ingin menggunakan ulang program? (Y/N) ";
    cin >> restart;
    cout << "\n";
    if (restart == "Y" || restart == "y")
    {
        goto start;
    }
    cout << "Terimakasih telah menggunakan program ini 😁"
         << "\n";
    cout << "============================================";
}