#pragma once
#ifndef _HEADER_H
#define _HEADER_H
#include <iostream>
#include <time.h>
using namespace std;
void GenerateNearlySortedData(int a[], int n);
void GenerateRandomData(int a[], int n);
void SelectionSort(int a[], int n);
void InsertionSort(int a[], int n);
void BubbleSort(int a[], int n);
void OutputArray(int a[], int n);
void BinaryInsertionSort(int a[], int n);
void ShakerSort(int a[], int n);
void ShellSort(int a[], int n);
void heapSort(int arr[], int n);
void mergeSort(int arr[], int l, int r);
void quickSort(int arr[], int low, int high);
void counting_sort(int a[], int n);
void radixsort(int a[], int n);
void GenerateReverseData(int a[], int n);
void GenerateSortedData(int a[], int n);
void flashsort(int array[], int length);
#endif // !_HEADER_H

