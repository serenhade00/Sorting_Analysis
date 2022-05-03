#include <bits/stdc++.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

void insertion_sort(vector<int>& a)
{
	int len = a.size();
	int i, j, key;
	for(i = 1; i<len; i++)
	{
		key = a[i];
		for(j = i-1; j>=0 && a[j]>key; j--)
			a[j+1] = a[j];
		a[j+1] = key;
	}
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	clock_t st, en;
	double t;
	cin >> n;
	
	vector<int> a(n);
	
	srand(time(NULL));
	for(int i=0; i<n; i++)
		a[i] = rand() % 1000000;
	st = clock();
	insertion_sort(a);
	en = clock();
	
	t = (double)(en-st)/CLOCKS_PER_SEC;
	
	cout << "Time Elapsed: " << t;
}