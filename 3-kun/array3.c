// arraydagi o'xshash elementlarni olib tashlash

#include <stdio.h>

int main(){

    int arr[] = {1,3,4,1,5,3};
    int temp1 = 0;
    int n = 0;
    int temp;
    

    int len = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    for (int i = 1; i < len; i++)
    {
        if (arr[temp1] != arr[i])
        {
            arr[temp1 + 1] = arr[i];
            temp1++;
            n++;
        }
        
    }

    
    for (int i = 0; i <= temp1; i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}