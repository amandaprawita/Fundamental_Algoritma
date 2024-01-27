//
//  main.cpp
//  Array 2D
//
//  Created by Amanda Prawita Ningrum on 19/01/24.
//

#include <iostream>
#include <stdio.h>
#include <termios.h>
#include <unistd.h>
#include <stdlib.h>

using namespace std;

int getch() {
struct termios oldt, newt;
int ch;
tcgetattr( STDIN_FILENO, &oldt );
newt = oldt;
newt.c_lflag &= ~( ICANON | ECHO );
tcsetattr( STDIN_FILENO, TCSANOW, &newt );
ch = getchar();
tcsetattr( STDIN_FILENO, TCSANOW, &oldt );
return ch;
}

int main() {
    // insert code here...
//    int matrix[3][3];
//    int barisPertama = 0;
//    
//    for (int i=0; i<3; i++) {
//        for (int j=0; j<3; j++) {
//            scanf("%d", &matrix[i][j]);
//        }
//    }
//    
//    for (int i=0; i<3; i++) {
//        for (int j=0; j<3; j++) {
//            printf("%d ", matrix[i][j]);
//        }
//        printf("\n");
//    }
//    
//    for (int i=0; i<3; i++) {
//        barisPertama += matrix[0][i];
//    }
//    printf("Hasil tambah baris pertama : %d", barisPertama);
    
    char map[][6] = {"*****", "*****", "*****", "*****", "*****"};
    int playerX = 0;
    int playerY = 0;
    char player = 'P';
    char input;
    
    while (true) {
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                if (playerX == j && playerY == i) {
                    printf("%c", player);
                }
                else
                    printf("*");
            }
            printf("\n");
        }
        input = getch();
        
        // w -> atas
        // a -> kiri
        // s -> bawah
        // d -> kanan
        
        switch (input) {
            case 'w':
                if(playerY > 0) playerY -= 1;
                break;
            case 'a':
                if(playerX > 0) playerX -= 1;
                break;
            case 's':
                if(playerY < 4) playerY += 1;
                break;
            case 'd':
                if(playerX < 4) playerX += 1;
                break;
        }
        system("cls");
    }
    
//    printf("\n");
    return 0;
}
