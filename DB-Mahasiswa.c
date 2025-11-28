#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MAHASISWA 1000
#define MAX_STRING 100
#define FILENAME "DB-Mahasiswa.csv"

// Struct
typedef struct {
    char nim[MAX_STRING];
    char nama[MAX_STRING];
    char jurusan[MAX_STRING];
    float ipk;
    int semester;
} Mahasiswa;

// Function Prototypes
void tampilkanMenu();
void tambahMahasiswa(Mahasiswa data[], int *jumlah);
void tampilkanSemuaData(Mahasiswa data[], int jumlah);
void cariMahasiswa(Mahasiswa data[], int jumlah);
void hapusMahasiswa(Mahasiswa data[], int *jumlah);
void editMahasiswa(Mahasiswa data[], int jumlah);
void urutkanData(Mahasiswa data[], int jumlah);
void tampilkanStatistik(Mahasiswa data[], int jumlah);
void simpanKeFile(Mahasiswa data[], int jumlah);
void muatDariFile(Mahasiswa data[], int *jumlah);
int linearSearch(Mahasiswa data[], int jumlah, char *keyword);
void bubbleSort(Mahasiswa data[], int jumlah, int pilihan);
float hitungRataIPK(Mahasiswa data[], int jumlah);
void clearInputBuffer();

// Main Program
int main() {
    Mahasiswa mahasiswa[MAX_MAHASISWA];
    int jumlahData = 0;
    int pilihan;
    char lanjut;

    // Load data dari file saat program dimulai
    muatDariFile(mahasiswa, &jumlahData);

    printf("=================================================\n");
    printf("   SISTEM MANAJEMEN DATABASE MAHASISWA\n");
    printf("=================================================\n\n");

    do {
        tampilkanMenu();
        printf("Pilih menu: ");
        scanf("%d", &pilihan);
        clearInputBuffer();

        switch(pilihan) {
            case 1:
                tambahMahasiswa(mahasiswa, &jumlahData);
                break;
            case 2:
                tampilkanSemuaData(mahasiswa, jumlahData);
                break;
            case 3:
                cariMahasiswa(mahasiswa, jumlahData);
                break;
            case 4:
                editMahasiswa(mahasiswa, jumlahData);
                break;
            case 5:
                hapusMahasiswa(mahasiswa, &jumlahData);
                break;
            case 6:
                urutkanData(mahasiswa, jumlahData);
                break;
            case 7:
                tampilkanStatistik(mahasiswa, jumlahData);
                break;
            case 8:
                simpanKeFile(mahasiswa, jumlahData);
                printf("\nData berhasil disimpan!\n");
                break;
            case 9:
                simpanKeFile(mahasiswa, jumlahData);
                printf("\nData disimpan. Keluar dari program...\n");
                return 0;
            default:
                printf("\nPilihan tidak valid!\n");
        }

        printf("\nKembali ke menu? (y/n): ");
        scanf("%c", &lanjut);
        printf("\n");

    } while(lanjut == 'y' || lanjut == 'Y');

    simpanKeFile(mahasiswa, jumlahData);
    printf("Program selesai. Data tersimpan.\n");

    return 0;
}

// Function Definitions

void tampilkanMenu() {
    printf("-------------------------------------------------\n");
    printf("                    MENU UTAMA\n");
    printf("-------------------------------------------------\n");
    printf("1. Tambah Data Mahasiswa\n");
    printf("2. Tampilkan Semua Data\n");
    printf("3. Cari Mahasiswa\n");
    printf("4. Edit Data Mahasiswa\n");
    printf("5. Hapus Data Mahasiswa\n");
    printf("6. Urutkan Data\n");
    printf("7. Statistik\n");
    printf("8. Simpan ke File\n");
    printf("9. Keluar\n");
    printf("-------------------------------------------------\n");
}

void tambahMahasiswa(Mahasiswa data[], int *jumlah) {
    // TODO: Implementasi tambah data
    // Gunakan fgets untuk input string
}

void tampilkanSemuaData(Mahasiswa data[], int jumlah) {
    // TODO: Implementasi tampilkan semua data
    // Loop through array dan printf setiap mahasiswa
    // Format tabel dengan header
}

void cariMahasiswa(Mahasiswa data[], int jumlah) {
    // TODO: Implementasi pencarian
    // Input keyword (NIM/nama)
    // Gunakan linearSearch() atau implementasi sendiri
    // Tampilkan hasil jika ditemukan
}

void hapusMahasiswa(Mahasiswa data[], int *jumlah) {
    // TODO: Implementasi hapus data
    // Cari data berdasarkan NIM
    // Shift array ke kiri untuk menghapus
    // Kurangi jumlah data
}

void editMahasiswa(Mahasiswa data[], int jumlah) {
    // TODO: Implementasi edit data
    // Cari mahasiswa berdasarkan NIM
    // Tampilkan data lama
    // Input data baru
}

void urutkanData(Mahasiswa data[], int jumlah) {
    // TODO: Implementasi sorting
    // Tampilkan pilihan (berdasarkan NIM/Nama/IPK)
    // Gunakan bubbleSort() atau sorting algorithm lain
}

void tampilkanStatistik(Mahasiswa data[], int jumlah) {
    // TODO: Implementasi statistik
    // Hitung: total mahasiswa, rata-rata IPK, IPK tertinggi/terendah
    // Hitung mahasiswa per jurusan
    // Gunakan loop dan conditional
}

void simpanKeFile(Mahasiswa data[], int jumlah) {
    // TODO: Implementasi save ke CSV
    // fopen() dengan mode "w"
    // fprintf() untuk setiap baris
    // Format: NIM,Nama,Jurusan,IPK,Semester
    // fclose()
}

void muatDariFile(Mahasiswa data[], int *jumlah) {
    // TODO: Implementasi load dari CSV
    // fopen() dengan mode "r"
    // fgets() untuk baca baris
    // strtok() atau sscanf() untuk parsing
    // Simpan ke array struct
    // fclose()
}

int linearSearch(Mahasiswa data[], int jumlah, char *keyword) {
    // TODO: Implementasi linear search
    // Loop through array
    // strcmp() atau strstr() untuk cek NIM/nama
    // Return index jika ketemu, -1 jika tidak
    return -1;
}

void bubbleSort(Mahasiswa data[], int jumlah, int pilihan) {
    // TODO: Implementasi bubble sort
    // Nested loop untuk sorting
    // Switch case untuk pilihan (NIM/Nama/IPK)
    // strcmp() untuk string, operator untuk angka
    // Swap menggunakan temp variable
}

float hitungRataIPK(Mahasiswa data[], int jumlah) {
    // TODO: Implementasi hitung rata-rata IPK
    // Loop dan jumlahkan semua IPK
    // Bagi dengan jumlah mahasiswa
    // Return hasil
    return 0.0;
}

void clearInputBuffer() {
    int c;

    // Fungsi ini WAJIB digunakan setelah pemanggilan scanf()
    // yang membaca nilai numerik (%d, %i, %f, dan sejenisnya).
    // scanf() TIDAK membaca karakter newline ('\n'), sehingga
    // sisa karakter tersebut AKAN mengganggu input berikutnya.
    //
    // JANGAN melakukan input string (fgets) atau karakter (%c)
    // sebelum buffer dibersihkan. Gunakan fungsi ini untuk
    // memastikan buffer dalam keadaan kosong.

    while ((c = getchar()) != '\n' && c != EOF);
}
 // syahla 