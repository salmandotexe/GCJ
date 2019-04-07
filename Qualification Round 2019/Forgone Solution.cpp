//Verdict:    AC  -   AC    - AC
#include <iostream>
#include <string>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  for(int tc=1;tc<=t;tc++)
  {
    string s;
    cin >> s;
    int n=s.size();
    bool yes=0;
    string t="";
    for(int i=0;i<n;i++)
    {
      if(s[i]=='4')
      {
        s[i]--;
        t+='1';
        yes=1;
        continue;
      }
      if(yes){
        t+='0';
      }
    }

    cout <<"Case #"<<tc<<": "<< s << " "<<t<<endl;
  }
}
