#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[] = "10 20 30 40 50"; 
    int arr[10]; 
    int i = 0;

    char *token = strtok(str, " ");
    while (token != NULL) {
        arr[i++] = atoi(token); 
        token = strtok(NULL, " ");
    }

    for (int j = 0; j < i; j++) {
        printf("arr[%d] = %d\n", j, arr[j]);
    }

    return 0;
}
