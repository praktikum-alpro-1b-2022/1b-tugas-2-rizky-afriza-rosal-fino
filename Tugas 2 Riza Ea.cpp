#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;



int main(){

    int menu, pilihan;
    char answer;

    kembali:


    printf("---Rumus Luas Bangun Datar--- \n");
    printf("Daftar Bangun Datar\n");
    printf("1. Persegi\n");
    printf("2. Persegi Panjang\n");
    printf("3. Segitiga\n");
    printf("4. Trapesium\n");
    printf("5. Jajar Genjang\n");
    printf("6. Belah Ketupat\n");
    printf("7. Layang-layang\n");
    printf("8. Lingkaran\n");
    printf("Pilihan Anda [1-8]?");
    scanf("%d", &menu);

    printf("\n");

    switch(menu) {
       case 1:
           int sisi, luas;
           cout << "Input panjang sisi persegi: ";
           cin >> sisi;
           luas = sisi * sisi;
           cout << "Luas persegi: " << luas << endl;
       break;

       case 2:
           int p, l;
           cout << "Input p persegi panjang: ";
           cin >> p;
           cout << "Input l persegi panjang: ";
           cin >> l;
           luas = p * l;
           cout << "Luas persegi panjang: " << luas << endl;
       break;

       case 3:
           int a, t;
           cout << "Input alas segitiga:  ";
           cin >> a;
           cout << "Input tinggi segitiga: ";
           cin >> t;
           luas = 0.5 * a * t;
           cout << "Luas segitiga: " << luas << endl;
       break;

       case 4:
           int alas1, alas2;
           cout << "Input alas1 trapesium: ";
           cin >> alas1;
           cout << "Input alas2 trapesium: ";
           cin >> alas2;
           cout << "Input tinggi trapesium: ";
           cin >> t;
           luas = 0.5 * (alas1+alas2) * t;
           cout << "Luas trapesium: " << luas << endl;
       break;

       case 5:

           cout << "Input alas jajar genjang: ";
           cin >> a;
           cout << "Input t jajar genjang: ";
           cin >> t;
           luas = a * t;
           cout << "Luas jajar genjang: " << luas << endl;
       break;

       case 6:
           int d1, d2;
           cout << "Input d1 belah ketupat: ";
           cin >> d1;
           cout << "Input d2 belah ketupat: ";
           cin >> d2;
           luas = 0.5 * d1 * d2;
           cout << "Luas belah ketupat: " << luas << endl;
       break;

       case 7:

           cout << "Input d1 layang-layang: ";
           cin >> d1;
           cout << "Input d2 layang-layang: ";
           cin >> d2;
           luas = 0.5 * d1 * d2;
           cout << "Luas layang-layang: " << luas << endl;
       break;

       case 8:
           int r;
           cout << "Input r lingkaran: ";
           cin >> r;
           luas = 3.14 * r * r;
           cout << "Luas lingkaran: " << luas << endl;
       break;

    }

    printf("\n");

    printf("Tekan 1 untuk kembali ke Menu atau 2 untuk Keluar dari Program\n");

    printf("Pilihan Anda [1-2]? ");

    scanf("%d", &pilihan);

    printf("\n");



    switch(pilihan){

    case 1:

        goto kembali;

    case 2:

        goto keluar;

    }



    keluar:

        return 0;

}
