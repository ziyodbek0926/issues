#include <stdio.h>


int main()
{
    int b[]={12, 21, 36, 71, 24, 85, 12, 30, 25};
    
    int len = sizeof(b)/sizeof(b[0]);
    
    for (int i = 0; i < len; i++)
    {
        for (int k = i + 1; k < len; k++)
        {
            if (b[i] == b[k])
            {
                printf("array[%d]: %d = array[%d]: %d\n",i,b[i],k,b[k]);
            }
            
        }
        
    }
    return 0;
}
