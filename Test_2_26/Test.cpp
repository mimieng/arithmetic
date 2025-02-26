#include<bits/stdc++.h> // 包含C++标准库的大部分常用头文件
#define int long long   // 定义int为long long类型，避免整数溢出
using namespace std;    // 使用std命名空间，避免重复输入std::

const int M=1e3+10;     // 定义常量M，表示数组的最大大小
int a[M][M],pre[M][M];  // 定义两个二维数组a和pre，分别存储输入的矩阵和前缀和矩阵

// 定义函数ptr，用于计算从(x1, y1)到(x2, y2)的子矩阵的和
int ptr(int x1,int y1,int x2,int y2){
    return pre[x2][y2]-pre[x2][y1-1]-pre[x1-1][y2]+pre[x1-1][y1-1]; // 使用前缀和公式计算子矩阵的和
}

signed main() {
    std::ios::sync_with_stdio(false); // 关闭标准输入输出同步，提高输入输出效率
    std::cin.tie(nullptr);            // 解除cin和cout的绑定，进一步提高效率

    int n,m,k;                        // 定义变量n（矩阵行数）、m（矩阵列数）、k（条件值）
    cin>>n>>m>>k;                     // 读取输入的n、m和k

    // 输入矩阵a的元素，并计算前缀和矩阵pre
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            cin>>a[i][j];             // 读取矩阵a的元素
            pre[i][j]=pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1]+a[i][j]; // 计算前缀和矩阵pre的值
        }
    }

    int ans=0;                        // 初始化答案ans为0
    // 遍历所有可能的子矩阵
    for(int i=1;i<=n;i++) {           // 外层循环：子矩阵的起始行
        for(int j=i;j<=n;j++) {       // 中层循环：子矩阵的结束行
            for(int l=1,r=1;l<=m;l++) {// 内层循环：子矩阵的起始列
                // 扩展子矩阵的结束列r，直到子矩阵的和大于k
                while(r<=m&&ptr(i,l,j,r)<=k) 
                    r++;
                r--;                   // 回退一步，确保r是满足条件的最大列
                ans+=r-l+1;            // 统计满足条件的子矩阵数量
            }
        }
    }

    cout<<ans<<endl;                  // 输出最终答案ans
    return 0;                         // 程序结束
}
