#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t;
    scanf("%d",&t);
    int i;
    for(i=0;i<t;i++)
    {
        int n;
        int j,k,l,m;
        scanf("%d",&n);
        int s;
        s=n-1;
        printf("Case #%d:\n",i+1);
        for(j=0;j<n;j++)
        {
            for(l=0;l<s;l++)
                printf(" ");
            for(k=0;k<n-s;k++)
                printf("*");
            printf("\n");
            s--;
        }
    }
    return 0;
}
