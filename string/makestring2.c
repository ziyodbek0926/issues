// Berilgan char [] arrayning a indexsidan boshlab b cha bo'lgan elementlardan String yasang.

// Namuna:

// char[] arr_srt = new char[] { 'd', 'a', 's', 't', 'u', 'r', 'l', 'a', 's', 'h'};
// indexA = 3
// indexB = 5
// outout: turla

#include <stdio.h>

int main() {
    char str1[] = {'d', 'a', 's', 't', 'u', 'r', 'l', 'a', 's', 'h'};
    int n,m;
    scanf("%d %d",&n,&m);
    char str2[m];

    for (int k = 0; k < m; k++)
    {
        str2[k] = str1[k+n];

    }
    printf("%s \n",str2);
    
}