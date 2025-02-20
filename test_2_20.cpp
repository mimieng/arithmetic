#include<bits/stdc++.h> // 包含标准库头文件，方便使用各种STL容器和算法
#define int long long   // 将int类型定义为long long，方便处理大整数
using namespace std;    // 使用标准命名空间，避免重复写std::

// 定义主函数，返回值为signed，表示有符号整数
signed main(){
    int n; // 定义变量n，用于存储将要输入的整数数量
    cin>>n; // 从标准输入读取一个整数n，表示接下来要输入n个整数
    map<int ,int>mp; // 定义一个map容器mp，用于存储整数及其出现的次数，键为int类型，值为int类型

    // 循环n次，读取n个整数，并统计每个整数出现的次数
    for(int i=0;i<n;i++)
    {
        int x; // 定义变量x，用于存储当前读取的整数
        cin>>x; // 从标准输入读取一个整数x
        mp[x]++; // 将x的值在map中对应的次数加1，如果x不在map中，自动初始化为0然后加1
    }

    // 遍历map容器mp中的所有键值对，并输出
    for(auto i:mp)
        cout<<i.first<< ' '<<i.second<<endl; // 输出键（i.first）和值（i.second），键和值之间用空格分隔，每对键值对之间换行

    return 0; // 程序结束，返回0
}
