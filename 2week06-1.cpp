#include <stdio.h>
int main()
{
    FILE*fout=fopen("output.txt","w+");
    fprintf(fout,"Hello world123\n");
}
