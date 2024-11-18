// teskari array

#include <stdio.h>

int main(){
    int arr1[] = {1,2,3,4};

    int len = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[len];
    int index = len;

    int n = 0;
    for (int i = index-1 ; i >= 0; i--)
    {
        arr2[n] = arr1[i];
        n++;
    }
    for (int i = 0; i < len; i++)
    {
        printf("%d",arr2[i]);
    }
    
    return 0;
    
}