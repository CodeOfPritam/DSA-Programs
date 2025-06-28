#include <iostream>
#include <vector>
using namespace std;

int main()

{
    int maxWater=0;
    vector<int> heights = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = heights.size();
    // Brute Force Approach
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         int width = j - i;
    //         int height = min(heights[i], heights[j]);
    //         int currWater=width*height;
    //         maxWater=max(maxWater,currWater);
    //     }
    // }
    // cout<<"Maximum volume of container is "<<maxWater<<endl;

    // Optimised Approach
    
    return 0;
}