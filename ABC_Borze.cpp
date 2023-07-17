#include <iostream>
#include <string>
using namespace std;
 
int main()
{
  string s;
  int n;
  cin>>s;
  while (s.find("--")!=-1) 
  {
      n=s.find("--");
      s.replace(n, 2, "2");
  }
  while (s.find("-.")!=-1) 
  {
      n=s.find("-.");
      s.replace(n, 2, "1");
  }
  while (s.find(".")!=-1) 
  {
      n=s.find(".");
      s.replace(n, 1, "0");
  }
  cout<<s;
}
