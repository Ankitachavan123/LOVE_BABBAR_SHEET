#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int,int>p1,pair<int,int>p2)
{
	if(p1.second==p2.second)
	{
		return p1.first<p2.first;
	}
	return p1.second<p2.second;
}

vector<int>min_freq(int n,vector<int>&arr)
{
	unordered_map<int,int>mp;
	for(int i=0;i<n;i++)
	{
		mp[arr[i]]++;
	}
	
	vector<pair<int,int>>p;
	for(auto it : mp)
	{
		p.push({it.first,it.second});
	}
	
	sort(p.begin(),p.end(),compare);
	
	vector<int>ans;
	for(auto it : p)
	{
		ans.push_back(p.first);
	}
	return ans;
}

int main()
{
	int n;
	cin >> n;
	vector<int>arr;
	
	for(int i=0;i<n;i++)
	{
		int x;
		cin >> x;
		arr.push_back(x);
	}
	
	vector<int>ans = min_freq(n,arr);
	
	for(auto it : ans)
	{
		cout << it <<" ";
	}
}
