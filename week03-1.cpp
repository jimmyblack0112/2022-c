#include <stdio.h>
int main()
{
    printf("請輸入兩個數字:");
    int a,b;
    scanf("%d%d", &a,&b);
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d * %d = %d\n",a,b,a*b);
    printf("%d / %d = %d\n",a,b,a/b);
    printf("%d / %d 的餘數 %d\n",a,b,a%b);
}
