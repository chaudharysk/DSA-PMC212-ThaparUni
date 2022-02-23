#include<iostream>
using namespace std;
#include "arrOperation.h"

void reverseArr(int *arr, int *size);
int main()
{
    int arr[]={1,2,3 ,5, 7,8,9};
    int size=7;
    reverseArr(arr,&size);
    DISPLAY(arr,&size);

}

void reverseArr(int *arr, int *size)
{
    int i = 0; // intial index
    int j = *size-1; // final index
    while(j>i)
    {
        int temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }

}
