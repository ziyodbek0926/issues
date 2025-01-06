// Misol Sharti
// Berilgan a string ga b string ni qo'shib qo'ying. Natijani konolga chiqaring.

// Namuna:

// strA = "Ali"
// strB = "sh"
// outout: Alish

#include <stdio.h>
#include <string.h>

int main() {
    char arr1[20] = "Ali";
    char arr2[] = "sh";

    strcat(arr1,arr2);

    printf("%s",arr1);
}