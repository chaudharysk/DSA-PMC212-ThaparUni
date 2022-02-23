// Transpose of Matrix
#include<iostream>
using namespace std;
int main()
{
    int m=3;
    int n=4;
    int mat[m][n]={{1,2,3,4},{5,6,7,8},{51,61,17,18}};
    int traMat[m][n];
 for(int i=0;i<m;i++)
{
    for(int j=0; j<n;j++)
    {
         traMat[j][i]=mat[i][j];
    }

}
for(int i=0;i<n;i++)
{
    for(int j=0; j<m;j++)
    {
        cout<<traMat[i][j]<<"    ";
    }
    cout<<endl;
}
    return 0;
}