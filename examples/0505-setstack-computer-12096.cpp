// UVa 12096 SetStack Computer

#include <algorithm>
#include <cstdio>
#include <iterator>
#include <map>
#include <set>
#include <stack>
#include <vector>

#define ALL(x) x.cbegin(), x.cend()
#define INS(x) inserter(x, x.end())

using namespace std;

typedef set<int> Set;

map<Set, int> set2id;
vector<Set> id2set;

int id(const Set & s)
{
    static int gid = 0;
    if (!set2id.count(s)) {
        set2id[s] = gid++;
        id2set.push_back(s);
    }
    return set2id[s];
}

void solve()
{
    int T;
    scanf("%d", &T);
    while (T--) {
        int n;
        scanf("%d", &n);
        stack<int> s;
        while (n--) {
            char cmd[10];
            scanf("%s", cmd);
            Set x;
            if (cmd[0] == 'P')
                s.push(id(x));
            else if (cmd[0] == 'D')
                s.push(s.top());
            else {
                Set x1 = id2set[s.top()];
                s.pop();
                Set x2 = id2set[s.top()];
                s.pop();
                if (cmd[0] == 'A') {
                    x = x2;
                    x.insert(set2id[x1]);
                }
                else if (cmd[0] == 'U')
                    set_union(ALL(x1), ALL(x2), INS(x));
                else
                    set_intersection(ALL(x1), ALL(x2), INS(x));
                s.push(id(x));
            }
            printf("%d\n", id2set[s.top()].size());
        }
        printf("***\n");
    }
}

int main()
{
    solve();
    return 0;
}
