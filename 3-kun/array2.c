// ikkita arraydagi o'xshash elementlar

#include <stdio.h>

int main(){
    int arr1[] = {1,2,3};
    int arr2[] = {1,4,1,2};

    int len1 = sizeof(arr1)/sizeof(arr1[0]);
    int len2 = sizeof(arr2)/sizeof(arr2[0]);

    for (int i = 0; i < len1; i++)
    {
        for (int k = 0; k < len2; k++)
        {
            if (arr1[i] == arr2[k])
            {
                printf("array[%d]: %d = array[%d]: %d\n",i,arr1[i],k,arr2[k]);
            }
            
        }
        
    }
    return 0;
}