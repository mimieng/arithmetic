#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    
    // ����ȷ������� n �� q��������Ŀ�������������
    assert(n <= 2e5);
    assert(q <= 2e5);
    
    map<int, int> mp; // ����ͳ��ÿ�ֹ��ӵ�����

    // ��ȡÿ�����ӵ����ͣ���ͳ������ִ���
    for(int i = 1, x; i <= n; i++) {
        cin >> x;
        assert(x <= 1e6); // ����ȷ�����ӵ����Ͳ�������Ŀ�������������
        mp[x]++; // ͳ��ÿ�ֹ��ӵ�����
    }

    // ����ÿ��������Ӧ�Ĺ��������ܺ�
    vector<int> cnt(n + 1, 0); // cnt[i] ��ʾ����Ϊ i �Ĺ����ܺ�
    for(auto & [key, val] : mp) {
        cnt[val] += val; // ���磬���ĳ�ֹ��ӹ��� val ������ô������Ϊ val ʱ����Щ���Ӷ��ᱻ������
    }

    // ����ǰ׺�ͣ��Ա���ٲ�ѯǰd�챻���¹��ӵ�����
    for(int i = 1; i <= n; i++) {
        cnt[i] += cnt[i - 1]; // ǰ׺�����飬cnt[i] ��ʾǰ i �챻���¹��ӵ�����
    }

    // ����ÿ����ѯ
    while(q--) {
        int d;
        cin >> d;
        d = min(d, n); // �����ѯ����������n��ֱ��ȡn
        cout << n - cnt[d] << " "; // ��ӡ��d������ʣ�µĹ�������
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}
