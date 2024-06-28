#include <iostream>
#include <vector>

int hello(const char *str)
{
	std::cout << str << std::endl;
	return static_cast<int>(str[0]);
}

int main()
{
	// TODO: FIXME: NOTE: REF:
	std::cout << "hello, world." << std::endl;

	hello("printf");

	return 0;
	int x;

	if(x == 0 || x <= 1 && x > 1)
		return 1;
	
	while(true)
	{
		std::cout << x;
	}

	for(int i = 0; i < 12; i++)
	{
		return hello("dude...");
	}
}