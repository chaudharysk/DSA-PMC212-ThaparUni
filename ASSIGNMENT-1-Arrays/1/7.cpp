// Design the Logic to Find a Missing Number in a Sorted Array

#include<iostream>
using namespace std;
int missingElement(int *arr, int size)
{
    int sumTotal=(arr[size-1]*(arr[size-1]+1))/2;
    cout<<sumTotal<<endl;
    int total=0;
    for(int i=0;i<size;i++)
    {
        total=total+arr[i];
    }
    cout<<"Missing element is : "<<sumTotal-total<<endl;
    return sumTotal-total;
}
//Missing Element in AP
int missingElementAP(int *arr, int size)
{
    if(size<3) // there will no missing elements in this case
    {
        return -1;
    }
    int commDiff;
    if( (arr[1]-arr[0]) <= (arr[size-1]-arr[size-2]) ) // comparing the commDiff of last two and first two, the smaller among them is cD.
    {
        commDiff=arr[1]-arr[0];
    }
    else
    {
        commDiff=arr[size-1]-arr[size-2];
    }
    //cout<<"CD: "<<commDiff<<endl;
    float sumofAP=( (size+1)*(arr[0]+arr[size-1]) ) / 2; // (n/2)*(a+l)
    cout<<"Sum of ap  :"<<sumofAP<<endl;
    // sum of array
    int sumArr=0;
    for(int i=0;i<size;i++)
    {
        sumArr=sumArr+arr[i];
    }
    int missingElement=sumofAP-sumArr;
    if(missingElement==0)
    {
        return -1;
    }
    cout<<"Missing element is : "<<missingElement<<endl;
    return missingElement;
}
int main()
{
    int arr[]={2,5,8,11,14,20};
    missingElementAP(arr,6);
}