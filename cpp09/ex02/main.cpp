/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:47:18 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/26 11:21:10 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "PmergeMe.hpp"


static int atoi_(char *s, bool &good)
{
    int i = 0;
    long n = 0;

    while (s[i] && s[i] == ' ')
        i++;

    while (s[i] && std::isdigit(s[i]))
    {
        n = n * 10 + int(s[i] - '0');
        if (n > INT_MAX || n < INT_MIN)
            return (good = false,0);
        i++;
    }
    return (n);
}

static bool check(std::string s)
{
    for (size_t i = 0; i < s.size(); i++)
    {
        if (!std::isdigit(s[i]))
            return false;
    }
    return (true);
}

static void PrintFormat(const std::vector<int> &v, const std::deque<int> &d)
{
    for (size_t i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << ' ';
    }
    std::cout << std::endl;
    
    for (size_t i = 0; i < d.size(); i++)
    {
        std::cout << d[i] << ' ';
    }
}

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cerr << "Error" << std::endl;
        return (1);
    }
    std::list<int> nums;

    int i = 1;
    while (i < ac)
    {
        std::string n = av[i];
        if (!check(n))
        {
            std::cerr << "Error" << std::endl;
            return (1);
        }
        bool gd = true;
        int nbr = ::atoi_(av[i],gd);
        if (gd == false)
        {
            std::cerr << "Error" << std::endl;
            return (1);
        }
        nums.push_back(nbr);
        i++;
    }
    

    VPmergeMe v(nums.begin(), nums.end());
    DPmergeMe d(nums.begin(), nums.end());

    v.pmerge();    
    d.pmerge();    

    PrintFormat(v.getResult(), d.getResult());
}