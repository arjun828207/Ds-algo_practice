#include<iostream>
using namespace std;
void rev_string(string s)
{
  int len=s.length();
  if(len==0)
  {
      return;
  }
  string ros=s.substr(1);
  rev_string(ros);
  cout<<s[0];
}
int main()
{
    rev_string("binod");
}