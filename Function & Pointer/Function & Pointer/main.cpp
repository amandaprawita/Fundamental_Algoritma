//
//  main.cpp
//  Function & Pointer
//
//  Created by Amanda Prawita Ningrum on 19/01/24.
//

#include <iostream>

using namespace std;

//void printHelloWorld(){
//    printf("Hello World");
//}
//
//int getNumber(){
//    return 5;
//}
//
//int sum(int first, int *second){
////    printf("Alamat = %d\n", first);
//    first = 4;
//    int total = first + *second;
//    return total;
//}

int main() {
    // insert code here...
    // Pointer
    
//    int a = 0;
//    int *p;
//    int **p2;
//    p = &a;
//    p2 = &p;
//    
//    printf("%d\n", *p2);
//    printf("%d\n", &a);

//    printHelloWorld();
    
    // Passing by value
    // Passing by reference
    
//    int a = getNumber();
//    printf("%d\n", getNumber());
//    int first = 3;
//    int second = 5;
//    int hasilSum = sum(3, 5);
//    int hasilSum = sum(getNumber(), second);
//    int hasilSum = sum(first, &second);
//    printf("%d\n", hasilSum);
//    printf("%d", first);
//    
//    printf("\n");
    
    int arr[10];
    
    for (int i=0; i<10; i++) {
        arr[i] = 0;
        printf("%d = %d\n", i, &arr[i]);
    }
    
    int *a;
    int b;
    a = arr;
    
    scanf("%d %d", &a, &b);
    
    *a = b;
    
    for (int i=0; i<10; i++) {
        printf("%d = %d\n", i, arr[i]);
    }
    
    return 0;
}
