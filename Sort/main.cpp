#include "Header.h"





int main()
{
	int choice;
	cout << "1.RANDOM DATA" << endl;
	cout << "2.NEARLY SORTED DATA" << endl;
	cout << "3.RESERVE DATA" << endl;
	cout << "4.SORTED DATA" << endl;
	
	cout << "Enter choice: ";
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		system("cls");
		cout << "\t\t\tRANDOM DATA" << endl;
	cout << "Input size: ";
	int n;
	cin >> n;
	int *a = new int[n];
	int *b = new int[n];
	GenerateRandomData(b, n);
	for (int i = 0; i < n; ++i)
		a[i] = b[i];
	clock_t t1, t2;
	t1 = clock();
	SelectionSort(a, n);
	t2 = clock();
	cout << "Time run of Seletion Sort: " << (float)(t2 - t1) / CLOCKS_PER_SEC << " s" << endl;
	for (int i = 0; i < n; ++i)
		a[i] = b[i];
	t1 = clock();
	InsertionSort(a, n);
	t2 = clock();
	cout << "Time run of Insertion Sort: " << (float)(t2 - t1) / CLOCKS_PER_SEC << " s" << endl;
	for (int i = 0; i < n; ++i)
		a[i] = b[i];
	t1 = clock();
	BinaryInsertionSort(a, n);
	t2 = clock();
	cout << "Time run of Binary-Insertion Sort: " << (float)(t2 - t1) / CLOCKS_PER_SEC << " s" << endl;
	for (int i = 0; i < n; ++i)
		a[i] = b[i];
	t1 = clock();
	BubbleSort(a, n);
	t2 = clock();
	cout << "Time run of Bubble Sort: " << (float)(t2 - t1) / CLOCKS_PER_SEC << " s" << endl;
	for (int i = 0; i < n; ++i)
		a[i] = b[i];
	t1 = clock();
	ShakerSort(a, n);
	t2 = clock();
	cout << "Time run of Shaker Sort: " << (float)(t2 - t1) / CLOCKS_PER_SEC << " s" << endl;
	for (int i = 0; i < n; ++i)
		a[i] = b[i];
	t1 = clock();
	ShellSort(a, n);
	t2 = clock();
	cout << "Time run of Shell Sort: " << (float)(t2 - t1) / CLOCKS_PER_SEC << " s" << endl;
	for (int i = 0; i < n; ++i)
		a[i] = b[i];
	t1 = clock();
	heapSort(a, n);
	t2 = clock();
	cout << "Time run of Heap Sort: " << (float)(t2 - t1) / CLOCKS_PER_SEC << " s" << endl;
	for (int i = 0; i < n; ++i)
		a[i] = b[i];
	t1 = clock();
	mergeSort(a, 0, n - 1);
	t2 = clock();
	cout << "Time run of Merge Sort: " << (float)(t2 - t1) / CLOCKS_PER_SEC << " s" << endl;
	for (int i = 0; i < n; ++i)
		a[i] = b[i];
	t1 = clock();
	quickSort(a, 0, n - 1);
	t2 = clock();
	cout << "Time run of Quick Sort: " << (float)(t2 - t1) / CLOCKS_PER_SEC << " s" << endl;
	for (int i = 0; i < n; ++i)
		a[i] = b[i];
	t1 = clock();
	counting_sort(a, n);
	t2 = clock();
	cout << "Time run of Counting Sort: " << (float)(t2 - t1) / CLOCKS_PER_SEC << " s" << endl;
	for (int i = 0; i < n; ++i)
		a[i] = b[i];
	t1 = clock();
	radixsort(a, n);
	t2 = clock();
	cout << "Time run of Radix Sort: " << (float)(t2 - t1) / CLOCKS_PER_SEC << " s" << endl;
	for (int i = 0; i < n; ++i)
		a[i] = b[i];
	t1 = clock();
	flashsort(a, n);
	t2 = clock();
	cout << "Time run of Flash Sort: " << (float)(t2 - t1) / CLOCKS_PER_SEC << " s" << endl;
	}
		break;
	case 2:
	{
		system("cls");
		cout << "\t\t\tNEARLY SORTED DATA" << endl;
		cout << "Input size: ";
		int n;
		cin >> n;
		int *c = new int[n];
		int *d = new int[n];
		GenerateNearlySortedData(d, n);
		for (int i = 0; i < n; ++i)
			c[i] = d[i];
		clock_t t3, t4;
		t3 = clock();
		SelectionSort(c, n);
		t4 = clock();
		cout << "Time run of Seletion Sort: " << (float)(t4 - t3) / CLOCKS_PER_SEC << " s" << endl;
		for (int i = 0; i < n; ++i)
			c[i] = d[i];
		t3 = clock();
		InsertionSort(c, n);
		t4 = clock();
		cout << "Time run of Insertion Sort: " << (float)(t4 - t3) / CLOCKS_PER_SEC << " s" << endl;
		for (int i = 0; i < n; ++i)
			c[i] = d[i];
		t3 = clock();
		BinaryInsertionSort(c, n);
		t4 = clock();
		cout << "Time run of Binary-Insertion Sort: " << (float)(t4 - t3) / CLOCKS_PER_SEC << " s" << endl;
		for (int i = 0; i < n; ++i)
			c[i] = d[i];
		t3 = clock();
		BubbleSort(c, n);
		t4 = clock();
		cout << "Time run of Bubble Sort: " << (float)(t4 - t3) / CLOCKS_PER_SEC << " s" << endl;
		for (int i = 0; i < n; ++i)
			c[i] = d[i];
		t3 = clock();
		ShakerSort(c, n);
		t4 = clock();
		cout << "Time run of Shaker Sort: " << (float)(t4 - t3) / CLOCKS_PER_SEC << " s" << endl;
		for (int i = 0; i < n; ++i)
			c[i] = d[i];
		t3 = clock();
		ShellSort(c, n);
		t4 = clock();
		cout << "Time run of Shell Sort: " << (float)(t4 - t3) / CLOCKS_PER_SEC << " s" << endl;
		for (int i = 0; i < n; ++i)
			c[i] = d[i];
		t3 = clock();
		heapSort(c, n);
		t4 = clock();
		cout << "Time run of Heap Sort: " << (float)(t4 - t3) / CLOCKS_PER_SEC << " s" << endl;
		for (int i = 0; i < n; ++i)
			c[i] = d[i];
		t3 = clock();
		mergeSort(c, 0, n - 1);
		t4 = clock();
		cout << "Time run of Merge Sort: " << (float)(t4 - t3) / CLOCKS_PER_SEC << " s" << endl;
		for (int i = 0; i < n; ++i)
			c[i] = d[i];
		t3 = clock();
		counting_sort(c, n);
		t4 = clock();
		cout << "Time run of Counting Sort: " << (float)(t4 - t3) / CLOCKS_PER_SEC << " s" << endl;
		for (int i = 0; i < n; ++i)
			c[i] = d[i];
		t3 = clock();
		radixsort(c, n);
		t4 = clock();
		cout << "Time run of Radix Sort: " << (float)(t4 - t3) / CLOCKS_PER_SEC << " s" << endl;
		for (int i = 0; i < n; ++i)
			c[i] = d[i];
		t3 = clock();
		flashsort(c, n);
		t4 = clock();
		cout << "Time run of Flash Sort: " << (float)(t4 - t3) / CLOCKS_PER_SEC << " s" << endl;
		for (int i = 0; i < n; ++i)
			c[i] = d[i];
		t3 = clock();
		quickSort(c, 0, n - 1);
		t4 = clock();
		cout << "Time run of Quick Sort: " << (float)(t4 - t3) / CLOCKS_PER_SEC << " s" << endl;
	}
	break;
	case 3:
	{
		system("cls");
		cout << "\t\t\tRESERVE DATA" << endl;
		cout << "Input size: ";
		int n3;
		cin >> n3;
		int *e = new int[n3];
		int *f = new int[n3];
		GenerateReverseData(f, n3);
		for (int i = 0; i < n3; ++i)
			e[i] = f[i];
		clock_t t5, t6;
		t5 = clock();
		SelectionSort(e, n3);
		t6 = clock();
		cout << "Time run of Seletion Sort: " << (float)(t6 - t5) / CLOCKS_PER_SEC << " s" << endl;
		for (int i = 0; i < n3; ++i)
			e[i] = f[i];
		t5 = clock();
		InsertionSort(e, n3);
		t6 = clock();
		cout << "Time run of Insertion Sort: " << (float)(t6 - t5) / CLOCKS_PER_SEC << " s" << endl;
		for (int i = 0; i < n3; ++i)
			e[i] = f[i];
		t5 = clock();
		BinaryInsertionSort(e, n3);
		t6 = clock();
		cout << "Time run of Binary-Insertion Sort: " << (float)(t6 - t5) / CLOCKS_PER_SEC << " s" << endl;
		for (int i = 0; i < n3; ++i)
			e[i] = f[i];
		t5 = clock();
		BubbleSort(e, n3);
		t6 = clock();
		cout << "Time run of Bubble Sort: " << (float)(t6 - t5) / CLOCKS_PER_SEC << " s" << endl;
		for (int i = 0; i < n3; ++i)
			e[i] = f[i];
		t5 = clock();
		ShakerSort(e, n3);
		t6 = clock();
		cout << "Time run of Shaker Sort: " << (float)(t6 - t5) / CLOCKS_PER_SEC << " s" << endl;
		for (int i = 0; i < n3; ++i)
			e[i] = f[i];
		t5 = clock();
		ShellSort(e, n3);
		t6 = clock();
		cout << "Time run of Shell Sort: " << (float)(t6 - t5) / CLOCKS_PER_SEC << " s" << endl;
		for (int i = 0; i < n3; ++i)
			e[i] = f[i];
		t5 = clock();
		heapSort(e, n3);
		t6 = clock();
		cout << "Time run of Heap Sort: " << (float)(t6 - t5) / CLOCKS_PER_SEC << " s" << endl;
		for (int i = 0; i < n3; ++i)
			e[i] = f[i];
		t5 = clock();
		mergeSort(e, 0, n3 - 1);
		t6 = clock();
		cout << "Time run of Merge Sort: " << (float)(t6 - t5) / CLOCKS_PER_SEC << " s" << endl;
		for (int i = 0; i < n3; ++i)
			e[i] = f[i];
		t5 = clock();
		counting_sort(e, n3);
		t6 = clock();
		cout << "Time run of Counting Sort: " << (float)(t6 - t5) / CLOCKS_PER_SEC << " s" << endl;
		for (int i = 0; i < n3; ++i)
			e[i] = f[i];
		t5 = clock();
		radixsort(e, n3);
		t6 = clock();
		cout << "Time run of Radix Sort: " << (float)(t6 - t5) / CLOCKS_PER_SEC << " s" << endl;
		for (int i = 0; i < n3; ++i)
			e[i] = f[i];
		t5 = clock();
		flashsort(e, n3);
		t6 = clock();
		cout << "Time run of Flash Sort: " << (float)(t6 - t5) / CLOCKS_PER_SEC << " s" << endl;
		for (int i = 0; i < n3; ++i)
			e[i] = f[i];
		t5 = clock();
		quickSort(e, 0, n3 - 1);
		t6 = clock();
		cout << "Time run of Quick Sort: " << (float)(t6 - t5) / CLOCKS_PER_SEC << " s" << endl;
	}
	break;
	case 4:
	{
		system("cls");
		cout << "\t\t\tSORTED DATA" << endl;
		cout << "Input size: ";
		int n;
		cin >> n;
		int *a = new int[n];
		int *b = new int[n];
		GenerateSortedData(b, n);
		for (int i = 0; i < n; ++i)
			a[i] = b[i];
		clock_t t1, t2;
		t1 = clock();
		SelectionSort(a, n);
		t2 = clock();
		cout << "Time run of Seletion Sort: " << (float)(t2 - t1) / CLOCKS_PER_SEC << " s" << endl;
		for (int i = 0; i < n; ++i)
			a[i] = b[i];
		t1 = clock();
		InsertionSort(a, n);
		t2 = clock();
		cout << "Time run of Insertion Sort: " << (float)(t2 - t1) / CLOCKS_PER_SEC << " s" << endl;
		for (int i = 0; i < n; ++i)
			a[i] = b[i];
		t1 = clock();
		BinaryInsertionSort(a, n);
		t2 = clock();
		cout << "Time run of Binary-Insertion Sort: " << (float)(t2 - t1) / CLOCKS_PER_SEC << " s" << endl;
		for (int i = 0; i < n; ++i)
			a[i] = b[i];
		t1 = clock();
		BubbleSort(a, n);
		t2 = clock();
		cout << "Time run of Bubble Sort: " << (float)(t2 - t1) / CLOCKS_PER_SEC << " s" << endl;
		for (int i = 0; i < n; ++i)
			a[i] = b[i];
		t1 = clock();
		ShakerSort(a, n);
		t2 = clock();
		cout << "Time run of Shaker Sort: " << (float)(t2 - t1) / CLOCKS_PER_SEC << " s" << endl;
		for (int i = 0; i < n; ++i)
			a[i] = b[i];
		t1 = clock();
		ShellSort(a, n);
		t2 = clock();
		cout << "Time run of Shell Sort: " << (float)(t2 - t1) / CLOCKS_PER_SEC << " s" << endl;
		for (int i = 0; i < n; ++i)
			a[i] = b[i];
		t1 = clock();
		heapSort(a, n);
		t2 = clock();
		cout << "Time run of Heap Sort: " << (float)(t2 - t1) / CLOCKS_PER_SEC << " s" << endl;
		for (int i = 0; i < n; ++i)
			a[i] = b[i];
		t1 = clock();
		mergeSort(a, 0, n - 1);
		t2 = clock();
		cout << "Time run of Merge Sort: " << (float)(t2 - t1) / CLOCKS_PER_SEC << " s" << endl;
		for (int i = 0; i < n; ++i)
			a[i] = b[i];
		t1 = clock();
		counting_sort(a, n);
		t2 = clock();
		cout << "Time run of Counting Sort: " << (float)(t2 - t1) / CLOCKS_PER_SEC << " s" << endl;
		for (int i = 0; i < n; ++i)
			a[i] = b[i];
		t1 = clock();
		radixsort(a, n);
		t2 = clock();
		cout << "Time run of Radix Sort: " << (float)(t2 - t1) / CLOCKS_PER_SEC << " s" << endl;
		for (int i = 0; i < n; ++i)
			a[i] = b[i];
		t1 = clock();
		flashsort(a, n);
		t2 = clock();
		cout << "Time run of Flash Sort: " << (float)(t2 - t1) / CLOCKS_PER_SEC << " s" << endl;
		for (int i = 0; i < n; ++i)
			a[i] = b[i];
		t1 = clock();
		quickSort(a, 0, n - 1);
		t2 = clock();
		cout << "Time run of Quick Sort: " << (float)(t2 - t1) / CLOCKS_PER_SEC << " s" << endl;
	}
	break;
	}
	
	






	


	


	

	system("pause");
	return 0;
}