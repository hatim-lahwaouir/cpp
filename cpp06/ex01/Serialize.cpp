#include "Serialize.hpp"


// OCF

Serialize::Serialize(){};

Serialize::Serialize(const Serialize &obj)
{
    (void)obj;
}

Serialize& Serialize::operator=(const Serialize &obj)
{
    (void)obj;
    return (*this);
}


Serialize::~Serialize(){};

uintptr_t Serialize::serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}


Data* Serialize::deserialize(uintptr_t raw)
{

    return (reinterpret_cast<Data *>(raw));
}


int main()
{
    Data t1;

    Data *ptr = &t1;

    std::cout << "->"<< ptr << std::endl;

    uintptr_t addrValue = Serialize::serialize(ptr); 
    std::cout << "=>"<< addrValue << std::endl;

    std::cout << "->" <<  Serialize::deserialize(addrValue) << std::endl;
}
