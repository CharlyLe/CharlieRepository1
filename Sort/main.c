#include <stdio.h>
#include <stdlib.h>

void Bubble_sort(int* arr, int len)
{
    int i, j, tmp=0;
    for(i = 0; i < len-1; i++)
    {
        for(j = i+1; j < len; j++)
        {
            if(*(arr+i) > *(arr+j))
            {
                tmp = *(arr+i);
                *(arr+i) = *(arr+j);
                *(arr+j) = tmp;
            }
        }
    }
}

void swap(int* a, int* b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int partition(int* arr, int l, int h)
{
    int Sentry = arr[l];

    while(l < h)
    {
        while(l<h && arr[h]>Sentry)
            h--;
        swap(&arr[l],&arr[h]);
        while(l<h && arr[l]<Sentry)
            l++;
        swap(&arr[l],&arr[h]);
    }
    return l;
}

void quick_sort(int* arr, int l, int h)
{
    if(l >= h)
        return;
    int par = partition(arr, l, h);
    quick_sort(arr, l, par-1);
    quick_sort(arr, par+1, h);
}

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
        //Bubble_sort(numList, sum);
        //quick_sort(numList, 0, sum-1);
        for(int i = 0 ; i < sum ; i ++)
            printf("%d ",numList[i]);
    }
    return 0;
}