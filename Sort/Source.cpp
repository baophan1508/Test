#include "Header.h"
void Swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int getMax(int arr[], int n)
{
	int mx = arr[0];
	for (int i = 1; i < n; i++)
		if (arr[i] > mx)
			mx = arr[i];
	return mx;
}
void countSort(int arr[], int n, int exp)
{
	int *output = new int[n]; 
	int i, count[10] = { 0 };
	for (i = 0; i < n; i++)
		count[(arr[i] / exp) % 10]++;
	for (i = 1; i < 10; i++)
		count[i] += count[i - 1]; 
	for (i = n - 1; i >= 0; i--)
	{
		output[count[(arr[i] / exp) % 10] - 1] = arr[i];
		count[(arr[i] / exp) % 10]--;
	}
		arr[i] = output[i];
}
void radixsort(int arr[], int n)
{
	int m = getMax(arr, n);
	for (int exp = 1; m / exp > 0; exp *= 10)
		countSort(arr, n, exp);
}

void counting_sort(int a[], int n)
{

	int *output= new int[n]; 
	int max = a[0];
	int min = a[0];

	for (int i = 1; i < n; i++)
	{
		if (a[i] > max)
			max = a[i]; 
		else if (a[i] < min)
			min = a[i]; 
	}

	int k = max - min + 1; 
	int *count_array = new int[k]; 
	fill_n(count_array, k, 0); 

	for (int i = 0; i < n; i++)
		count_array[a[i] - min]++; 
	for (int i = 1; i < k; i++)
		count_array[i] += count_array[i - 1];
	for (int i = 0; i < n; i++)
	{
		output[count_array[a[i] - min] - 1] = a[i];
		count_array[a[i] - min]--;
	}
	for (int i = 0; i < n; i++)
		a[i] = output[i]; 
}

int partition(int arr[], int low, int high)
{
	
	int m = ((low + high) / 2 + low) / 2;
	int pivot = arr[m];    
	int i = (low - 1);   

	for (int j = low; j <= high - 1; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;    
			Swap(arr[i], arr[j]);
		}
	}
	Swap(arr[i + 1], arr[m]);
	return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		int pi = partition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}



void merge(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;
	int *L = new int[n1];
	int *R = new int[n2];
	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];

	i = 0; 
	j = 0;
	k = l; 
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}
	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}
void mergeSort(int arr[], int l, int r)
{
	if (l < r)
	{
		int m = l + (r - l) / 2;
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);
		merge(arr, l, m, r);
	}
}

void heapify(int arr[], int n, int i)
{
	int largest = i; 
	int l = 2 * i + 1; 
	int r = 2 * i + 2; 
	if (l < n && arr[l] > arr[largest])
		largest = l;
	if (r < n && arr[r] > arr[largest])
		largest = r;
	if (largest != i)
	{
		swap(arr[i], arr[largest]);
		heapify(arr, n, largest);
	}
}

void heapSort(int arr[], int n)
{
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);
	for (int i = n - 1; i >= 0; i--)
	{
		swap(arr[0], arr[i]);
		heapify(arr, i, 0);
	}
}

void ShellSort(int a[], int n)
{
	int gap, j, k, temp;
	for (gap = n / 2; gap > 0; gap= gap / 2)
	{
		for (j = gap; j < n; j++)
		{
			for (k = j - gap; k >= 0; k = k - gap)
			{
				if (a[k + gap] >= a[k])
					break;
				else
				{
					temp = a[k];
					a[k] = a[k + gap];
					a[k + gap] = temp;
				}
			}
		}
	}
}

void SelectionSort(int a[], int n)
{
	int min_index;
	for (int i = 0; i < n-1; ++i)
	{
		min_index = i;
		for (int j = i + 1; j < n; ++j)
		{
			if (a[j] < a[min_index])
				min_index = j;
		}
		Swap(a[i], a[min_index]);
	}
}
void InsertionSort(int a[], int n)
{
	for (int i = 1; i < n; ++i)
	{
		int v = a[i];
		int j = i - 1;
		while (j >= 0 && a[j] > v)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = v;
	}
}
int BinarySearch(int a[],int item ,int low, int high)
{
	if (high <= low)
		return (item > a[low]) ? (low + 1) : low;

	int mid = (low + high) / 2;

	if (item == a[mid])
		return mid + 1;

	if (item > a[mid])
		return BinarySearch(a, item, mid + 1, high);
	return BinarySearch(a, item, low, mid - 1);
}
void BinaryInsertionSort(int a[], int n)
{
	int loc, j, k, selected;

	for (int i = 1; i < n; ++i)
	{
		j = i - 1;
		selected = a[i];
		loc = BinarySearch(a, selected, 0, j);
		while (j >= loc)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = selected;
	}
}

void BubbleSort(int a[], int n)
{
	for (int i = 1; i < n - 1; i++)
	{
		for (int j = n - 1; j >= i; j--)
		{
			if (a[j] < a[j - 1])
				Swap(a[j], a[j - 1]);
		}
	}
}
void ShakerSort(int a[], int n)
{
	int Left = 0;
	int Right = n - 1;
	int k = 0;
	while (Left < Right)
	{
		for (int i = Left; i < Right; i++)
		{
			if (a[i] > a[i + 1])
			{
				swap(a[i], a[i + 1]);
				k = i;
			}
		}
		Right = k;
		for (int i = Right; i > Left; i--)
		{
			if (a[i] < a[i - 1])
			{
				swap(a[i], a[i - 1]);
				k = i;
			}
		}
		Left = k;
	}
}
void OutputArray(int a[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << "a[" << i << "] = " << a[i] << endl;
}
void flashsort(int array[], int length)
{
	if (length == 0) return;
	int m = (int)((0.2 * length) + 2);


	int min, max, maxIndex;
	min = max = array[0];
	maxIndex = 0;

	for (int i = 1; i < length - 1; i += 2)
	{
		int small;
		int big;
		int bigIndex;
		if (array[i] < array[i + 1])
		{
			small = array[i];
			big = array[i + 1];
			bigIndex = i + 1;
		}
		else
		{
			big = array[i];
			bigIndex = i;
			small = array[i + 1];
		}

		if (big > max)
		{
			max = big;
			maxIndex = bigIndex;
		}

		if (small < min)
		{
			min = small;
		}
	}

	if (array[length - 1] < min)
	{
		min = array[length - 1];
	}
	else if (array[length - 1] > max)
	{
		max = array[length - 1];
		maxIndex = length - 1;
	}

	if (max == min)
	{
		//all the elements are the same
		return;
	}
	int* L = new int[m + 1];
	for (int t = 1; t <= m; t++)
	{
		L[t] = 0;
	}
	double c = (m - 1.0) / (max - min);
	int K;
	for (int h = 0; h < length; h++)
	{
		//classify the A(i) value
		K = ((int)((array[h] - min) * c)) + 1;

		//assert: K is in the range 1...m

		//add one to the count for this class
		L[K] += 1;
	}
	for (K = 2; K <= m; K++)
	{
		L[K] = L[K] + L[K - 1];
	}
	int temp = array[maxIndex];
	array[maxIndex] = array[0];
	array[0] = temp;

	int j = 0;

	//K is the class of an A(i) value. It is always in the range 1..m
	K = m;

	//the number of elements that have been moved
	//into their correct class
	int numMoves = 0;

	//O(n)
	//permute elements into their correct class; each
	//time the class that j is pointing to fills up
	//then iterate j to the next cycle leader
	//
	//do not use the n - 1 optimization because that last element
	//will not have its count decreased (this causes trouble with
	//determining the correct classSize in the last step)
	while (numMoves < length)
	{
		//if j does not point to the begining of a class
		//that has at least 1 element still needing to be
		//moved to within the borders of the class then iterate
		//j upward until such a class is found (such a class
		//must exist). In other words, find the next cycle leader
		while (j >= L[K])
		{
			j++;
			//classify the A(j) value
			K = ((int)((array[j] - min) * c)) + 1;
		}

		//evicted always holds the value of an element whose location
		//in the array is free to be written into //aka FLASH
		int evicted = array[j];

		//while j continues to meet the condition that it is
		//pointing to the start of a class that has at least one
		//element still outside its borders (the class isn't full)
		while (j < L[K])
		{
			//compute the class of the evicted value
			K = ((int)((evicted - min) * c)) + 1;

			//get a location that is inside the evicted
			//element's class boundaries
			int location = L[K] - 1;

			//swap the value currently residing at the new
			//location with the evicted value
			int temp = array[location];
			array[location] = evicted;
			evicted = temp;

			//decrease the count for this class
			//see counting sort for why this is done
			L[K] -= 1;

			//another element was moved
			numMoves++;
		}
	}
	int threshold = (int)(1.25 * ((length / m) + 1));
	const int minElements = 30;
	for (K = m - 1; K >= 1; K--)
	{
		//determine the number of elments in the Kth class
		int classSize = L[K + 1] - L[K];

		//if the class size is larger than expected but not
		//so small that insertion sort could make quick work
		//of it then...
		if (classSize > threshold && classSize > minElements)
		{
			//...attempt to flashsort the class. This will work 
			//well if the elements inside the class are uniformly
			//distributed throughout the class otherwise it will 
			//perform badly, O(n^2) worst case, since we will have 
			//performed another classification and permutation step
			//and not succeeded in making the problem significantly
			//smaller for the next level of recursion. However,
			//progress is assured since at each level the elements
			//with the maximum value will get sorted.
			flashsort(&array[L[K]], classSize);
		}
		else //perform insertion sort on the class
		{
			if (classSize > 1)
			{
				InsertionSort(&array[L[K]], classSize);
			}
		}
	}

	delete[] L;
}
