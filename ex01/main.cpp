#include "Serializer.hpp"


int main() {
    Data myData;
    myData.n = 42;
    myData.name = "zouhir";

    uintptr_t raw = Serializer::serialize(&myData);

    std::cout << "Serialized value: " << raw << std::endl;
    Data* deserializedData = Serializer::deserialize(raw);

    std::cout << "n : " << deserializedData->n << "\nName: " << deserializedData->name << std::endl;

    return 0;
}