#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int angka = 0;
start:
    cout << "Masukkan angka: ";
    cin >> angka;
    if (angka % 2 != 0)
    {
        cout << "Bilangan Ganjil \n";
    }
    if (angka % 2 == 0)
    {
        cout << "Bilangan Genap \n";
    }
    if (angka > 0)
    {
        cout << "Bilangan Positif \n";
    }
    if (angka < 0)
    {
        cout << "Bilangan Negatif \n";
    }
    bool isPrime = true;
    for (int i = 2; i <= (angka / 2); i++)
    {
        if (angka % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime == true)
    {
        cout << "Bilangan Prima \n";
    }
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
