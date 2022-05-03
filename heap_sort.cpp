#include <bits/stdc++.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int arr[1000050];
void make_heap(int arr[], int len, int parent) 
{
    int largest = parent; 
    int l = 2 * parent + 1; 
    int r = 2 * parent + 2; 
    
    if (l < len && arr[l] > arr[largest]) 
	{
        largest = l;
    }
    if (r < len && arr[r] > arr[largest]) 
	{
        largest = r;
    }
    
    if (largest != parent) 
	{        
        swap(arr[parent], arr[largest]);
        make_heap(arr, len, largest);
    }
}
 
void heap_sort(int arr[], int len) 
{
    
    for (int i = len / 2 - 1; i >= 0; i--) 
	{
        make_heap(arr, len, i);
    }
    for (int i = len - 1; i >= 0; i--) 
	{
        swap(arr[0], arr[i]);
        make_heap(arr, i, 0);
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
	
	srand(time(NULL));
	for(int i=0; i<n; i++)
		arr[i] = rand() % 1000000;
	
	st = clock();
	heap_sort(arr, n);
	en = clock();
	
	
	
	t = (double)(en-st)/CLOCKS_PER_SEC;
	
	cout << "Time Elapsed: " << t;
}