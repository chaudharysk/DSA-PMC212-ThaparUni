#include<iostream>
using namespace std;
int binarySearch(int *arr, int size, int x)
{
    int n=size;
    int start = 0;
    int end = size-1;
    while(n>0)
    {
        int mid = (start + end)/2;
        if(arr[mid]==x)
        {
            cout<<"Found at index : "<<mid<<endl;
            return mid;
            
        }
        else if(arr[mid]>x)
        {
            end = mid-1;
        }
        else
        {
            start=mid+1;
        }
        n=n/2;
    }
    cout<<"Element not Found"<<endl;
    return-1;
}

int main()
{
    int arr1[]={64,34,25,12,22,11,90};
    int size=7;
    binarySearch(arr1,size,90);
}