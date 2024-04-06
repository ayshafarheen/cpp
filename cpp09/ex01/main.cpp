#include "RPN.hpp"


int main(int argc, char** argv)
{
	RPN polish;
	if (argc == 2)
	{
		if(!polish.check_valid(argv[1]))
		{
			std::cerr << "Error!!\n";
		}
        else
            polish.operate(argv[1]);
	}
	return 0;
}
