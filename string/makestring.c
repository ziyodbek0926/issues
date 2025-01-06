// Misol Sharti
// Berilgan char [] arraydan string yasang.

// Yani String objectini yasang.

// Mazgi: Konsolga array elementlarini bir qator qilib chiqarish yechim emas.

// Namuna:

// char[] arr_srt = new char[] { 'd', 'a', 's', 't', 'u', 'r', 'l', 'a', 's', 'h'};
// outout: dasturlash


#include <stdio.h>

int main() {
    char str1[] = { 'd', 'a', 's', 't', 'u', 'r', 'l', 'a', 's', 'h'};
    char str2[] = {};

    int i;
    for ( i = 0; str1[i] != '\0'; i++);
    
    for (int j = 0; j < i + 1; j++)
    {
        str2[j] = str1[j];
    }
    printf("%s \n",str2);

}

