#ifndef INSERTSORT_H
#define INSERTSORT_H

#include <utility>

template<typename T>
void insertsort(T *ptr, int left, int right) 
{
    for (int i = left + 1; i <= right; ++i) 
    {
        T key = std::move(ptr[i]);
        int j = i - 1;
        
        while (j >= left && key < ptr[j]) 
        {
            ptr[j + 1] = std::move(ptr[j]);
            --j;
        }
        ptr[j + 1] = std::move(key);
    }
}

#endif