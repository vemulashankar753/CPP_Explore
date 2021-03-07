#include <stdio.h>

#include <vector>

#include <algorithm>

int main(void)
{
    std::vector<int> v{1, 2, 3, 4};

    int sum = std::accumulate(v.begin(), v.end(), 0);

    printf("Sum = %d\n", sum);
    return 0;
 }
