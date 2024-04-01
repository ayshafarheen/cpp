#include "BitcoinExchange.hpp"

int valid(char *file)
{
	struct stat fileinfo;
	stat(file, &fileinfo);
	return (!S_ISDIR(fileinfo.st_mode) && S_ISREG(fileinfo.st_mode));
}

// struct tm p_date;
// std::cout << p_date.tm_year << " " << p_date.tm_mon <<" " << p_date.tm_mday <<std::endl<<std::endl;
// strptime(str.c_str(), "%Y-%m-%d", &p_date);


int main(int argc, char **argv)
{
    if(argc == 2)
    {
		BitcoinExchange obj(argv[1]);
		try
		{
			obj.parse_data();

			if (valid(argv[1]))
			{

			}
		}
		catch(int i)
		{
			obj.handle(i);
		}
    }
}
