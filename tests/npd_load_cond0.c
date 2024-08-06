#include <stdio.h>

#define NULL (void*)0

int main() {
    char* p;
    char a;
    char b;

    a = 'a';
    p = &a;
    if (getchar()) {
        p = NULL;
    } 

    b = *p;

    return 0;
}