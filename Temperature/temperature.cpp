/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdio.h>
// #include <conio.h>
#include <stdlib.h>
#include <cstring>

using namespace std;

int main()
{
    int pilihan, satuan;
    long long int reaumur, kelvin, fahrenheit, celsius, c, celsius2, fahrenheit2, celsius3, kelvin2, kelvin3, fahrenheit3, reaumur2, reaumur3, reaumur4, kelvin4, fahrenheit4, celsius4;
    char lagi, satuanPenjelas[20], satuanPenjelasAlias[5];

    do
    {
        // clear screen
        if (system("CLS")) system("clear");
        cout << "===================================================================================================" << endl;
        cout << "=                                    -> Program Konversi Suhu <-                                  =" << endl;
        cout << "===================================================================================================" << endl;
        cout << "                                  - Dapat Mengonversi Segala Suhu -                                " << endl;
        cout << "                                - Saling Mengonversi Satu Sama Lain -                              " << endl;
        cout << "---------------------------------------------------------------------------------------------------" << endl;

        cout << endl;
        cout << endl;
        cout << "Masukan suhu : ";
        cin >> c;
        cout << "----------------------------   || Pilih Berdasarkan Angka || ------------------------------------- " << endl;
        cout << "|                                      1. Fahrenheit                                              |" << endl;
        cout << "|                                      2. Celsius                                                 |" << endl;
        cout << "|                                      3. Kelvin                                                  |" << endl;
        cout << "|                                      4. Reaumur                                                 |" << endl;
        cout << "-------------------------------------------------------------------------------------------------- " << endl;
        cout << endl;
        cout << c << "°..." << endl;
        cout << "Suhu " << c << " dalam satuan : ";
        cin >> satuan;

        cout << endl;

        // cabang
        switch (satuan)
        {
        case 1:
            strcpy(satuanPenjelas, "Fahrenheit");
            strcpy(satuanPenjelasAlias, "F");
            break;
        case 2:
            strcpy(satuanPenjelas, "Celsius");
            strcpy(satuanPenjelasAlias, "C");
            break;
        case 3:
            strcpy(satuanPenjelas, "Kelvin");
            strcpy(satuanPenjelasAlias, "K");
            break;
        case 4:
            strcpy(satuanPenjelas, "Reaumur");
            strcpy(satuanPenjelasAlias, "Re");
            break;
        default:
            cout << "null" << endl;
            break;
        }

        // clear screen
        if (system("CLS")) system("clear");
        cout << "--------------------------   || List Suhu Yang Bisa Dikonversi ||    -------------------------- " << endl;
        cout << "|                                      1. Reaumur                                              |" << endl;
        cout << "|                                      2. Kelvin                                               |" << endl;
        cout << "|                                      3. Fahrenheit                                           |" << endl;
        cout << "|                                      4. Celsius                                              |" << endl;
        cout << "----------------------------------------------------------------------------------------------- " << endl;
        cout << "                               (Pilih Berdasarkan Angka)                                        " << endl;
        cout << endl;
        cout << c << "°" << satuanPenjelasAlias << " = ... " << endl;
        cout << "Dari " << satuanPenjelas << " ingin di konversi ke ... ";
        cin >> pilihan;

        cout << endl;

        // calculation from celsius to ...
        reaumur = c * 4 / 5;
        kelvin = c + 273.15;
        fahrenheit = (c * 9 / 5) + 32;
        celsius = c;

        // calculation from fahrenheit to ...
        celsius2 = (c - 32) * 5 / 9;
        fahrenheit2 = c;
        kelvin2 = (c + 459.67) * 5 / 9;
        reaumur2 = (c - 32) * 4 / 9;

        // calculation from kelvin to ...
        celsius3 = c - 273.15;
        kelvin3 = c;
        fahrenheit3 = (c * 9 / 5) - 459.67;
        reaumur3 = (c - 273.15) * 4 / 5;

        // calculation from reaumur to ...
        reaumur4 = c;
        kelvin4 = c * 1.25 + 273.15;
        fahrenheit4 = c * 2.25 + 32;
        celsius4 = c * 1.25;


        // *fahrenheit => celcius
        if (satuan == 1 && pilihan == 4) {
            cout << c << "°F setara dengan " << celsius2 << "°C" << endl;

            // *fahrenheit => fahrenheit
        } else if (satuan == 1 && pilihan == 3) {
            cout << c << "°F setara dengan " << fahrenheit2 << "°F" << endl;

            // *fahrenheit => kelvin
        } else if (satuan == 1 && pilihan == 2) {
            cout << c << "°F setara dengan " << kelvin2 << "°K" << endl;

            // *fahrenheit => reaumur
        } else if (satuan == 1 && pilihan == 1) {
            cout << c << "°F setara dengan " << reaumur2 << "°Re" << endl;
        }

        // *celsius => fahrenheit
        if (satuan == 2 && pilihan == 3) {
            cout << c << "°C setara dengan " << fahrenheit << "°F" << endl;

            // *celsius => celsius
        } else if (satuan == 2 && pilihan == 4) {
            cout << c << "°C setara dengan " << celsius << "°C" << endl;

            // *celsius => kelvin
        } else if (satuan == 2 && pilihan == 2) {
            cout << c << "°C setara dengan " << kelvin << "°K" << endl;

            // *celsius => reaumur
        } else if (satuan == 2 && pilihan == 1) {
            cout << c << "°C setara dengan " << reaumur << "°Re" << endl;
        }

        // *kelvin => celsius
        if (satuan == 3 && pilihan == 4) {
            cout << c << "°K setara dengan " << celsius3 << "°C" << endl;

            // *kelvin => fahrenheit
        } else if (satuan == 3 && pilihan == 3) {
            cout << c << "°K setara dengan " << fahrenheit3 << "°F" << endl;

            // *kelvin => kelvin
        } else if (satuan == 3 && pilihan == 2) {
            cout << c << "°K setara dengan " << kelvin3 << "°K" << endl;

            // *kelvin => reaumur
        } else if (satuan == 3 && pilihan == 1) {
            cout << c << "°K setara dengan " << reaumur3 << "°Re" << endl;
        }

        // *reaumur => celsius
        if (satuan == 4 && pilihan == 4) {
            cout << c << "°Re setara dengan " << celsius4 << "°C" << endl;

            // *reaumur => kelvin
        } else if (satuan == 4 && pilihan == 2) {
            cout << c << "°Re setara dengan " << kelvin4 << "°K" << endl;

            // *reaumur => fahrenheit
        } else if (satuan == 4 && pilihan == 3) {
            cout << c << "°Re setara dengan " << fahrenheit4 << "°F" << endl;

            // *reaumur => reamur
        } else if (satuan == 4 && pilihan == 1) {
            cout << c << "°Re setara dengan " << reaumur4 << "°Re" << endl;
        }

        // !menampilkan pesan error
        if (satuan > 4 && pilihan > 4 || satuan < 4 && pilihan > 4 || satuan > 4 && pilihan < 4) {
            cout << "Angka tidak ada di list, tolong periksa kembali! " << endl;
        }

        cout << endl;
        cout << "Apakah anda ingin melakukan konversi lagi ? [Y/n] ";
        cin >> lagi;

        // clear screen
        if (system("CLS")) system("clear");

    } while (lagi == 'y' || lagi == 'Y');

    cout << "\t Terimakasih Telah Menggunakan Program Konversi Suhu " << endl;
    cout << "\t\t Semoga Hari Anda Menyenangkan " << endl;

    return 0;
}

// NOTE :  °C = \370C
// tanda 'derajat' tidak bisa di baca di terminal jadi diganti code itu

// !percobaaan

// !bentar matiin dulu
// if ( pilihan == 1 ) {
//     cout<<celsius<<"°C setara dengan "<<reaumur<<"°R"<<endl;
// } else if ( pilihan == 2 ) {
//     cout<<celsius<<"°C setara dengan "<<kelvin<<"°K"<<endl;
// } else if ( pilihan == 3 ) {
//     cout<<celsius<<"°C setara dengan "<<fahrenheit<<"°F"<<endl;
// } else if ( pilihan == 4 && satuan == 2 ) {
//     cout<<celsius<<"°C setara dengan "<<celsius<<"°C"<<endl;
// }

// !awalan dari sini
// int main()
// {
//     float fahrenheit, celsius;

//     cout << "Enter the temperature in Celsius : ";
//     cin >> celsius;
//     fahrenheit = (celsius * 9.0) / 5.0 + 32;
//     cout << "The temperature in Celsius    : " << celsius << endl;
//     cout << "The temperature in Fahrenheit : " << fahrenheit << endl;
//     return 0;
// }
