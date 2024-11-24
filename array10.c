// Eng katta 2chi element

// #include <stdio.h>

// int main(){
//     int arr[] = {1,2,6,4,7,5};
//     int len = sizeof(arr)/sizeof(arr[0]);

//     for (int i = 0; i < len; i++)
//     {
//         for (int k = 0; k < len - 1; k++)
//         {
//             int temp = 0;
//             if(arr[i] > arr[k]){
//                 temp = arr[i];
//                 arr[i] = arr[k];
//                 arr[k] = temp;
//             }
//         }
        
//     }
    
//     // for (int i = 0; i < len; i++)
//     // {
//     //     if (arr[i] > arr[i+1])
//     //     {
//     //         printf("%d",arr[i+1]);
//     //     }
//     // }
//     printf("%d",arr[1]);
//     return 0;
// }

#include <stdio.h>

int main(){
    int arr[] = {1,2,6,4,7,5};
    int max = 0;
    int javob = 0;
    int len = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
        if (arr[i] > max)
        {
            javob = max;
            max = arr[i];
        }
        
    }
    printf("%d",javob);
    return 0;
}