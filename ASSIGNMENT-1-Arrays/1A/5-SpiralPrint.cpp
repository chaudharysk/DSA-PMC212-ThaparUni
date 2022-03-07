#include<iostream>
using namespace std;


int main()
{
    int arr[5][4]={{1,2,3,4},{14,15,10,5},{13,20,17,6},{12,19,18,7},{11,10,9,8}};
    int dimN1=5;
    int dimN2=4;

    int row = dimN1-1;
    int rowInit=0;
    int col = dimN2-1;
    int colInit=0;
    //for(int k=0;k<8;k++)
    while((row-rowInit)>0 || (col-colInit)>0)
    {
        for(int i=colInit;i<=col;i++)
        {
            cout<<arr[rowInit][i]<<" ";
        }
        ++rowInit;
        //cout<<endl;
        for(int i=rowInit;i<=row;i++)
        {
            //cout<<endl;
            cout<<arr[i][col]<<" ";
        }
        --col;
        //cout<<endl;
        for(int i=col;i>=colInit;i--)
        {
            cout<<arr[row][i]<<" ";
        }
        --row;
       // cout<<endl;
        for(int i=row;i>=rowInit;i--)
        {
            cout<<arr[i][colInit]<<" ";
        }
        ++colInit;
    }
    

}