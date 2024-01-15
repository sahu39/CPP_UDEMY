/*
 * Sorting a Vector using STL
 * Reverse Vector elements using STL
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main()
{
    std::vector<int> v {1,5,3};
    std::sort(v.begin(), v.end());
    std::cout << "Sorting elements" << std::endl;
    for(auto elm: v)
    {
        std::cout << elm << std::endl;
    }
    
    std::cout << "Reversing elements" << std::endl;
    std::reverse(v.begin(),v.end());
        for(auto elm: v)
    {
        std::cout << elm << std::endl;
    }

    std::cout << "Accumulating elements" << std::endl;
    int sum {};
    sum = std::accumulate(v.begin(),v.end(),0);
    std::cout << "Sum:" << sum << std::endl;
    
	//std::cout << "My Template" << std::endl;
	return 0;
}
