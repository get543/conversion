#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>

using namespace std;

void errorMessage(long int satuan, long int pilihan)
{
  if (satuan > 4 && pilihan > 4 || satuan < 4 && pilihan > 4 || satuan > 4 && pilihan < 4)
  {
    cout << "Angka tidak ada di list atau anda memasukan selain angka, tolong periksa kembali! " << endl;
  }
}

void temperatureTable()
{
  cout << " ----------------------------- || List Suhu Yang Bisa Dikonversi || ----------------------------- " << endl;
  cout << "|                                          1. Reaumur                                            |" << endl;
  cout << "|                                          2. Kelvin                                             |" << endl;
  cout << "|                                          3. Fahrenheit                                         |" << endl;
  cout << "|                                          4. Celsius                                            |" << endl;
  cout << " ------------------------------------------------------------------------------------------------ " << endl;
  cout << "                                     (Pilih Berdasarkan Angka)                                    " << endl;
}

void reamurCalculation(long int satuan, long int pilihan, float c)
{
  float reaumur4, kelvin4, fahrenheit4, celsius4;

  // calculation from reaumur to ...
  reaumur4 = c;
  kelvin4 = c * 1.25 + 273.15;
  fahrenheit4 = c * 2.25 + 32;
  celsius4 = c * 1.25;

  // *reaumur => celsius
  if (satuan == 1 && pilihan == 4)
  {
    cout << c << "°Re setara dengan " << celsius4 << "°C" << endl;
  }
  // *reaumur => kelvin
  else if (satuan == 1 && pilihan == 2)
  {
    cout << c << "°Re setara dengan " << kelvin4 << "°K" << endl;
  }
  // *reaumur => fahrenheit
  else if (satuan == 1 && pilihan == 3)
  {
    cout << c << "°Re setara dengan " << fahrenheit4 << "°F" << endl;
  }
  // *reaumur => reamur
  else if (satuan == 1 && pilihan == 1)
  {
    cout << c << "°Re setara dengan " << reaumur4 << "°Re" << endl;
  }

}

void kelvinCalculation(long int satuan, long pilihan, float c)
{
  float reaumur3, kelvin3, fahrenheit3, celsius3;

  // calculation from kelvin to ...
  celsius3 = c - 273.15;
  kelvin3 = c;
  fahrenheit3 = (c * 9 / 5) - 459.67;
  reaumur3 = (c - 273.15) * 4 / 5;

  // *kelvin => celsius
  if (satuan == 2 && pilihan == 4)
  {
    cout << c << "°K setara dengan " << celsius3 << "°C" << endl;
  }
  // *kelvin => fahrenheit
  else if (satuan == 2 && pilihan == 3)
  {
    cout << c << "°K setara dengan " << fahrenheit3 << "°F" << endl;
  }
  // *kelvin => kelvin
  else if (satuan == 2 && pilihan == 2)
  {
    cout << c << "°K setara dengan " << kelvin3 << "°K" << endl;
  }
  // *kelvin => reaumur
  else if (satuan == 2 && pilihan == 1)
  {
    cout << c << "°K setara dengan " << reaumur3 << "°Re" << endl;
  }
}

void fahrenheitCalculation(long int satuan, long int pilihan, float c)
{
  float reaumur2, kelvin2, fahrenheit2, celsius2;

  // calculation from fahrenheit to ...
  celsius2 = (c - 32) * 5 / 9;
  fahrenheit2 = c;
  kelvin2 = (c + 459.67) * 5 / 9;
  reaumur2 = (c - 32) * 4 / 9;

  // *fahrenheit => celcius
  if (satuan == 3 && pilihan == 4)
  {
    cout << c << "°F setara dengan " << celsius2 << "°C" << endl;
  }
  // *fahrenheit => fahrenheit
  else if (satuan == 3 && pilihan == 3)
  {
    cout << c << "°F setara dengan " << fahrenheit2 << "°F" << endl;

  }
  // *fahrenheit => kelvin
  else if (satuan == 3 && pilihan == 2)
  {
    cout << c << "°F setara dengan " << kelvin2 << "°K" << endl;
  }
  // *fahrenheit => reaumur
  else if (satuan == 3 && pilihan == 1)
  {
    cout << c << "°F setara dengan " << reaumur2 << "°Re" << endl;
  }
}

void celciusCalculation(long int satuan, long int pilihan, float c)
{
  float reaumur, kelvin, fahrenheit, celsius;

  // calculation from celsius to ...
  reaumur = c * 4 / 5;
  kelvin = c + 273.15;
  fahrenheit = (c * 9 / 5) + 32;
  celsius = c;

  // *celsius => fahrenheit
  if (satuan == 4 && pilihan == 3)
  {
    cout << c << "°C setara dengan " << fahrenheit << "°F" << endl;
  }
  // *celsius => celsius
  else if (satuan == 4 && pilihan == 4)
  {
    cout << c << "°C setara dengan " << celsius << "°C" << endl;
  }
  // *celsius => kelvin
  else if (satuan == 4 && pilihan == 2)
  {
    cout << c << "°C setara dengan " << kelvin << "°K" << endl;
  }
  // *celsius => reaumur
  else if (satuan == 4 && pilihan == 1)
  {
    cout << c << "°C setara dengan " << reaumur << "°Re" << endl;
  }
}

int main()
{
  long int pilihan, satuan;
  float c;
  char lagi, satuanPenjelas[20], satuanPenjelasAlias[5];

  do
  {
    // clear screen
    if (system("CLS")) system("clear");
    cout << "=====================================================================================================" << endl;
    cout << "=                                    -> Program Konversi Suhu <-                                    =" << endl;
    cout << "=====================================================================================================" << endl;
    cout << "                                    - Dapat Mengonversi Segala Suhu -                                " << endl;
    cout << "                                  - Saling Mengonversi Satu Sama Lain -                              " << endl;
    cout << "-----------------------------------------------------------------------------------------------------" << endl;

    cout << endl;
    cout << endl;

    cout << "Masukan suhu : ";
    cin >> c;

    // clear screen
    if (system("CLS")) system("clear");
    temperatureTable();
    cout << endl;
    cout << c << "°..." << endl;
    cout << "Suhu " << c << " dalam satuan : ";
    cin >> satuan;

    cout << endl;

    // cabang
    switch (satuan)
    {
      case 1:
        strcpy(satuanPenjelas, "Reaumur");
        strcpy(satuanPenjelasAlias, "Re");
        break;
      case 2:
        strcpy(satuanPenjelas, "Kelvin");
        strcpy(satuanPenjelasAlias, "K");
        break;
      case 3:
        strcpy(satuanPenjelas, "Fahrenheit");
        strcpy(satuanPenjelasAlias, "F");
        break;
      case 4:
        strcpy(satuanPenjelas, "Celsius");
        strcpy(satuanPenjelasAlias, "C");
        break;
      default:
        cout << "null" << endl;
        break;
    }

    // clear screen
    if (system("CLS")) system("clear");
    temperatureTable();
    cout << endl;
    cout << c << "°" << satuanPenjelasAlias << " = ... " << endl;
    cout << "Dari " << satuanPenjelas << " ingin di konversi ke ... ";
    cin >> pilihan;

    cout << endl;

    reamurCalculation(satuan, pilihan, c);

    kelvinCalculation(satuan, pilihan, c);

    fahrenheitCalculation(satuan, pilihan, c);

    celciusCalculation(satuan, pilihan, c);
    
    // !menampilkan pesan error
    errorMessage(satuan, pilihan);

    cout << endl;
    cout << "Apakah anda ingin melakukan konversi lagi ? [Y/n] ";
    cin >> lagi;

  } while (lagi == 'y' || lagi == 'Y');

  // clear screen
  if (system("CLS")) system("clear");

  cout << "\t Terimakasih Telah Menggunakan Program Konversi Suhu " << endl;
  cout << "\t\t Semoga Hari Anda Menyenangkan " << endl;

  return 0;
}
