#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by Microsoft (https://docs.microsoft.com/en-us/cpp)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    FILE* stream;
    char* p, buffer[] = "This is the line of output\n";
    int  ch;

    ch = 0;
    
    stream = stdout;
    for (p = buffer; (ch != EOF) && (*p != '\0'); p++) {
        ch = putc(*p, stream);
    }
    
    _getch();
    return 0;
}