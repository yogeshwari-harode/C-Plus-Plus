#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v1{10,20,30,40,50};
    vector <char> v2(4);
    vector <int> v3(5,10);
    vector <string> v4(3,"Hello");
    
    cout<<"v1"<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<v1[i]<<" ";
        //here [] is the subscript operator
    }
    cout<<endl;
    
    
    cout<<"v3"<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<v3[i]<<" ";
    }
    cout<<endl;
    
    cout<<"v4"<<endl;
    for(int i=0; i<3; i++)
    {
        cout<<v4[i]<<" ";
    }
    
    return 0;
}
