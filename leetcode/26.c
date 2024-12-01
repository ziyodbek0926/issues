#include <stdio.h>

int main(){
    int arr1[] = {0,0,1,1,1,2,2,3,3,4};
    int arr2[] = {};
    int len = sizeof(arr1)/sizeof(arr1[0]);
    int temp = 0, n = 0;

    for (int i = 1; i < len; i++)
    {
        if (arr1[temp] != arr1[i])
        {
            arr2[temp + 1] = arr1[i];
            temp++;
            n++;
        }
        
    }
    
    for (int i = 0; i <= n; i++)
    {
        printf("%d ",arr2[i]);
    }
    
    
}