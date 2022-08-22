#include <bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int>&arr,vector<int>&ans,int n)
{
	for(int i=0;i<n;i++)
	{
		int key1=arr[i];			// array element at ith index
		int key2=ans[i];			// count of array[i]
		
		int j=i-1;
		
		while(j>=0 && ans[j]<key2)
		{
			arr[j+1]=arr[j];
			ans[j+1]=ans[j];
			j--;
		}
		
		arr[j+1]=key1;
		ans[j+1]=key2;
	}
}

vector<int>decToBin(int n,vector<int>arr)
{
	int *ar=arr.data();
	vector<int>count_setBits;
	int k=0;
	for(int i=0;i<n;i++)
	{
		int number=ar[i];
		int count=0;
		vector<int>binary;
		while(number>0)
		{
			binary.push_back(number%2);
			number=number/2;
		}
		for(int j=0;j<binary.size();j++)
		{
			if(binary[j]==1)
			{
				count++;
			}
		}
		count_setBits.push_back(count);
	}
	return count_setBits;
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
	vector<int>ans=decToBin(n,arr);
      insertion_sort(arr,ans,n);
      
      for(auto it:arr)
      {
      	cout << it << " ";
	}
	
	return 0;
}
