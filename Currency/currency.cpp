#include <iostream>
#include <stdio.h>
// #include <conio.h>
#include <fstream>

using namespace std;

void errorMessage()
{
  cout << "\nError: Pilihan tidak ada dalam list atau anda memasukan selain angka.\n";
}

// reading file
void readFile(string filename, string fileContent) 
{
  ifstream title (filename);
  if (title.is_open())
  {
    while (getline(title, fileContent))
    {
      cout << fileContent << "\n";
    }
    title.close();
  }
  else cout << "Unable to open file";
}

// conversion from IDR
void fromIDR()
{
  int rupiah, choose;
  string tableContent;
  long long int USD, JPY, KRW, MYR, EUR, IDR, GBP, INR;

  // clear screen
  if (system("CLS")) system("clear");

  cout << "------------------------------------------------------------------------\n";
  cout << "| Anda memilih konversi dari IDR (Rp) ke mata uang yang anda pilih nanti.\n";
  cout << "| Dari rupiah (Rp) ke ...\n";
  cout << "------------------------------------------------------------------------\n";

  cout << "\nMasukan jumlah uang dalam rupiah (Rp): ";
  cin >> rupiah;

  readFile("table.txt", tableContent);

  cout << "Ingin diubah ke mata uang (1-8) ? ";
  cin >> choose;

  cout << "\n";
  
  // IDR calculation
  USD = rupiah * 0.000063628287;
  JPY = rupiah * 0.0090270929;
  KRW = rupiah * 0.086278015;
  MYR = rupiah * 0.00029101374;
  EUR = rupiah * 0.000062076857;
  IDR = rupiah * 1.00;
  GBP = rupiah * 0.000053738205;
  INR = rupiah * 0.0052057787;
  
  // case
  switch(choose)
  {
    case 1:
      cout << "Rp" << rupiah << " = $" << USD << endl;
      break;
    case 2:
      cout << "Rp" << rupiah << " = ¥" << JPY << endl;
      break;
    case 3:
      cout << "Rp" << rupiah << " = ₩" << KRW << endl;
      break;
    case 4:
      cout << "Rp" << rupiah << " = RM" << MYR << endl;
      break;
    case 5:
      cout << "Rp" << rupiah << " = €" << EUR << endl;
      break;
    case 6:
      cout << "Rp" << rupiah << " = Rp" << IDR << endl;
      break;
    case 7:
      cout << "Rp" << rupiah << " = £" << GBP << endl;
      break;
    case 8:
      cout << "Rp" << rupiah << " = ₹" << INR << endl;
      break;

    default:
      errorMessage();
      break;
  }
}

// conversion from USD
void fromUSD()
{
  int choose;
  long long int USD, JPY, KRW, MYR, EUR, IDR, GBP, INR, dollar;
  string tableContent;

  // clear screen
  if (system("CLS")) system("clear");

  cout << "------------------------------------------------------------------------\n";
  cout << "| Anda memilih konversi dari USD ($) ke mata uang yang anda pilih nanti.\n";
  cout << "| Dari Dollar ($) ke ...\n";
  cout << "------------------------------------------------------------------------\n";

  cout << "\nMasukan jumlah uang dalam dollar ($): ";
  cin >> dollar;

  readFile("table.txt", tableContent);

  cout << "Ingin diubah ke mata uang (1-8) ? ";
  cin >> choose;

  cout << "\n";

  // USD calculation
  USD = dollar * 1.00;
  JPY = dollar * 141.96224;
  KRW = dollar * 1358.0667;
  MYR = dollar * 4.5802925;
  EUR = dollar * 1.9073652;
  IDR = dollar * 15704.391;
  GBP = dollar * 0.84488388;
  INR = dollar * 81.72132;

  // case
  switch(choose)
  {
    case 1:
      cout << "$" << dollar << " = $" << USD << endl;
      break;
    case 2:
      cout << "$" << dollar << " = ¥" << JPY << endl;
      break;
    case 3:
      cout << "$" << dollar << " = ₩" << KRW << endl;
      break;
    case 4:
      cout << "$" << dollar << " = RM" << MYR << endl;
      break;
    case 5:
      cout << "$" << dollar << " = €" << EUR << endl;
      break;
    case 6:
      cout << "$" << dollar << " = Rp" << IDR << endl;
      break;
    case 7:
      cout << "$" << dollar << " = £" << GBP << endl;
      break;
    case 8:
      cout << "$" << dollar << " = ₹" << INR << endl;
      break;

    default:
      errorMessage();
      break;
  }
}

// conversion from 8 currency to IDR
void toIDR()
{
  int choose;

  long long int USD, JPY, KRW, MYR, EUR, IDR, GBP, INR, amount;

  string tableContent;

  // clear screen
  if (system("CLS")) system("clear");

  cout << "------------------------------------------------------------------------\n";
  cout << "| Anda memilih konversi dari mata uang yang kalian pilih ke rupiah (Rp) \n";
  cout << "| Dari ... ke Rupiah (Rp)\n";
  cout << "------------------------------------------------------------------------\n";
  cout << "Masukan jumlah uang: ";
  cin >> amount;

  readFile("table.txt", tableContent);

  cout << amount << " itu mata uang apa ? ";
  cin >> choose;

  cout << "\n";

  // from ... to rupiah calculation
  USD = amount * 15679.26;
  JPY = amount * 110.59032;
  KRW = amount * 11.554198;
  MYR = amount * 3428.5056;
  EUR = amount * 16094.306;
  IDR = amount * 1.00;
  GBP = amount * 18584.168;
  INR = amount * 191.98465;

  // case
  switch(choose)
  {
    case 1:
      cout << "$" << amount << " = Rp" << USD << endl;
      break;
    case 2:
      cout << "¥" << amount << " = Rp" << JPY << endl;
      break;
    case 3:
      cout << "₩" << amount << " = Rp" << KRW << endl;
      break;
    case 4:
      cout << "RM" << amount << " = Rp" << MYR << endl;
      break;
    case 5:
      cout << "€" << amount << " = Rp" << EUR << endl;
      break;
    case 6:
      cout << "Rp" << amount << " = Rp" << IDR << endl;
      break;
    case 7:
      cout << "£" << amount << " = Rp" << GBP << endl;
      break;
    case 8:
      cout << "₹" << amount << " = Rp" << INR << endl;
      break;

    default:
      errorMessage();
      break;
  }
}

// conversion for 8 currency to USD
void toUSD()
{
  int choose;
  long long int USD, JPY, KRW, MYR, EUR, IDR, GBP, INR, amount;
  string tableContent;

  // clear screen
  if (system("CLS")) system("clear");

  cout << "--------------------------------------------------------------------\n";
  cout << "| Anda memilih konversi dari mata uang yang kalian pilih ke USD ($) \n";
  cout << "| Dari ... ke USD ($)\n";
  cout << "--------------------------------------------------------------------\n";
  cout << "Masukan jumlah uang: ";
  cin >> amount;

  readFile("table.txt", tableContent);

  cout << amount << " itu mata uang apa ? ";
  cin >> choose;

  cout << "\n";

  // from ... to usd calculation
  USD = amount * 1.00;
  JPY = amount * 0.0070680976;
  KRW = amount * 0.00073756358;
  MYR = amount * 0.21836389;
  EUR = amount * 1.0261918;
  IDR = amount * 0.000063761249;
  GBP = amount * 1.187428;
  INR = amount * 0.012249131;

  // case
  switch(choose)
  {
    case 1:
      cout << "$" << amount << " = $" << USD << endl;
      break;
    case 2:
      cout << "¥" << amount << " = $" << JPY << endl;
      break;
    case 3:
      cout << "₩" << amount << " = $" << KRW << endl;
      break;
    case 4:
      cout << "RM" << amount << " = $" << MYR << endl;
      break;
    case 5:
      cout << "€" << amount << " = $" << EUR << endl;
      break;
    case 6:
      cout << "Rp" << amount << " = $" << IDR << endl;
      break;
    case 7:
      cout << "£" << amount << " = $" << GBP << endl;
      break;
    case 8:
      cout << "₹" << amount << " = $" << INR << endl;
      break;

    default:
      errorMessage();
      break;
  }
}

int main()
{
  int method;
  string titleContent, tableContent, methodContent;

  // clear screen
  if (system("CLS")) system("clear");

  readFile("title.txt", titleContent);

  readFile("method.txt", methodContent);
  cout << "Pilih metode konversi yang ingin digunakan: ";
  cin >> method;

  switch (method)
  {
    case 1:
      fromUSD();
      break;
    case 2:
      fromIDR();
      break;
    case 3:
      toIDR();
      break;
    case 4:
      toUSD();
      break;

    default:
      errorMessage();
      break;
  }

  cout << "Data: 22 November 2022 @ 13.15\n";

  return 0;
}