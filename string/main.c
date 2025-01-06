// 2ta string ni xarflari


// Misol Sharti
// Berilgan 2ta string ni xarflarini katta kichikligiga etibor bermasdan taqqoslasak ular bir biriga tengmi?

// Namuna:

// strA = "dasturLAsh"
// strB = "DasturlaSH"
// outout: true



// Maslahat
// Shoshmasdan panika qilmasdan miyyani ishlating.

#include <stdio.h>

float tengmi(char* strA,char* strB,int len1,int len2){
    int a = 0;
    if (len1 == len2)
    {
        for (int i = 0; i < len1; i++)
        {
            if (strA[i] == strB[i] || strA[i] == strB[i] + 32 || strA[i] == strB[i] - 32)
            {
                a++;
            }   
        }
        if (a == len1)
        {
            printf("true");
        }else{
            printf("false");
        }
    }else{
        printf("false");
    }
    
}

int main() {

    char strA[] = "dasturLAsh";
    char strB[] = "DasturlaSH";

    int len1 = sizeof(strA)/sizeof(strA[0]);
    int len2 = sizeof(strB)/sizeof(strB[0]);

    tengmi(strA,strB,len1,len2);
    return 0;
}

