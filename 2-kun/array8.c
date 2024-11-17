// Bu yer da a,b, array[] berilgan. Shu massivning a indexsiga b sonini joylashtiring  va massivni konsolga chiqardim

#include <stdio.h>

int main(){
    int arr1[] = {4,5,6,7};
    int a,b;
    
    scanf("%d %d",&a,&b);

    int len = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[len+1];
    int index = 0;
    for (int i = 0; i < len + 1; i++)
    {
        if(i == a){
            arr2[i] = b;
          
        }else{
            arr2[i] = arr1[index];
            index++;
        }
    }

    for (int i = 0; i < len + 1; i++)
    {
        printf("%d",arr2[i]);
    }
    return 0;
}