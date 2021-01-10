// UVa 514 Rails

#include <cstdio>
#include <stack>

using namespace std;

const int M = 1000 + 10;

int target[M];

int main()
{
    int n;
    while (scanf("%d", &n) == 1 && n) {
        int end = 0;
        while (!end) {
            for (int i = 1; i <= n; ++i) {
                scanf("%d", &target[i]);
                if (target[1] == 0) {
                    end = 1;
                    break;
                }
            }
            if (end)
                continue;
            int i = 1;
            int next = 1;
            stack<int> s;
            int bad = 0;
            while (i != n+1 && !bad) {
                while (target[i] > next) {
                    s.push(next);
                    ++next;
                }
                if (target[i] == next) {
                    ++i;
                    ++next;
                }
                else {
                    if (!s.empty() && s.top() == target[i]) {
                        s.pop();
                        ++i;
                    }
                    else {
                        bad = 1;
                    }
                }
            }
            printf(bad ? "No\n" : "Yes\n");
        }
        printf("\n");
    }
    return 0;
}
