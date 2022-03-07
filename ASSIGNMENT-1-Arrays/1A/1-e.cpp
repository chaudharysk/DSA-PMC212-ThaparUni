// Symmetric
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


    int lowerDiag[100]; // 1D array that will store symmetric Matrix
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
    //arrIndx=0;
    cout<<"************** STORED 1D ARRAY **********"<<endl;
    for(int i=0;i<size;i++)
        {
            cout<<lowerDiag[i]<<" ";
            //++arrIndx;
        }
    cout<<endl;




    // PRINTING Symmetric Matrix 1D Array
    cout<<"************** STORED 1D ARRAY in 2D FORM **********"<<endl;
    arrIndx=0;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if( j<=i)
            {
                int k=(i*(i+1)/2)+j;
                cout<<lowerDiag[k]<<" ";
            }
            else
            {
                int k2=(j*(j+1)/2)+i;
                cout<<lowerDiag3[k2]<<" ";
            }
        }
        cout<<endl;
    }

}
