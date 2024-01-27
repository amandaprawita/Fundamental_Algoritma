//
//  main.cpp
//  Array
//
//  Created by Amanda Prawita Ningrum on 19/01/24.
//

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
    // insert code here...
    
//    int listAngka[20];
//    char str[20][100];
    
//    listAngka[0] = 1;
//    printf("%d\n", listAngka[0]);
//    listAngka[0] = 2;
//    printf("%d\n", listAngka[0]);
    
//    scanf("%s", str[0]);
//    strcpy(str[0], "Hello");
//    str[1] = 'a';
//    printf("%s\n", str[0]);
    
    // ASCII
//    printf("%d\n", 'a');
//    printf("%d\n", 'z');
//    printf("%d\n", 'A');
//    printf("%d\n", 'Z');
    
    char str[30];
    
    scanf("%[^\n]", str);
    getchar();
    
    int panjang = strlen(str);
    
    for(int i=0; i<strlen(str); i++){
        if (str[i] >= 97 && str[i] <= 122) {
            str[i] -= 32;
        }
    }
    printf("%s", str);
    
    printf("\n");
    return 0;
}
