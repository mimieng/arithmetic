#include <iostream>
#include <string>

int main() {
    std::string tar = "chuanzhi";
    std::string str;
    int count = 0;

    // ʹ��getline��ȡ�������룬�����ո�
    std::getline(std::cin, str);

    // �����Ӵ� "chuanzhi" ���ַ����г��ֵĴ���
    size_t pos = 0;
    while ((pos = str.find(tar, pos)) != std::string::npos) {
        ++count;
        pos += tar.length(); // �ƶ���ƥ���Ӵ�֮�󣬼�������
    }

    // ������
    std::cout << count << std::endl;

    return 0;
}