#include <iostream>
#include <string>

int main() {
    std::string tar = "chuanzhi";
    std::string str;
    int count = 0;

    // 使用getline读取整行输入，包括空格
    std::getline(std::cin, str);

    // 计算子串 "chuanzhi" 在字符串中出现的次数
    size_t pos = 0;
    while ((pos = str.find(tar, pos)) != std::string::npos) {
        ++count;
        pos += tar.length(); // 移动到匹配子串之后，继续查找
    }

    // 输出结果
    std::cout << count << std::endl;

    return 0;
}