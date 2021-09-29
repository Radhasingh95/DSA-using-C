#include<stdio.h>

void printArray(int*a, int n)
{
    for(int i = 0;i<n;i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void insertionSort(int *a, int n)
{
    int key, j;
    // Loop for passes
    for(int i = 1;i<n;i++)
    {
        key = a[i];
        j=i-1;
        // Loop for each pass
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1] = key;
    }
}
int main()
{
    
    int a[] = {12, 54, 65, 7, 23, 9};
    int n = 6;
    printArray(a, n);
    insertionSort(a,n);
    printArray(a, n);
    return 0;
}