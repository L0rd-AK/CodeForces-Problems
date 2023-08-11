#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        set<int> b;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b.insert(a[i]);
        }
        if(n==1) cout<<1<<endl;
        else if(b.size()!=2) cout<<n<<endl;
        else cout<<((n-2)/2)+2<<endl;
    }
}