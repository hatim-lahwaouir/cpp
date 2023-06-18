#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include "iostream"



class   Zombie
{
    std::string _name;

    public:
        void announce( void ) const;
        Zombie(std::string name);
        ~Zombie();
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif