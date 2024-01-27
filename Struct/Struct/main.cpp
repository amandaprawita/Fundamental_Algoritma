//
//  main.cpp
//  Struct
//
//  Created by Amanda Prawita Ningrum on 19/01/24.
//

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

struct rectangle{
    int length;
    int width;
};

struct person{
    char name[200];
    int age;
};

struct info{
    person pemilik;
    rectangle luasBangunan;
};

info infoBangunan[100];
int banyakBangunan = 0;

info tambahBangunan(){
    char name[200];
    int age;
    int length;
    int width;
    
    printf("Input nama pemilik : ");
    scanf("%s", name);
    getchar();
    
    printf("Input nama pemilik : ");
    scanf("%d", &age);
    getchar();
    
    printf("Input lebah bangunan : ");
    scanf("%d", &width);
    getchar();
    
    printf("Input panjang bangunan : ");
    scanf("%d", &length);
    getchar();
    
    info infoBaru = {{"", age}, {length,width}};
    strcpy(infoBaru.pemilik.name, name);
    
    return  infoBaru;
}

void lihatBangunan(){
    for (int i=0; i<banyakBangunan; i++) {
        info bangunan = infoBangunan[i];
        printf("%s berumur %d memiliki luas bangunan %d\n", bangunan.pemilik.name, bangunan.pemilik.age, bangunan.luasBangunan.length * bangunan.luasBangunan.width);
    }
}

int main() {
    // insert code here...
    
//    info infoBangunan = {{"Adi", 25}, {20, 10}};
//    printf("%s berumur %d memiliki luas bangunan = %d\n", infoBangunan.pemilik.name, infoBangunan.pemilik.age, infoBangunan.luasBangunan.length * infoBangunan.luasBangunan.width);

//    rectangle kotak1{10};
//    person orang1 = {"Player 1", 20};
    
//    kotak1.length = 10;
//    printf("%d", kotak1.length);
    
    int input = 0;
    
    do{
        system("cls");
        printf("1. Tambah Bangunan\n");
        printf("2. Lihat Bangunan\n");
        printf("3. Exit\n");
        scanf("%d", &input);
        getchar();
        
        switch (input) {
            case 1:
                infoBangunan[banyakBangunan++] = tambahBangunan();
                break;
            case 2:
                lihatBangunan();
                getchar();
                break;
        }
    }while(input != 3);
    
    printf("\n");
    return 0;
}
