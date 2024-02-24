#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <exception>
#include <limits>
#include "Data.hpp"


class Serializer
{
	public:
		Serializer(void);
		Serializer(Serializer &obj);
		virtual ~Serializer(void) = 0;
        static uintptr_t serialize(t_data *ptr);
        static t_data *deserialize(uintptr_t raw);
};


#endif

