#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <utility>

template<typename T>
void quicksort(T *ptr, int left, int right) 
{
    if (left >= right) return;
    
    int i = left;
    int j = right;
    
    T pivot = ptr[left + (right - left) / 2];

    while (i <= j) 
    {
        while (ptr[i] < pivot) i++;
        while (pivot < ptr[j]) j--;
        
        if (i <= j) 
        {
            std::swap(ptr[i], ptr[j]);
            i++;
            j--;
        }
    }
    
    if (left < j) quicksort(ptr, left, j);
    if (i < right) quicksort(ptr, i, right);
}

#endif