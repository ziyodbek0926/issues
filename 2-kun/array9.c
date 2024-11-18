// n - indexni olib tashlash

#include <stdio.h>

int main(){
    int a;
    int arr[] = {4,5,6,7};
    int index = 0;
    scanf("%d",&a);
    
    int len = sizeof(arr)/sizeof(arr[0]);
    int arr2[len-1];

    for (int i = 0; i < len; i++)
    {
        if(i != a){
            arr2[index] = arr[i];
            index++;
        }
        
    }
    for (int i = 0; i < len-1; i++)
    {
        printf("%d, ",arr2[i]);
    }
    
    return 0;
    
}