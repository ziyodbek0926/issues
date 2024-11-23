//O'zaro teng arraylar

#include <stdio.h>
#include <stdbool.h>

int main(){
    int arr1[] = {1,2,3,7,4};
    int arr2[] = {1,2,3,7,6};
    
    bool javob = true;
    int len1 = sizeof(arr1)/sizeof(arr1[0]);
    int len2 = sizeof(arr2)/sizeof(arr2[0]);
    if(len1 == len2)
    {
        for (int i = 0; i < len1; i++)
        {
            if (arr1[i] != arr2[i])
            {
                javob = false;
                break;
            }   
        }
        
    }else{
        javob = false;
    }
    printf("%d",javob);
    return 0;

}