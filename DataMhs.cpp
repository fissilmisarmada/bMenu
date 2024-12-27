#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>  // Untuk system("cls")
#include <conio.h>  // Untuk getch()
using namespace std;

// Struktur Data Mahasiswa
struct Mahasiswa {
    string nim;
    string nama;
    string alamat;
    string tanggalLahir; // Format DD/MM/YYYY
    float ipk;
};

// Data mahasiswa
Mahasiswa dataMahasiswa[30];
int pos = -1; // Menyimpan posisi terakhir data mahasiswa
// Fungsi untuk mencari data mahasiswa berdasarkan NIM
int cariDataByNIM(const string& nim) {
    for (int i = 0; i <= pos; i++) {
        if (dataMahasiswa[i].nim == nim) {
            return i; // Data ditemukan
        }
    }
    return -1; // Data tidak ditemukan
}

void tampilkanMenu(){  
system("cls");
cout << "\n=== Menu Aplikasi Data Mahasiswa ===\n";
cout << "1. Masukkan Data Mahasiswa\n";
cout << "2. Tampilkan Data Mahasiswa\n";
cout << "3. Update Data Mahasiswa\n";
cout << "4. Hapus Data Mahasiswa\n";
cout << "5. Exit\n";
cout << "Masukkan pilihan: ";         
}

void tambahData() {
    system("cls");  // Clear screen sebelum input data
    if (pos >= 29) {
        cout << "\nData mahasiswa penuh! Tidak bisa menambah data baru.\n";
        return;
    }
    pos++;
    cout << "\nMasukkan Data Mahasiswa\n";
    cout << "Masukkan NIM: ";
    getline(cin, dataMahasiswa[pos].nim); 
    cout << "Masukkan Nama: ";
    getline(cin, dataMahasiswa[pos].nama); 
    cout << "Masukkan Alamat: ";
    getline(cin, dataMahasiswa[pos].alamat); 
    cout << "Masukkan Tanggal Lahir (DD/MM/YYYY): ";
    getline(cin, dataMahasiswa[pos].tanggalLahir); 
    cout << "Masukkan IPK: ";
    cin >> dataMahasiswa[pos].ipk;
}

void tampilkanData() {
    system("cls");  // Clear screen sebelum menampilkan data
    if (pos == -1) {
        cout << "\nTidak ada data mahasiswa.\n";
        return;
    }
    cout << "\n=== Data Mahasiswa ===\n";
    cout << left << setw(15) << "NIM" 
        << setw(30) << "Nama"
        << setw(30) << "Alamat"
        << setw(15) << "Tgl Lahir"
        << setw(5)  << "IPK" << endl;
    cout << string(100, '-') << endl;
    for (int i = 0; i <= pos; i++) {
        cout << left << setw(15) << dataMahasiswa[i].nim
            << setw(30) << dataMahasiswa[i].nama
            << setw(30) << dataMahasiswa[i].alamat
            << setw(15) << dataMahasiswa[i].tanggalLahir
            << setw(5)  << dataMahasiswa[i].ipk << endl;
            
    }
    cout << "\nTekan sembarang tombol untuk kembali ke menu...";
    getch();  // Menunggu input sebelum kembali ke menu
}

int main() {
char pl;
do
{
    tampilkanMenu();
    pl=getch();
  switch (pl)
  {
   case '1':
       tambahData();
    break;
    case '2':
   tampilkanData();
    /* code */ 
    break;  
   case '3':

    /* code */
    break;  
   case '4':

    /* code */
    break;  
  case '5':
    /* code */
    break;
  
  default:
    system("cls");
    cout<<"Pilihan Tidak Tersedia";
    getch();
    break;
  }
} while (pl!='5');
  return 0;
}