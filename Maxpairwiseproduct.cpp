#include<iostream>
#include<vector>
using namespace std;

long long MaxPairwiseProduct(const vector<int> &num)
{
    long long result = 0;
    int n = num.size();

    for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j++)
            if (((long long)num[i] * num[j]) > result) 
                result = (long long)num[i] * num[j];

    return result;    
    
}

int main()
{
    int n;
    cin >> n;
    vector<int> numbers(n);

    for (int i = 0; i < n; i++)
        cin >> numbers[i];
    
    long long result = MaxPairwiseProduct(numbers);
    cout << result << "\n";
    return 0;
}
