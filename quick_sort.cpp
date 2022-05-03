#include <bits/stdc++.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int n = 10;
int arr[1000001];

void quick_sort(int st, int en) 
{ 
	  if(en <= st+1) return; 
	  int pivot = arr[st]; 
	  int l = st+1; // 포인터 l
	  int r = en-1; // 포인터 r
	  while(1){
		while(l <= r && arr[l] <= pivot) l++;
		while(l <= r && arr[r] >= pivot) r--;
		if(l > r) break; 
		swap(arr[l], arr[r]);
	  }
	  swap(arr[st], arr[r]);
	  quick_sort(st, r);
	  quick_sort(r+1, en);
}

int main() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	clock_t st, en;
	double t;
	cin >> n;
	
	srand(time(NULL));
	for(int i=0; i<n; i++)
		arr[i] = rand() % 1000000;
	st = clock();
	quick_sort(0, n);
	en = clock();
	
	t = (double)(en-st)/CLOCKS_PER_SEC;
	
	cout << "Time Elapsed: " << t;
}