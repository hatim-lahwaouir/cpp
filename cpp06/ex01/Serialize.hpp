

#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

# include "iostream"
# include <stdint.h>

typedef struct s_Data
{
    void    *noRole;
}   Data;


class Serialize
{
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif