//array nechta n bor

#include <stdio.h>

int main(){
    int n,x = 0;
    int arr[] = {2,4,6,4};
    int len = sizeof(arr)/sizeof(arr[0]);

    scanf("%d",&n);
    for (int i = 0; i < len; i++)
    {
        if(n == arr[i]){
            x++;
        }
    }
    printf("%d",x);
    return 0;
}