#include<bits/stdc++.h>
using namespace std;
int minoper(string s)
{
    int cnt=0;
    for(int i=0;i<s.size();i++)
    {
        if((s[i]-'0')!=i%2)
        {
            cnt++;
        }
    }
    return min(cnt,static_cast<int>(s.size()-cnt));

}
int main()
{
    string s="10011101";
    cout<<minoper(s);
}