// cpp code for Heapsort
/*
    problem statement : sort an given arra using heapsort method.
    
    e.g-
       INPUT : arr[] = {4, 3, 7, 1}
       OUTPUT : arr[] = {1, 3, 4, 7}
       
       Method :  Time Complexity: O(nlogn)
       steps :
                 1. Build a max heap from the input data. 
                 2. At this point, the largest item is stored at the root of the heap. Replace it with the last item of the heap followed by 
                    reducing the size of heap by 1. Finally, heapify the root of the tree. 
                 3. Repeat step 2 while the size of the heap is greater than 1.
    
*/

// code 

#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i)
{
	int largest = i; // root
	int l = 2 * i + 1; // left child
	int r = 2 * i + 2; // right child

	if (l < n && arr[l] > arr[largest])
		largest = l;


	if (r < n && arr[r] > arr[largest])
		largest = r;


	if (largest != i) {
		swap(arr[i], arr[largest]);

		heapify(arr, n, largest);
	}
}


void heapSort(int arr[], int n)
{
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);

	for (int i = n - 1; i > 0; i--) {
		
		swap(arr[0], arr[i]);

		heapify(arr, i, 0);
	}
}


// Driver code
int main()
{
	int n; // size of array
	cin >> n;
	
	int arr[n];
	for(int i = 0; i < n; i++) cin>>arr[i];
	
	heapSort(arr, n);

	cout << "Sorted array is \n";
     for (int i = 0; i < n; ++i) cout << arr[i] << " ";
     
     return 0;
}
