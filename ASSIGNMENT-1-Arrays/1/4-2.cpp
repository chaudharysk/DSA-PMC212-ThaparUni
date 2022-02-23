// MATRIX MULTIPLICATION CODE
#include<iostream>
using namespace std;
// struct two_d_array
// {
//     int arr[100][100]={0};
//     int m=0; // dimensions
//     int n=0;
// };
// void matrixMul(two_d_array arr1, two_d_array arr2, two_d_array * output)
// {
//     for(int i=0;i<arr1.m;i++)
//     {
//         for(int j=0;j<arr2.n;j++)
//         {
//             int sum=0;
//             for(int k=0;k<arr1.n;k++)
//             {
//                 sum=sum+arr1.arr[i][k]*arr2.arr[k][j];
//                 output->arr[i][j]=sum;
//             }
//         }
//     }
// }


int main()
{
    int m1=3;
    int n1=4;
    int m2=4;
    int n2=2;
    int mat1[m1][n1]={{1,2,3,4},{5,6,7,8},{51,61,17,18}};
    int mat2[m2][n2]={{1,2},{2,3},{2,34},{12,3}};
    int resMat[m1][n2];
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            int sum=0;
            for(int k=0;k<n1;k++)
            {
                sum=sum+mat1[i][k]*mat2[k][j];
                resMat[i][j]=sum;
            }
        }
    }
for(int i=0;i<m1;i++)
{
    for(int j=0; j<n2;j++)
    {
        cout<<resMat[i][j]<<"    ";
    }
    cout<<endl;
}
    return 0;
}