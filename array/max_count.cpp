#include <bits/stdc++.h>
using namespace std;

int max_freq(int n,vector<int>arr)
{
	int max_count=0;
	int i=0;
	while(i<n)
	{
		int count=0;
		for(int j=i;j<n-1;j++)
		{
			if(arr[j+1]==arr[j])
			{
			      count++;
			}
			else
			{
				break;
			}
		}
		max_count=max(count,max_count);
	}
		i=j+1;
	return max_count;
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
	int res = max_freq(n,arr);
	cout << res;
	return 0;
}
