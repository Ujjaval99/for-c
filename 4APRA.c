#include<stdio.h>

void printarray(int a[],int n){
    for (int i = 0; i<n; i++){
        printf("%d",a[i]);
    }
    printf("\n");
}

void reverse (int arr[],int n){
    int temp;
    for(int i = 0; i < n/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    
}

int main ()
{
    int arr [] = {1,2,3,4,5};
    printarray(arr,5);
    reverse(arr,5);
    printarray(arr,5);
    return 0;
}
