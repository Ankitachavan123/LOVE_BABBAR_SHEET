#include <bits/stdc++.h>
using namespace std;

int half_size(int n,vector<int>&arr)
{
	unordered_map<int,int>mp;
	priority_queue<int>pq;
	int size=n/2;
	int count=0;
	int element=0;
	
	for(int i=0;i<n;i++)
	{
		mp[arr[i]]++;
	}
	
	for(auto it : mp)
	{
		pq.push(it.second);
	}
	
	while(!pq.empty())
	{
		element += pq.top();
		pq.pop();
		count++;
		if(element >= size)
		{
			return count;
		}
	}
	return 0;
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
	int ans = half_size(n,arr);
	cout << ans ;
	return 0;
}
