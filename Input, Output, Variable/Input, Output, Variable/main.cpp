//
//  main.cpp
//  Input, Output, Variable
//
//  Created by Amanda Prawita Ningrum on 14/01/24.
//

#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    // insert code here...
    int angkaBulat;
    float angkaKoma = 1.5f;
    char karakter = 'a';
    char string[100] = "Hello";
    
    scanf("%d", &angkaBulat);
    getchar();
    printf("%d\n", angkaBulat);
    
    scanf("%f", &angkaKoma);
    getchar();
    printf("%.3f\n", angkaKoma);
    
    scanf("%c", &karakter); // Input Stream membacanya karakter
    getchar();
    printf("%c\n", karakter);
    
    scanf("%[^\n]", string);
    getchar();
    printf("%s\n", string);
//    printf("Umur Kamu = %d", umur);
//    printf("Hello World!\nasd");
    
//    printf("\n");
    return 0;
}
