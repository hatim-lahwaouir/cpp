#include "ScalarConverte.hpp"


// trim function
std::string ft_trim(const std::string oldrep)
{
    std::string newrep = oldrep;
    size_t startspaces = 0;
    int end;

    // counting the start spaces that the string start with and erasing them
    while (newrep[startspaces] && newrep[startspaces] == ' ')
        startspaces++;
    newrep.erase(0, startspaces);

    end = newrep.size();

    // if the string only spaces
    if (!end)
        return newrep;
    end -= 1;

    // now counting from the back and erasing them
    while (end > 0 && newrep[end] == ' ')
        end--;

    if (end != (int)newrep.size() - 1)
        newrep.erase(end + 1, std::string::npos);
    
    return (newrep);
}

// checking on nbr

bool    NbrGoodRep(const std::string &rep)
{
    size_t i = 0;

    // if we got an empty string
    if (!rep[i])
        return (false);

    // checking the sign
    if (rep[i] == '-' || rep[i] == '+')
        i++;

    // escaping the digits
    for (; rep[i] && isdigit(rep[i]); i++)
        ;
    
    // if it's only containning digits 
    if (!rep[i])
        return (true);
    
    // checking if there is a frac part
    if (rep[i] != '.')
        return (false);
    i++;

    // escaping all the digits;
    for (; rep[i] && isdigit(rep[i]); i++)
        ;
    
    // if we reach the end that the format is correct else no
    return (!rep[i]);
}