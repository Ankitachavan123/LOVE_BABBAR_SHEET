#include <bits/stdc++.h>
using namespace std;

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
	int min_ele=0;
	cin >> min_ele;
	int max_ele=0;
	cin >> max_ele;
	sort(arr.begin(),arr.end());
	cout << arr[min_ele-1] << endl; 
	cout << arr[max_ele-1];
		
	return 0;
}
