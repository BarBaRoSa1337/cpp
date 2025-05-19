#include "Data.hpp"
#include "Serializer.hpp"

int main()
{
    Data *data = new Data(42);
    std::cout << "Original data: " << data->getValue() << std::endl;

    uintptr_t raw = Serializer::serialize(data);
    std::cout << "Serialized data: " << raw << std::endl;

    Data *deserializedData = new Data();
    deserializedData = Serializer::deserialize(raw);
    std::cout << "Deserialized data: " << deserializedData->getValue() << std::endl;

    delete data;
    delete deserializedData;
    return 0;
}