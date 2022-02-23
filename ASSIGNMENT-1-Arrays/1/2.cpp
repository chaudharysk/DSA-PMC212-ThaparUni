#include<iostream>
using namespace std;
void DELETE(int *arr,int *n,int delIndex);
void DISPLAY(int *arr,int *n);
int remDup(int *arr,int *n);


int main()
{
    int arr[]={1,2,3,44,45,44,44,44,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    size=12;
    remDup(arr,&size);
    DISPLAY(arr,&size);
}


void DELETE(int *arr,int *n,int delIndex)
{


    for(int i=delIndex+1;i<*n;i++)
    {
        arr[i-1]=arr[i];
    }
    --*n;
}
void DISPLAY(int *arr,int *n)
{
    cout<<"\n YOU ARE IN DISPLAY\n";
    for(int i = 0 ; i<*n;i++)
    {
        cout<<"\n Value at index <" << i <<"> is :"<<arr[i];
    }
    cout<<endl;
}

int remDup(int *arr,int *n)
{
    for(int i=0;i<*n;i++)
    {
        for(int j=i+1;j<*n;j++)
        {
            if(arr[i]==arr[j])
            {
                DELETE(arr,n,j);
                j--;
            }
        }
    }
}