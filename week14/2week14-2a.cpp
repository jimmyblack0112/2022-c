#include <Stdio.h>
int main()
{
	int m,n=0;
	scanf("%d",&m);
	for(int i=1;i<=m;i++)
		n+=11*i;
	printf("%d",n);
}
