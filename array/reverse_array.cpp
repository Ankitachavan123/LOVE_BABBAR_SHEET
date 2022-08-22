#include <bits/stdc++.h>
using namespace std;

vector<int>reverse(int n,vector<int>arr)
{
	int x=n;
	for(int i=0;i<n/2;i++)
	{
		swap(arr[i],arr[x-1]);
		x--;
	}
	return arr;
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
	vector<int>ans=reverse(n,arr);
	for(int i=0;i<ans.size();i++)
	{
		cout << ans[i] <<" ";
	}
	
	return 0;
}
