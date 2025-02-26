#include<bits/stdc++.h> // ����C++��׼��Ĵ󲿷ֳ���ͷ�ļ�
#define int long long   // ����intΪlong long���ͣ������������
using namespace std;    // ʹ��std�����ռ䣬�����ظ�����std::

const int M=1e3+10;     // ���峣��M����ʾ���������С
int a[M][M],pre[M][M];  // ����������ά����a��pre���ֱ�洢����ľ����ǰ׺�;���

// ���庯��ptr�����ڼ����(x1, y1)��(x2, y2)���Ӿ���ĺ�
int ptr(int x1,int y1,int x2,int y2){
    return pre[x2][y2]-pre[x2][y1-1]-pre[x1-1][y2]+pre[x1-1][y1-1]; // ʹ��ǰ׺�͹�ʽ�����Ӿ���ĺ�
}

signed main() {
    std::ios::sync_with_stdio(false); // �رձ�׼�������ͬ��������������Ч��
    std::cin.tie(nullptr);            // ���cin��cout�İ󶨣���һ�����Ч��

    int n,m,k;                        // �������n��������������m��������������k������ֵ��
    cin>>n>>m>>k;                     // ��ȡ�����n��m��k

    // �������a��Ԫ�أ�������ǰ׺�;���pre
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            cin>>a[i][j];             // ��ȡ����a��Ԫ��
            pre[i][j]=pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1]+a[i][j]; // ����ǰ׺�;���pre��ֵ
        }
    }

    int ans=0;                        // ��ʼ����ansΪ0
    // �������п��ܵ��Ӿ���
    for(int i=1;i<=n;i++) {           // ���ѭ�����Ӿ������ʼ��
        for(int j=i;j<=n;j++) {       // �в�ѭ�����Ӿ���Ľ�����
            for(int l=1,r=1;l<=m;l++) {// �ڲ�ѭ�����Ӿ������ʼ��
                // ��չ�Ӿ���Ľ�����r��ֱ���Ӿ���ĺʹ���k
                while(r<=m&&ptr(i,l,j,r)<=k) 
                    r++;
                r--;                   // ����һ����ȷ��r�����������������
                ans+=r-l+1;            // ͳ�������������Ӿ�������
            }
        }
    }

    cout<<ans<<endl;                  // ������մ�ans
    return 0;                         // �������
}
