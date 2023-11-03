#include <iostream>
using namespace std;
long long getSum(vector<long long> arr)
{
    long long sum = 0;
    for(auto &curElement : arr)
        sum += curElement;

    return sum;
}
int main()
{
    vector<long long> arr;
    for(int i = 1;i <= 10;++i) 
        arr.push_back(i);
    cout << getSum(arr) << endl;
}