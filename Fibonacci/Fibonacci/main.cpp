//
//  main.cpp
//  Fibonacci
//
//  Created by Amanda Prawita Ningrum on 19/01/24.
//

#include <iostream>

using namespace std;

//void helloWorld(int i){
//    if(i==5)
//        return;
//    helloWorld(i+1);
//    printf("%d\n", i);
//}

//int fibonacci(int i){
//    if(i==0)
//        return 0;
//    if(i==1)
//        return 1;
//    return fibonacci(i-1) + fibonacci(i-2);
//}

void helloWorld(int i){
    if(i==5)
        return;
//    printf("Hello");
    helloWorld(i+1);
    printf("%d\n", i);
}

int main() {
    // insert code here...
    
//    helloWorld(0);
//    fibonacci(5);
    
//    int f = fibonacci(7);
//    printf("%d", f);
    
    helloWorld(0);
    
    printf("\n");
    return 0;
}
