#include <iostream>
#include "1/Sales_item.h"
int main()
{
	Sales_item book;
	// ����ISBN�š��۳��Ĳ����Լ����ۼ۸�
	std::cout << book << std::endl;
	std::cin >> book;
	// д��ISBN���۳��Ĳ����������۶��ƽ���۸�
	std::cout << book << std::endl;
	return 0;
}