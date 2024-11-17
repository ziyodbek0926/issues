// Bu funksiya Array boshiga son qo'shish uchun
int main(){
    int x[] = {6, 25, 91, 23, 72, 9, 18, 6};
    int len = sizeof(x)/sizeof(x[0]);
    int n;
    scanf("%d",&n);
    int a[len+1];
    a[0] = n;
    for (int i = 0; i < len+1; i++)
    {
        a[i+1] = x[i];
    }

    for (int i = 0; i < len + 1; i++)
    {
        printf("%d, ",a[i]);
    }
    
    return 0;
}