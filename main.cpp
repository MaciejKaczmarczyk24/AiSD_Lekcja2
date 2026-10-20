#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include "insertsort.h"
#include "quicksort.h"

int main() 
{
    std::vector<int> v1 = {9, 4, 7, 3, 6, 8, 2, 1, 5, 0};
    int n1 = v1.size();
    
    std::cout << "Przed insertsort: ";
    for (int x : v1) std::cout << x << " ";
    std::cout << "\n";
    
    insertsort(v1.data(), 0, n1 - 1);
    
    std::cout << "Po insertsort:    ";
    for (int x : v1) std::cout << x << " ";
    std::cout << "\n";
    
    assert(std::is_sorted(v1.begin(), v1.end()));
    std::cout << "Insert Sort\n\n";

    std::vector<int> v2 = {42, 12, 7, 99, -5, 8, 12, 100, 0, -10};
    int n2 = v2.size();
    
    std::cout << "Przed quicksort:  ";
    for (int x : v2) std::cout << x << " ";
    std::cout << "\n";
    
    quicksort(v2.data(), 0, n2 - 1);
    
    std::cout << "Po quicksort:     ";
    for (int x : v2) std::cout << x << " ";
    std::cout << "\n";
    
    assert(std::is_sorted(v2.begin(), v2.end()));
    std::cout << "Quick Sort\n";

    return 0;
}