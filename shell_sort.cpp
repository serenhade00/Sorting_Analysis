#include <bits/stdc++.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

void shell_sort(vector<int>& a)
{
	int gap, i, j, key;
	int len = a.size();
	for (gap = len / 2; gap > 0; gap /= 2)
	{
		if (gap % 2 == 0)
			++gap;

		for (i = gap; i <= len-1; ++i)
		{
			key = a[i];
			for (j = i; j >= gap && a[j - gap] > key; j -= gap)
				a[j] = a[j - gap];
			a[j] = key;
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
	shell_sort(a);
	en = clock();
	
	t = (double)(en-st)/CLOCKS_PER_SEC;
	
	cout << "Time Elapsed: " << t;
}