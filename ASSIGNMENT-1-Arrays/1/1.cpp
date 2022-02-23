#include<iostream>
using namespace std;
int SEARCH(int *arr,int *n);
void CREATE(int *arr,int *n)
{
    cout<<"\n YOU ARE IN CREATE\n";
    cout<<"\n Enter the Size : ";
    cin>>*n;
    for(int i = 0 ; i<*n;i++)
    {
        cout<<"\n Enter the "<<i<<" value: ";
        cin>>arr[i];
    }
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
void INSERT(int *arr,int *n) 
{
    cout<<"\n YOU ARE IN INSERT\n";
    int x, ind;
    cout<<"\n Enter the value to be inserted : ";
    cin >> x;
    cout<<"\n Enter the <index> where you want to insert: ";
    cin >> ind;
    for(int i =*n; i>=ind ;i--)
    {
        cout<<"\n IN LOOP OF INSERT\n";
        arr[i+1]=arr[i];
    }
    arr[ind]=x;
    // Incrementing array size because it is Insert operation.
    ++*n;
    cout<<"\n INSERT END\n";

}
void DELETE(int *arr,int *n)
{

    cout<<"\n YOU ARE IN DELETE\n";
    int delIndex=SEARCH(arr, n);
    if(delIndex==-1)
    {
        return;
    }
    for(int i=delIndex+1;i<*n;i++)
    {
        arr[i-1]=arr[i];
    }
    --*n;

    
}
int SEARCH(int *arr,int *n)
{
    cout<<"\n YOU ARE IN SEARCH\n";
    int search;
    cout<<"Enter the element you want to search: ";
    cin>>search;
    for(int i = 0;i< *n; i++ )
    {
        if(search==arr[i])
        {
            cout<<"Least search position of given element is: "<<i<<endl;
            return i;
        }
    }
    cout<<"The element does not exist in the Array"<<endl;
    return -1;
}



int main()
{ 
    int arr[100];
    int size;
    int n;
    while(1)
    {
        cout<<"********MENU***********"<<endl;
        cout<<"| PRESS 1: TO CREATE  |\n| PRESS 2: TO DISPLAY |\n| PRESS 3: TO INSERT  |\n| PRESS 4: TO DELETE  |\n| PRESS 5: TO SEARCH  |\n| PRESS 6: TO EXIT    |\n";
        cout<<"***********************"<<endl;
        cout<<"Enter: ";
        cin>>n;
        if(n==6)
        {
            break;
        }
        switch(n)
        {
            case 1:
                CREATE(arr,&size);
                break;
            case 2:
                DISPLAY(arr,&size);
                break;
            case 3:
                INSERT(arr,&size);
                break;
            case 4:
                DELETE(arr,&size);
                break;
            case 5:
                SEARCH(arr,&size);
                break;
        }
    }
    cout<<"\nPROGRAM EXITED";
}
