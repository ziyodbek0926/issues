//Elementlar yig'indisi a ga tengmi

#include <stdio.h>

int main(){
    int arr[]= {1,2,3,7,4};
    int n;
    int len = sizeof(arr)/sizeof(arr[0]);

    scanf("%d",&n);

    for (int i = 0; i < len; i++)
    {
        for (int k = 0; k < len - 1; k++)
        {
            if (n == arr[i] + arr[k])
            {
                printf("%d + %d = %d\n",arr[i],arr[k],n);
            }
            
        }
        
    }
    return 0;
}