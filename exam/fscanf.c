// Funktsiya fscanf()fayldan formatlangan ma'lumotlarni o'qiydi va uni argumentlar tomonidan belgilangan xotira joylariga yozadi, so'ngra joylashuv ko'rsatkichini o'qishni to'xtatgan fayl holatiga o'tkazadi.

#include <stdio.h>

int main() {
    FILE *fptr;

    fptr = fopen("filename.txt", "r");

    char output[50];
    fscanf(fptr, "%50s", output);
    printf("%s", output);

    fclose(fptr);
}