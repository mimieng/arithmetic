#include<bits/stdc++.h> // 包含几乎所有标准库头文件，方便使用各种STL容器和算法
#define int long long   // 将int类型定义为long long，方便处理大整数
using namespace std;    // 使用标准命名空间，避免重复写std::
const int N=2e5+10;     // 定义一个常量N，表示数组的最大大小
#define endl '\n'      // 定义endl宏，用于输出换行符

int a[N]; // 定义一个全局数组a，用于存储输入的整数

// 定义主函数，返回值为void
void solve()
{
    int n; // 定义变量n，用于存储将要输入的整数数量
    cin>>n; // 从标准输入读取一个整数n
    set<int>s; // 定义一个set容器s，用于存储整数，set会自动排序并保证元素唯一

    // 循环n次，读取n个整数，并存储在数组a中，同时将它们插入到set中
    for(int i=0;i<n;i++)
    {   
        int x; // 定义变量x，用于存储当前读取的整数
        cin>>x; // 从标准输入读取一个整数x
        a[i]=x; // 将读取的整数x存储在数组a中
        s.insert(x); // 将整数x插入到set中，自动去重
    }

    // 再次循环n次，处理数组a中的每个元素
    for(int i=0;i<n;i++){
        if(s.count(a[i])){ // 如果set中包含当前数组元素a[i]
            cout<<a[i]<<' '; // 输出该元素，后面跟着一个空格
            s.erase(a[i]); // 从set中删除该元素，确保每个元素只被输出一次
        }
    }
    cout<<endl; // 输出换行符
}

// 定义主函数，返回值为signed，表示有符号整数
signed main(){
    // 关闭同步，加速cin和cout
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int t; // 定义变量t，用于存储测试组数
    cin>>t; // 从标准输入读取测试组数t
    while(t--) // 循环t次，处理每组测试数据
    {
        solve(); // 调用solve函数，处理每组测试数据
    }
    return 0; // 程序结束，返回0
}
