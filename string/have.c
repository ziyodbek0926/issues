// Misol Sharti
// Berilgan a String da b string bormi yo'qmi aniqlang.

// Namuna:

// strA = "Shakar"
// strB = "kar"
// outout: bor

#include <stdio.h>

int main(){
    char arr1[] = "sh";
    char arr2[] = "madina";

    int len1 = sizeof(arr1)/sizeof(arr1[0]);
    int len2 = sizeof(arr2)/sizeof(arr2[0]);
    int a = 0;
    for (int i = 0; i < len1; i++)
    {
        for (int k = 0; k < len2; k++)
        {
            if (arr1[i] == arr2[k] || arr1[i] == arr2[k] + 32 || arr1[i] == arr2[k] - 32)
            {   
                a++;
            }
            
        }
        
    }
    if (a > 1)
    {
        printf("%d\n",a);
        printf("bor\n");
    }else{
        printf("Yo'q\n");
    }
    
    
}