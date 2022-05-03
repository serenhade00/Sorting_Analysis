#include <bits/stdc++.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

void selection_sort(vector<int>& a)
{
	int len = a.size();
	int min;
	for(int i=0; i<len-1; i++)
	{
		min = i;
		for(int j=i+1; j<len; j++)
		{
			if(a[j]<a[min])
				min = j;
		}
		swap(a[i], a[min]);
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
	selection_sort(a);
	en = clock();
	
	t = (double)(en-st)/CLOCKS_PER_SEC;
	
	cout << "Time Elapsed: " << t;
}