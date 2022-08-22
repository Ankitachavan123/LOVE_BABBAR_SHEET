#include <bits/stdc++.h>
using namespace std;

void first_non_repeating(string s)
{
	unordered_map<char,int>mp;
	string res;
	int l_n_r=0;    //first non repeating element
	for(int i=0;i<s.size();i++)
	{
		//string ss=s[i];
		if(mp.find(s[i])!=mp.end())
		{
			mp.erase(s[i]);
			l_n_r+=1;
			for(int j=0;j<res.size();j++)
			{
				if(res[j]==s[l_n_r])
				{
					l_n_r++;
				}
			}
            int flag=-1;
            for(int k=0;k<res.size();k++)
            {
             if(s[l_n_r]==res[k])
             {
			    res.push_back('#');
                flag=0;
             }
            }
            if(flag==-1)
            {
                res.push_back(s[l_n_r]);
            }
		}
		else
		{
			mp[s[i]]=i;
			res.push_back(s[l_n_r]);
		}
	}
    cout << res;
	//return res;
}

int main()
{
	string s;
	cin >> s;
	first_non_repeating(s);
	//cout << ans ;
	return 0;
}

