// UVa 136 Ugly Numbers

// Ugly numbers are numbers whose only prime factors are 2, 3 or 5.
// Find the 1500th ugly number.

#include <cstdio>
#include <functional>
#include <queue>
#include <set>
#include <vector>
using namespace std;
constexpr int A[3] = {2, 3, 5};

long long solve(int n)
{
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    set<int> s;
    pq.push(1);
    s.insert(1);
    long long x;
    for (int i = 1; i <= n; i++) {
        x = pq.top();
        for (int j = 0; j < 3; j++) {
            long long y = x * A[j];
            if (!s.count(y)) {
                s.insert(y);
                pq.push(y);
            }
        }
        pq.pop();
    }
    return x;
}

int main()
{
    printf("The 1500th ugly number is %lld\n", solve(1500));
    return 0;
}
