// Arraydagi o'xshash elementlar

#include <stdio.h>

int main(){
    int arr[] = {1,2,1,4};
    int len = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len; j++)
        {
            if (arr[i] = arr[j])
            {
                printf("array[%d]: %d = array[%d]: %d",i,arr[i],j,arr[j]);
            }   
        }
    }
    return 0;

}