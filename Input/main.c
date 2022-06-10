#include <stdio.h>
#include <stdlib.h>

int main(){
    int sum = 0;
    int num = 0;
    while(scanf("%d",&sum) != EOF)
    {
        int *numList = (int *)malloc(sizeof(int) * sum);
        for(int k = 0; k < sum; k++)
        {
            scanf("%d",&num);
            numList[k] = num;
        }
        for(int i = 0 ; i < sum ; i ++)
            printf("%d ",numList[i]);
    }
    return 0;
}