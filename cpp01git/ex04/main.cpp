#include <iostream>
#include <fstream>
#include <cstring>
#include <sys/stat.h>
#include <sstream>

int valid(char *file)
{
	struct stat fileinfo;
	stat(file, &fileinfo);
	return (!S_ISDIR(fileinfo.st_mode) && S_ISREG(fileinfo.st_mode));
}

std::string create_string(char **argv, std::string str)
{
	int				index;
	std::string		final, out, w1, w2, w3, file;
	std::ofstream	outf;
	w1 = argv[2];
	w2 = argv[3];
	file = argv[1];

	if(!w1.empty())
	{
		while (str.find(w1) != std::string::npos)
		{
			index = str.find(w1);
			final += str.substr(0, index) + w2;
			str = &str[index + w1.length()];
		}
		final += str;
		out = file + ".replace";
		outf.open(out.c_str());
		if(outf.is_open())
		{
			outf << final;
			outf.close();
		}
		return final;
	}
	else
		std::cout << "Impossible! change it\n";
	return "";

}

int main(int argc, char **argv)
{
	std::string		str;
	std::ifstream	inf;

	if(argc == 4)
	{
		if (valid(argv[1]))
		{
			inf.open(argv[1]);
			if (inf.is_open())
			{
					std::getline(inf, str, '\0');
					create_string(argv, str);
					inf.close();
			}
			else
				std::cout << "Invalid file!!\n";
		}
		else
			std::cout << "Invalid file!!\n";
	}
	else
		std::cout << "Wrong number of arguments! (filename, string1, string2)\n";
}
