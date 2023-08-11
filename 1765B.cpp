#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int arr[32];
    for(int i=5,j=0;i<=100;i+=3)
    {
        arr[j]=i;
        j++;
    }

    while(t--)
    {
        int n;string s;
        cin>>n;
        cin>>s;
        int a=0;
        if(n==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        else if(n==2)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else
        {
            a=0;
            for(int j=0;j<32;j++)
            {
                if(arr[j]==n)
                {
                    a++;
                    cout<<"NO"<<endl;
                    break;
                }
            }
        }
        int c=0;
        if(a==0)
        {
            for(int i=1,j=1;j<=n/3;i+=3,j++)
            {
                    if(s[i]==s[i+1])
                    {
                        c++;
                        continue;
                    } 
            }
        }
        if(c==n/3) cout<<"YES"<<endl;
        else if(a==0) cout<<"NO"<<endl;
        
    }
}