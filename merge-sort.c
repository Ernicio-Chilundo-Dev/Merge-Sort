#include <stdio.h>

// Function to merge two halves
void merge(int arr, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Temporary array
    int L[n1], R[n2];

    // Copy data to temp array
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];
    
}