/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 09:07:32 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/23 11:25:08 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "RPN.hpp"


RPN::RPN(std::string s) : _s(s) {}

RPN::RPN() : _s("") {}

RPN::RPN(const RPN &obj)
{
    *this = obj;
}

RPN::~RPN()
{
}
RPN & RPN::operator=(const RPN &obj)
{
    if (this == &obj)
        return *this;
    this->_s = obj._s;
    return *this;
}


bool RPN::input_validation() const
{
    size_t i = 0;
    while (i < _s.size())
    {
        if (std::isdigit(_s[i]) || (_s[i] == '-' || _s[i] == '+' || _s[i] == '*' || _s[i] == '/') || _s[i] == ' ')
            i++;
        else
            return (false);
        i++;
    }
    return (true);
}

float RPN::rpn()
{
    std::string s = RPN::trim(static_cast<std::string>(_s));
    std::stringstream   stream(s);
    std::stack<float>   stk;


    if (s.size() == 0)
        throw Error("not a valid RPN expression");



    float nbr = 0;
    char  opr;

    float res;

    stream >> nbr;
    stk.push(nbr);

    while (true)
    {
        if (static_cast<size_t>(stream.tellg()) == s.size())
            break;

        stream >> nbr;
        if (stream.fail())
            throw Error("not a valid RPN expression");

        stream >> opr;
        if (stream.fail())
            throw Error("not a valid RPN expression");
        switch (opr)
        {
            case '-': res = stk.top() - nbr;
                break;
            case '+': res = stk.top() + nbr;
                break;
            case '*': res = stk.top() * nbr;
                break;
            case '/':
                std::cout << "/";
                if (nbr == 0)
                    throw Error("Division by 0");
                res = stk.top() / nbr;
                break;
            default:
                throw Error("not a valid RPN expression");
                break;
        }
        stk.pop();
        stk.push(res);    
    }
    return (stk.top());
}



// ********************** Exceptions **************************

// Error orthod....
const char * Error::what() const throw()
{
    return (errfr.c_str());
}

Error::~Error() throw() {};

Error::Error() throw() : std::exception()
{
    
}

Error::Error(const std::string &err) throw() : std::exception()
{    
    this->errfr = "Error: " + err;
}

Error::Error(const Error &obj) throw() : std::exception(obj)
{
    *this = obj;
    
}

Error&  Error::operator=(Error const &obj) throw()
{
    if (this == &obj)
        return *this;
    this->errfr = obj.errfr;
    return *this;  
}


// trim static methode
std::string RPN::trim(std::string s)
{
    size_t start = 0;
    while (start < s.size() && s[start] == ' ')
        start += 1;
    
    int end = s.size() - 1;

    while (end > 0 && s[end] == ' ')
        end--;

    return (s.substr(start, end - start + 1));
}