//
//  main.cpp
//  File Processing
//
//  Created by Amanda Prawita Ningrum on 19/01/24.
//

#include <iostream>

using namespace std;

int main() {
    // insert code here...
    // Filebase
    // read, write, append
    // r -> read
    // w -> write
    // a -> append
    // r+ -> read, white
    // w+ -> read, write
    // a+ -> append, read
    // Open, process, close
    
    char RTF[200];
    FILE *fp;
    
    fp = fopen("data.RTF", "a+");
    fprintf(fp, "123");
    rewind(fp);
//    fprintf(fp, "Hello Worlds! ");
    fscanf(fp, "%[^\n]" , RTF);
    printf("%s",RTF);
    fclose(fp);
    
    printf("\n");
    return 0;
}
