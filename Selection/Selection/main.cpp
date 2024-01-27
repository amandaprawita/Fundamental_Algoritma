//
//  main.cpp
//  Selection
//
//  Created by Amanda Prawita Ningrum on 14/01/24.
//

#include <iostream>

using namespace std;

int main() {
    // insert code here...
    // SELECTION
    // 1. If, else, if, else
    // 2. Switch case
    // 3. Ternary if

    // int angka = 2;
    
    // Kalau angka 0 maka print "nol", kalau angka ganjil print "ganjil"
    // Kalau angka gemap print "genap"
    // if (angka == 0) {
    //     printf("nol");
    // }
    // else if (angka%2 == 1) {
    //     printf("ganjil");
    // }
    // else {
    //     printf("genap");
    // }

    // int angka = 0;
    // switch (angka){
    //     case 0:
    //         printf("nol");
    //         break;
    //     case 1:
    //         printf("satu");
    //         break;
    //     case 5:
    //         printf("lima");
    //         break;
    //     default:
    //         printf("Selain nol satu dan lima");
    // }

    // int angka = 1;
    // // kondisi ? benar : salah
    // // printf("%s", (angka%2 == 0? "genap" : "ganjil"));
    // printf("%s", (angka < 2? "lebih kecil dari 2" : angka > 2 ? "lebih besar dari 2" : "2"));

    int input;
    int batasBawah;
    int batasAtas;
    
    scanf("%d", &input);
    scanf("%d %d", &batasBawah, &batasAtas);
    
    if (input >= batasBawah && input <= batasAtas) {
        printf("%d diantara %d dan %d", input, batasBawah, batasAtas);
    }
    else
        printf("%d bukan diantara %d dan %d", input, batasBawah, batasAtas);
//        printf("\nHello");
    
    printf("\n");
    return 0;
}
