#include <iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=1;i<=n;i++) cin>>a[i];
        cout<<"1 "<<n<<endl;
        // for(int i=1;i<n;i++)
        // {
        //     if(a[i]==a[i+1])
        //     {
        //         cout<<i<<" "<<n<<endl;
        //         break;
        //     } 
        //     else 
        //     {
        //         cout<<"1 "<<n<<endl;
        //         break;
        //     }
        // } 
    }
}