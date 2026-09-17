#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n,p,q;int c=0;
  cin >>n;
  for(int i=1;i<=n;i++)
  { 
  cin >> p>>q;
  if(p==i && q==i)
   {
    cout << 0;
   }
  else
   { 
    ++c;
   }
  } 
  cout << c;
  return 0;
}