#include<iostream>
using namespace std;


int main()
{
    int arr[5][4]={{1,2,3,4},{14,15,10,5},{13,20,17,6},{12,19,18,7},{11,10,9,8}};
    int dimN1=5;
    int dimN2=4;

    // Row Sums
    for(int i=0;i<dimN1;i++)
    {
        int sum=0;
        for(int j=0;j<dimN2;j++)
        {
            sum=sum+arr[i][j];
        }
        cout<<"Sum of <"<<i<<"> row is: "<<sum<<endl;
    }
    // Column Sums
    for(int i=0;i<dimN2;i++)
    {
        int sum=0;
        for(int j=0;j<dimN1;j++)
        {
            sum=sum+arr[j][i];
        }
        cout<<"Sum of <"<<i<<"> column is: "<<sum<<endl;
    }
}