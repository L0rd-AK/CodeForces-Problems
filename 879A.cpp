#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
#define in cin
#define out cout
#define end endl
#define f(x1,y1,z1) for(int x1=y1;x1<z1;x1++)
#define f1(x1,y1,z1) for(int x1=y1;x1<=z1;x1++)

int main() 
{
  long long int t,k,l,m,n,ans,sum=0,x,max_num=0,min_h=-1;
  char ch;
  string s;
  vector<int> a,b;
  in>>n;
  ans=0;
  while(n--){
    in>>k>>l;
    if(k>ans){
      ans=k;
    }else{
      while(ans>=k){
        k+=l;
      }
      ans=k;
    }
    
  }
  cout<<ans;
  
  return 0;
}
