#include <iostream>
#include "1/Sales_item.h"
int main()
{
	Sales_item item1, item2;
	std::cin >> item1 >> item2;                 // ��ȡһ�Խ��׼�¼
	std::cout << item1 + item2 << std::endl;    // ��ӡ���ǵĺ�
	return 0;
}