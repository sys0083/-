#include <iostream>
#include <cstdio>
#include <algorithm>
#include <set>
#include <unordered_map>
using namespace std;

typedef pair<int, int> PII;
typedef long long LL;

void solve() {
    set<PII> st;
//	unordered_set<PII> st;  // ���ﱨ���ˣ���Ϊunordered_set��ҪΪ pair ����һ����ϣ��������ȱȽϺ���
    unordered_map<int, int> mp;
    int n; cin >> n;
    int x, y;
    for (int i = 0;i < n; ++ i) {
        cin >> x >> y;
        st.insert(make_pair(x,y));
        mp[x] ++;
    }
    LL ans = 0;
    for (auto m : mp) {
        if (m.second == 2) {
            ans += n-2;
        }
    }
    // ö��ˮƽֱ�������ζ��� + set�Ż�ö�����Ҷ���
    for (auto s : st) {
        x = s.first, y = s.second ^ 1;
        if (st.find(make_pair(x - 1,y)) != st.end() && st.find(make_pair(x + 1,y)) != st.end()) {
            ans ++;
        }
    }
    cout << ans << endl;
}


int main()
{
    int t;
    cin >> t;
    while (t --) {
        solve();
    }
    return 0;
}
