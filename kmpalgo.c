#include<bits/stdc++.h>
void computeLPSArray(char *pat, int M, int *lps);
int KMPSearch(char *pat, char *txt)
{
    int M = strlen(pat);
    int N = strlen(txt);
    int count=0;
    int lps[M];
    computeLPSArray(pat, M, lps);
 
    int i = 0;  // index for txt[]
    int j  = 0;  // index for pat[]
    while (i < N)
    {
        if (pat[j] == txt[i])
        {
            j++;
            i++;
        }
 
        if (j == M)
        {
            count++;
            j = lps[j-1];
        }

        else if (i < N && pat[j] != txt[i])
        {
            if (j != 0)
                j = lps[j-1];
            else
                i = i+1;
        }
    }
    return count;
}
void computeLPSArray(char *pat, int M, int *lps)
{
    int len = 0;
 
    lps[0] = 0; 
    int i = 1;
    while (i < M)
    {
        if (pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else 
        {
            if (len != 0)
            {
                len = lps[len-1];
            }
            else 
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        char a[10000],b[10000];
        scanf("%s",a);
        scanf("%s",b);
        printf("%d\n",KMPSearch(a,b));
    }

    
    return 0;
}
