#include <stdio.h>

int main(){

    FILE *fptr;

    // Open a file in writing mode
    fptr = fopen("filename.txt", "w");

    // Write a string into the file
    fputs("Hello World!", fptr);

    fclose(fptr);
}

