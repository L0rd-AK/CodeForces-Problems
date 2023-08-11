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
  long long int n,x,mx1=0,mx2=1000;
  char ch;
  string s;
  vector<int> a,b;
  in>>n;
  f(i,0,n){cin>>x;a.push_back(x);}

  f(i,1,n-1){
    x=a[i+1]-a[i];
    mx1=max(mx1,x);
  }
  f(i,1,n-1){
    x=abs(a[i]-a[i-1])+abs(a[i]-a[i+1]);
    mx2=min(mx2,x);
  }

  if(mx1>mx2) out<<mx1;
  else out<<mx2;
  
  return 0;
}