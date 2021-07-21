#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;  cin>>n;
    int arr[n][n];
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=n ; j++)
        {
            cin>>arr[i][j];
        }
    }
    
    int k;  cin>>k;
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=n ; j++)
        {
            if(arr[i][j]==k)
            {
                cout<<"The Element Present at the index ["<<i<<"]["<<j<<"]";
            }
        }
    }
    
    
    
    return 0;
}
