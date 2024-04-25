using namespace std;
#include<bits/stdc++.h>
#include<iostream>
int count_dig(int n)
{
	int s=0,d;
	while(n>0)
	{
		d=n%10;
		s=s+d;
		n=n/10;
	}
	return s;
}
int main()
{
	int N,i;
	cin>>N;
	int numFiles;
	for(i=1;i<=N;i++)
	{
		cin>>numFiles;
		cout<<count_dig(numFiles)<<" ";
	}
	return 0;
}
