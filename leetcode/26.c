#include <stdio.h>

int main(){
    int arr[] = {0,0,1,1,1,2,2,3,3,4};

    int len = sizeof(arr)/sizeof(arr[0]);
    int temp = 0;

    for (int i = 1; i < len; i++)
    {
        if (arr[temp] != arr[i])
        {
            arr[temp + 1] = arr[i];
            temp++;
            
        }
        
    }
    
    for (int i = 0; i <= temp; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
}