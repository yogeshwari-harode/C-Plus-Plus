#include<bits/stdc++.h>
using namespace std;
int main()
{
    float P,R,T,simple_interest;
    cout<<"Enter principle : ";
    cin>>P;
    cout<<"Enter Rate : ";
    cin>>R;
    cout<<"Enter Time : ";
    cin>>T;
    simple_interest=(P*R*T)/100;
    cout<<simple_interest;
    return 0;
}
