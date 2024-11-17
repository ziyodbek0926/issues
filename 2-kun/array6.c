// Bu funksiya Array ohiriga son qo'shish uchun
#include <stdio.h>

int main(){
    int x[] = {6, 25, 91, 23, 72, 9, 18, 6};
    int len = sizeof(x)/sizeof(x[0]);
    int n;
    scanf("%d",&n);
    int a[len+1];
    for (int i = 0; i < len; i++)
    {
        a[i] = x[i];
    }

    a[len] = n;

    for (int i = 0; i < len + 1; i++)
    {
        printf("%d, ",a[i]);
    }
    
    return 0;
}