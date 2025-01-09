#include <stdio.h>

int main() {
    
    int i = 0, j = 0;
    int in_word = 0;
    while (str[i] != '\0') {
        if (!isspace(str[i])) {
            str[j++] = str[i];
            in_word = 1;
        } else if (in_word) {
            str[j++] = ' ';
            in_word = 0;
        }
        i++;
    }
    if (j > 0 && str[j - 1] == ' ') {
        j--;
    }
    str[j] = '\0';

}

