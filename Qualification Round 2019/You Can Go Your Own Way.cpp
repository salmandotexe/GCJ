//Verdict:    AC  -   AC    - AC
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int tc=1;tc<=T;tc++)
    {
        int N;
        cin >> N;
        string s;
        cin >> s;
        cout <<"Case #"<<tc<<": ";
        for(auto c:s)
        {
            if(c=='S') cout <<'E';
            else cout <<'S';
        }

        cout<<endl;
    }
}
