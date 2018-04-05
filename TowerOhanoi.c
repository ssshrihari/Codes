#include <stdio.h>
#include<math.h>

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 1)
    {
        printf("Move %d from %c to %c\n",n, from_rod, to_rod);
        
        return;
    }
    towerOfHanoi(n-1, from_rod, aux_rod, to_rod);
    printf("Move %d from %c to %c\n", n, from_rod, to_rod);
    towerOfHanoi(n-1, aux_rod, to_rod, from_rod);
}
 
int main()
{
        int t;
    scanf("%d",&t);
    while(t--){
    int n; // Number of disks
    scanf("%d",&n);
        printf("%d\n",(int)pow(2,n)-1);
    towerOfHanoi(n, 'A', 'C', 'B');  // A, B and C are names of rods
    }
    return 0;
}
