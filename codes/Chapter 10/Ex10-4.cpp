#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

int main()
{
    // Exercise 10.4
    std::vector<double> vd = { 1.1, 0.5, 3.3 };
    std::cout   << "ex 10.04: "
                << std::accumulate(vd.cbegin(), vd.cend(), 0)
                << std::endl;                        

    return 0;
}