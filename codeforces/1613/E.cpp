#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ff              first
#define ss              second
#define int             long long int
#define pb              push_back
#define lb(x)           lower_bound(x)
#define ub(x)           upper_bound(x)
#define pr(x,y)         pair<x,y>
#define ve(x)           vector<x>
#define vi              vector<int>
#define vii             vector<vector<int> >
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define os(x)           set<x>
#define us(x)           unordered_set<x>
#define oms(x)          multiset<x>
#define ums(x)          unordered_multiset<x>
#define om(x,y)         map<x,y>
#define um(x,y)         unordered_map<x,y>
#define omm(x,y)        multimap<x,y>
#define umm(x,y)        unordered_multimap<x,y>
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define asc(i,a,n)      for(int i=a;i<n;i++)
#define dsc(i,n,a)      for(int i=n-1;i>=a;i--)
#define yes             cout<<"YES\n"
#define no              cout<<"NO\n"
#define pa(x)           cout<<x<<"\n"
#define Pa(x,y)         cout<<x<<" "<<y<<"\n"
#define PA(x,y,z)       cout<<x<<" "<<y<<" "<<z<<"\n"
#define mod             1000000007
#define mod2            998244353
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define allsort(a)      sort(a.begin(),a.end())
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

void st_c() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int X[4] = {1, 0, -1, 0};
int Y[4] = {0, -1, 0, 1};

char **v;

void solve(int m, int n) {
    int x = -1, y = -1;
    asc(i, 0, m) {
        asc(j, 0, n) {
            if (v[i][j] == 'L') {
                x = i;
                y = j;
                break;
            }
        }
        if (x != -1 and y != -1)
            break;
    }

    queue<pair<int, int>> q;
    q.push({x, y});

    while (!q.empty()) {
        pair<int, int> p = q.front();
        int x1 = p.first;
        int y1 = p.second;

        q.pop();

        if (v[x1][y1] != 'L') {
            v[x1][y1] = '+';
        }

        asc(i, 0, 4) {
            int nx = x1 + X[i];
            int ny = y1 + Y[i];

            if (nx >= 0 and ny >= 0 and nx < m and ny < n and v[nx][ny] == '.') {
                int cnt = 0;

                if (nx + 1 < m and (v[nx + 1][ny] == '.')) {
                    cnt++;
                }

                if (ny + 1 < n and (v[nx][ny + 1] == '.')) {
                    cnt++;
                }

                if (nx - 1 >= 0 and (v[nx - 1][ny] == '.')) {
                    cnt++;
                }

                if (ny - 1 >= 0 and (v[nx][ny - 1] == '.')) {
                    cnt++;
                }

                if ((cnt == 1 || cnt == 0)) {
                    q.push({nx, ny});
                }
            }
        }
    }

    asc(i, 0, m) {
        asc(j, 0, n) {
            cout << v[i][j];
        }
        cout << "\n";
    }
}

int32_t main() {
    st_c();
    int num, num2, num3;

    w(t) {
        int n, m;
        cin >> m >> n;

        v = new char*[m];
        char ch;

        for (int i = 0; i < m; i++) {
            v[i] = new char[n];
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> ch;
                v[i][j] = ch;
            }
        }

        solve(m, n);
    }

    return 0;
}