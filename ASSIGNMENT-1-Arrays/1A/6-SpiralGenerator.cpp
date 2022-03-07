#include<iostream>
using namespace std;


int main()
{
    int val = 1;
    int arr[5][4];
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
            arr[rowInit][i]=val;
            ++val;

        }
        ++rowInit;
        //cout<<endl;
        for(int i=rowInit;i<=row;i++)
        {
            //cout<<endl;
            arr[i][col]=val;
            ++val;
        }
        --col;
        //cout<<endl;
        for(int i=col;i>=colInit;i--)
        {
            arr[row][i]=val;
            ++val;
        }
        --row;
       // cout<<endl;
        for(int i=row;i>=rowInit;i--)
        {
            arr[i][colInit]=val;
            ++val;
        }
        ++colInit;

        

    }
    // Print Array
    for(int i=0;i<dimN1;i++)
    {
        for(int j=0;j<dimN2;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    

}