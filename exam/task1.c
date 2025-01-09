#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("test.txt", "r");

    if (file == NULL) {
        perror("Ошибка открытия файла");
        return 1;
    }

    char str[100];
    while (fgets(str, sizeof(str), file) != NULL) { 
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] >= 97 && str[i] <= 122) {
                continue;
            } else if (str[i] == 56) { 
                str[i] = 55;       
                str[i - 1] = 43; 
                str[i + 1] = 40;
                str[i + 5] = 41;
            }
        }
        printf("%s", str);
    }
    
    fclose(file);
    return 0;
}
