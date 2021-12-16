#include <iostream>
#include<string>

using namespace std;

void subseq(string s, string ans)
{
    if(s.length()==0) 
    {
        cout<<ans<<endl;
        return;
    }
    
    char c=s[0];
    subseq(s.substr(1),ans+c);
    subseq(s.substr(1),ans);
}

int main()
{
    string s;
    cin>>s;
    subseq(s,"");

    return 0;
}
