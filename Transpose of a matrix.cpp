#include<bits/stdc++.h>
using namespace std;
int main()
{
    int matrix1[3][3],matrix2[3][3];
    cout<<"Enter the elements of matrix : ";
    
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            cin>>matrix1[i][j];
        }
    }

    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            matrix2[i][j]=matrix1[j][i];
        }
    }

    
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            cout<<matrix2[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
    
    
}
