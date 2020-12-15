 #include<bits/stdc++.h>
using namespace std;
int main()
{
  stack<char> s;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
      char x;
      cin>>x;
      if(s.top()!=x)
      s.push(x);
      else
      s.pop();
  }
  cout<<s.size()<<endl;
  int si=s.size();
  while(si--)
  {
      cout<<s.top();
      s.pop();
  }
}
