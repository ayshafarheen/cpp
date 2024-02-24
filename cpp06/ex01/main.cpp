
#include "Data.hpp"
#include "Serializer.hpp"

int main()
{
    t_data *data = new t_data();
    uintptr_t serialized;
    t_data *deserialized;
    data->num = 3784747;
    std::cout << "Original: " << data->num << " | address: " << &data  << std::endl;
    serialized = Serializer::serialize(data);
    deserialized = Serializer::deserialize(serialized);
    std::cout << "Deserialized: " << deserialized->num << " | address: " << &deserialized << std::endl;
    return 0;
}
