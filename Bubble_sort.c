#include<stdio.h>

void printArray(int *a , int n){
    for(int i =0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
void bubbleSortAdaptive(int *a,int n){
    int temp;
    int isSorted = 0;
    for(int i = 0;i< n-1 ;i++){ // For no. of passes
        printf("Working on pass number %d\n", i+1);
        isSorted = 1;
        for(int j= 0 ;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                 temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                isSorted = 0;
            }
        }
        if(isSorted){
            return;
        }
    } 
}

void bubbleSort(int *a,int n){
    int temp;
    
    for(int i = 0;i< n-1 ;i++){ // For no. of passes
        printf("Working on pass number %d\n", i+1);
        
        for(int j= 0 ;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                 temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                
            }
        }
        
    } 
}
int main(){
    // int a[] = {12,54,65,7,23,9};
    int a[] = {1,2,3,4,5,6};
    int n = 6;
    printArray(a,n); // Printing the array before sorting 
    bubbleSort(a,n); // Function to sort the array
    printArray(a,n); // Printing the array after sorting

    return 0;
}