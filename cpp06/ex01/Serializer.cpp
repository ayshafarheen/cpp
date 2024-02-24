#include "Serializer.hpp"

Serializer::Serializer(void)
{

}
Serializer::Serializer(Serializer &obj)
{
    *this = obj;
}
Serializer::~Serializer(void)
{

}
uintptr_t Serializer::serialize(t_data *ptr)
{
    uintptr_t val = reinterpret_cast<uintptr_t>(ptr);
    return val;
}
t_data* Serializer::deserialize(uintptr_t raw)
{
    t_data *val = reinterpret_cast<Data *>(raw);
    return val;

}
