// Lower Triangular
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Dimension of Matrix : ";
    cin>>n;
    int userMat[100][100]; 

    // Taking INPUT
    for(int i=0;i<n;i++)
    {
        cout<<"Enter <" <<i<< "> ROW elements"<<endl;
        for(int j=0;j<n;j++)
        {
            cin>>userMat[i][j];
        }
        cout<<endl;
    }

    cout<<" *************** ENTERED MATRIX IS ************"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<userMat[i][j]<<" ";
        }
        cout<<endl;
    }


    int lowerDiag[100]; // 1D array that will store lower Diagonal
    int size= (n*(n+1))/2; // 1+2+...n;
    int arrIndx=0;

    // STORING INTO 1D ARRAY
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if( (i-j)>=0 )
            {
                lowerDiag[arrIndx]=userMat[i][j];
                ++arrIndx;
            }
        }
    }
    // PRINTING 1D Array
    arrIndx=0;
    cout<<"************** STORED 1D ARRAY **********"<<endl;
    for(int i=0;i<size;i++)
        {
            cout<<lowerDiag[arrIndx]<<" ";
            ++arrIndx;
        }
    cout<<endl;
    // PRINTING 2D Array
    cout<<"************** STORED 1D ARRAY in 2D FORM **********"<<endl;
    arrIndx=0;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if( (i-j)>=0)
            {
                cout<<lowerDiag[arrIndx]<<" ";
                ++arrIndx;
            }
            else
            {
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }

}