#include <vector>
using namespace std;


class Solution
{
   
private:

public:
    vector<int> sort(vector<int>& arr);
    void print(vector<int>& arr);
    int kthSmallest(vector<int>& arr, int k)
    {
        vector<int> results = sort(arr);
        if (results.size() > 0)
            return (results[k-1]);
        return -1;
    }
};