#include<stdio.h>
int linearSearch(int arr[], int size, int element){
    for(int i = 0;i<size;i++)
    {
        if (arr[i]==element){
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int size, int element){
    int mid, high, low;
    low = 0;
    high = size-1;
    
    while(low<=high){
        mid = (low+high)/2;
        if(arr[mid]==element){
            return mid;
        }
        if(arr[mid]<element){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    
    return -1;

}

int main(){
    // Unsorted array for linear search
    int arr[] = {1,2,3,4,5,6,7,8,9,0,87};
    int size = sizeof(arr)/sizeof(int);
    int element = 4;
    int searchIndex = linearSearch(arr,size,element);
    printf("The element %d was found at index %d \n", element,searchIndex);

    // Sorted array for binary search
    int arr1[] = {2,3,4,6,8,9,45,78};
    int size1 = sizeof(arr1)/sizeof(int);
    int element1 = 45;
    int searchIndex1 = binarySearch(arr1,size1,element1);
    printf("The element %d was found at index %d \n", element1,searchIndex1);

    return 0;
}