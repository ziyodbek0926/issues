
#include <stdio.h>

int main(){
    int arr[] = {2,4,1,5};
    
    int len = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
        for (int k = 0; k < len - 1; k++)
        {
            int temp = 0;
            if (arr[i] < arr[k])
            {
                temp = arr[i];
                arr[i] = arr[k];
                arr[k] = temp;
            }
            
        }
        
    }
    for (int i = 0; i < len; i++)
    {
        printf("%d",arr[i]);
    }
    
    return 0;
}