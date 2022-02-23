// storing diagonal matrix Diagonal Matrix 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Dimensionof Matrix : ";
    cin>>n;
    int arrDiaMat[100]; // 1D array that will store diagonal elements
    for(int i=0;i<n;i++)
    {
        cin>>arrDiaMat[i];
    }

    // Printing the matrix

    for(int i = 0; i<n-1; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(i==j)
            {
                cout<<arrDiaMat[i]<<"  ";
            }
            cout<<0<<"  ";
        }
        cout<<endl;
    }
    

}