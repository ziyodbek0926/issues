
// #include <stdio.h>

// int main() {
//     FILE *fptr;
//     fptr = fopen("filename.txt", "r");

//     fseek(fptr, 3, SEEK_SET);
//     char c = fgetc(fptr);
//     printf("%c", c);

//     fclose(fptr);
// }
#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("filename.txt", "r");
    fseek(fptr, 0, SEEK_END);

    int position = ftell(fptr);

    printf("%d", position);

    fclose(fptr);   
}

#include <stdio.h>


