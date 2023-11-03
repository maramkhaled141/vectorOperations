#include <iostream>
#include<math.h>
using namespace std;
long long getSum(vector<long long> arr)
{
    long long sum = 0;
    for(auto &curElement : arr)
        sum += curElement;

    return sum;
}
double getAverage(vector<long long> arr)
{
    double sum = getSum(arr);
    return sum / (int)(arr.size());
}

long long getMinimum(vector<long long> arr)
{
    long long minimumValue = arr[0];
    for(auto &curElement : arr)
        minimumValue = min(minimumValue, curElement);

    return minimumValue;

}
int main()
{
    vector<long long> arr;
    for(int i = 1;i <= 10;++i) 
        arr.push_back(i);
    cout << getSum(arr) << endl;
    cout << getAverage(arr) << endl;
    cout << getMinimum(arr) << endl;
}