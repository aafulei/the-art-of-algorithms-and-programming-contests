// UVa 514 Rails

#include <cstdio>
#include <stack>

using namespace std;

const int M = 1000 + 10;
int out[M];

int main()
{
    int n;
    while (scanf("%d", &n) == 1 && n) {
        int end = 0;
        while (!end) {
            for (int i = 1; i <= n; ++i) {
                scanf("%d", &out[i]);
                if (out[1] == 0) {
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
                while (out[i] > next) {
                    s.push(next);
                    ++next;
                }
                if (out[i] == next) {
                    ++i;
                    ++next;
                }
                else {
                    if (!s.empty() && s.top() == out[i]) {
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
