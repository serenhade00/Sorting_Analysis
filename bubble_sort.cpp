#include <bits/stdc++.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

void bubble_sort(vector<int>& a)
{
	int len = a.size();
	
	for(int i=0; i<len-1; i++)
	{
		for(int j=1; j<len-i; j++)
		{
			if(a[j-1] > a[j])
				swap(a[j-1], a[j]);
		}
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
	bubble_sort(a);
	en = clock();
	
	t = (double)(en-st)/CLOCKS_PER_SEC;
	
	cout << "Time Elapsed: " << t;
}