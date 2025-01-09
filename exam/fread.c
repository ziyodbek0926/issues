#include <stdio.h>

int main() {
    FILE *fptr;

    fptr = fopen("filename.txt", "r");

    char data[20];
    int n = fread(data, 1, 19, fptr);

    data[n] = '\0';

    printf("%s", data);

    fclose(fptr);
}