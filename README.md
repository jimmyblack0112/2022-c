# 2022-c
資傳一甲
# week06
## step01-1
模仿它的鷹架
```cpp
#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++){
        int star=i*2-1;
        printf("鷹架:%d樓 %d星\n",i,star);
    }
}
```
## step01-2
先把樓層鷹架架好, 再去思考有幾個空格、有幾個星星。
```cpp
#include <stdio.h>
int main()
{
    for (int i=1;i<=5;i++){
        int space=5-i;
        int star=i*2-1;
        for(int k=0;k<space;k++){
            printf(" ");
        }
        for(int k=0;k<star;k++){
            printf("*");
        }
        printf("鷹架:%d樓 %d空格 %d星\n",i,space,star);
    }
}
```
## step01-3
找到最大公因數
#include <stdio.h>
int main()
{
    printf("請輸入2個數: ");
    int a,b,ans;
    scanf ("%d %d",&a,&b);
    for(int i=1; i<=a; i++) {
        if(a%i==0 &&b%i==0)
            ans=i;
    }
    printf("找到ans:%d",ans);
}
```
## step01-4
約分
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入兩個數字: ");
    int a, b, c;
    scanf("%d %d", &a,&b);

    while(1) {
        c=a%b;
        printf("a:%d b:%d c:%d\n",a,b,c);
        if(c==0)
            break;
        a=b;
        b=c;
    }
    printf("中的是:%d",b);
}
```
## step01-5
輾轉相除法
```cpp
#include <stdio.h>
int main()
{
    int a=10;

    if(-999)
        printf("a大於0\n");
    if(-3)
        printf("-3成立\n");
    \
    if(-2)
        printf("-成2立\n");
    if(-1)
        printf("-1成立\n");
    if(0)
        printf("0不成立所以甚麼都沒印\n");
    if(1)
        printf("1成立\n");
    if(2)
        printf("2成立\n");
    if(3)
        printf("3成立\n");
    if(4)
        printf("4成立\n");
    if(999)
        printf("999成立\n");
    if("a==0")
        printf("不管甚麼東西,幾乎都成立\n");
}
```

#week07
##step01-1
很長很長的整數, 要用 long long int
```cpp
#include <stdio.h>
int main()
{
    int n=1234567812345678;
    printf("%d\n",n);
    long long int a=1234567812345678;
    printf("%lld\n",a);
}
```
##step01-2
最大公因數
```cpp
#include <stdio.h>
int main()
{
    long long int a,b;
    scanf("%lld %lld",&a,&b);

    long long int ans;
    for(long long int i=1; i<=a; i++) {
        if(a%i==0&&b%i==0)
            ans=i;
    }
    printf("答案是:%lld\n",ans);
}
```
##step01-3
輾轉相除法
```cpp
#include <stdio.h>
int main()
{
    long long int a,b,c;
    scanf("%lld%lld",&a,&b);

    while(1){
        c=a%b;
        printf("%lld %lld %lld\n",a,b,c);
        if(c==0) break;
        a=b;
        b=c;
    }
    printf("答案是:%lld\n",b);
}
```
##step01-4
```cpp
#include <stdio.h>
int main()
{
    int n=1234;
    while(n>0){
        printf("個位數是%d\n",n%10);
        n=n/10;
    }
}
```
