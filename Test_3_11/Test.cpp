#include<bits/stdc++.h> // 包含 C++ 标准库中的所有头文件，方便使用各种函数和容器
using namespace std; // 省略调用标准库元素时加 std:: 前缀的麻烦

#define int long long // 将 int 定义为 long long，扩大整数类型的取值范围，防止数据溢出
const int M=1e7+10; // 定义一个较大的常量 M，用于数组大小的声明
int A[M],B[M]; // 声明两个大型数组 A 和 B，分别用于存储小A和小B的出拳序列

signed main() // 主函数
{	
    int N,NA,NB; // N 表示进行的猜拳次数，NA 表示小A的出拳周期长度，NB 表示小B的出拳周期长度
    int score_a=0,score_b=0; // 初始化小A和小B的得分为 0
	
    cin>>N>>NA>>NB; // 读取 N、NA、NB 的值
	
    for(int i=0;i<NA;i++) // 循环读取小A的出拳序列，存储到数组 A 中
    {
        cin>>A[i];
    }
    for(int i=0;i<NB;i++) // 循环读取小B的出拳序列，存储到数组 B 中
    {
        cin>>B[i];
    }
    
    // 定义胜负关系矩阵，result[a][b] 的值表示当小A出 a 手势，小B出 b 手势时，小A相对于小B的结果
    int result[5][5] = {
        {0, -1, 1, 1, -1},  // 剪刀 (0)
        {1, 0, -1, 1, -1},  // 石头 (1)
        {-1, 1, 0, -1, 1},  // 布 (2)
        {-1, -1, 1, 0, 1},  // 蜥蜴人 (3)
        {1, 1, -1, -1, 0}   // 斯波克 (4)
    };
    
    for(int i=0;i<N;i++) // 循环 N 次，每次模拟一次猜拳
    {
        int a=A[i%NA]; // 计算小A当前出的手势，利用取模运算实现周期性出拳
        int b=B[i%NB]; // 计算小B当前出的手势，利用取模运算实现周期性出拳
        
        if(a==b) // 如果 a 和 b 相等，说明是平局，跳过本次循环
            continue;
        
        if(result[a][b]==1) // 根据 result[a][b] 的值判断胜负，若为 1 则小A得分增加
            score_a++;
        else // 否则小B得分增加
            score_b++;
    }
    
    cout<<score_a<<' '<<score_b; // 输出小A和小B的得分，中间以空格分隔
    return 0;
}
