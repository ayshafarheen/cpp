#include "BitcoinExchange.hpp"

int valid(char *file)
{
	struct stat fileinfo;
	stat(file, &fileinfo);
	return (!S_ISDIR(fileinfo.st_mode) && S_ISREG(fileinfo.st_mode));
}

int main(int argc, char **argv)
{
    std::string str;
    std::string date;
    std::string val;

    if(argc == 2)
    {
        std::ifstream inf;
        if (valid(argv[1]))
		{
            inf.open(argv[1]);
			if (inf.is_open())
			{
                while(std::getline(inf, str, '\0'))
                {
                // std::cout << str;
                std::cout << "??";
                // std::stringstream ss(str);
                date = str.substr(0, str.find(','));
                // ss >> date >> val;
                std::cout << date << std::endl;
                // std::cout << val << std::endl;
                // std::getline(ss, date, ',');
                // std::getline(ss, val, '\0');
                // std::cout << "woo " << date << " " << val;
                }
			}
        }
    }
}
