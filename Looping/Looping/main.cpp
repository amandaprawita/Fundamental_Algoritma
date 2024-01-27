//
//  main.cpp
//  Looping
//
//  Created by Amanda Prawita Ningrum on 19/01/24.
//

#include <iostream>

using namespace std;

int main() {
    // insert code here...
    // Repetition / Looping
    // for, while, do while
    // break, continue
    
//    for(int i = 1; i < 10; i+=2){
//        if(i==5)
//            continue;
//        printf("%d\n",i);
//    }
    
//    printf("While : \n");
//    int j = 11;
//    while (j <= 10) {
//        printf("%d\n", j++);
//    }
//    printf("\n");
//    
//    printf("Do While: \n");
//    int k = 11;
//    do{
//        printf("%d\n", k++);
//    }while(k <= 10);
    
    // Nested Loop
    int size = 10;
    scanf("%d", &size);
    for(int i=0; i<size; i++){
        for (int j=0; j<size; j++) {
            if (i==0 || i==size-1 || j==0 || j==size-1) {
                printf("*");
            }
            else{
                printf(" ");
            }
//            printf("*");
        }
        printf("\n");
    }
    
    printf("\n");
    return 0;
}
