//
//  main.cpp
//  Binary, Arithmetic, Operator
//
//  Created by Amanda Prawita Ningrum on 14/01/24.
//

#include <iostream>

using namespace std;

int main() {
    // insert code here...
//    printf("Ini tambah : %d\n", 2+3);
//    printf("Ini kurang : %d\n", 3-2);
//    printf("Ini kali   : %d\n", 3*3);
//    printf("Ini bagi   : %d\n", 5/2);
//    printf("Ini bagi (desimal : %f\n", 5.0/2.0);
//    printf("Arithmetic        : (%d+%d)/%d = %d\n", 5, 2, 3, (5+2)/3);
//    
//    printf("AND     : %d\n", 6&5);
//    printf("OR      : %d\n", 6|5);
//    printf("XOR     : %d\n", 6^5);
//    printf("Shift Right : %d\n", 6>>2);
//    printf("Shift Left  : %d\n", 6<<2);
    
//    Pre-Increment : Pre(Sebelum) Increment(Bertambah)
//    int angka = 0;
//    printf("%d\n", ++angka);
//    printf("%d\n", angka);
//    Post-Increment : Post(Sesudah) Increment(Bertambah)
//    Pre-Decrement : Pre(Sebelum) Desrement(Berkurang)
//    Post-Decrement : Post(Sesudah) Desrement(Berkurang)
//    int angka = 0;
//    printf("%d\n", angka--);
//    printf("%d\n", angka);
    
    int angka1;
    int angka2;
    
    scanf("%d %d", &angka1, &angka2);
    printf("%d\n", angka1+angka2);
    
    scanf("%d %d", &angka1, &angka2);
    printf("%d\n", angka1-angka2);
    
    scanf("%d %d", &angka1, &angka2);
    printf("%d\n", angka1*angka2);
    
    scanf("%d %d", &angka1, &angka2);
    printf("%d\n", angka1/angka2);
    
    scanf("%d %d", &angka1, &angka2);
    printf("%d\n", angka1%angka2);
    
    return 0;
}
