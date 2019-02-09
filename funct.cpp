#include <iostream>

void func(void)
{
	std::cout<<"Inside the Function "<<__func__<<std::endl;
}

int main(void)
{
	func();
	return 0;
}
