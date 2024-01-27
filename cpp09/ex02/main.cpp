/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:47:18 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/27 09:09:41 by hlahwaou         ###   ########.fr       */
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

static void SortingInfos(VPmergeMe &v, DPmergeMe &d)
{
    clock_t start_v,end_v;
    clock_t  start_d,end_d;

    start_v = clock();
    v.pmerge();
    end_v = clock();


    start_d = clock();
    d.pmerge();
    end_d = clock();

    const std::vector<int> &_v = v.getResult();
    std::cout << "after: ";
    for (size_t i = 0; i < _v.size(); i++)
        std::cout << _v[i] << " ";
    std::cout << std::endl;
    std::cout << "Time to process a range of "<< _v.size() << " elements with std::vector :" << ((double)(end_v - start_v) / 1000) << " us" << std::endl;
    std::cout << "Time to process a range of "<< _v.size() << " elements with std::deque  :"  << ((double)(end_d - start_d) / 1000) << " us" <<std::endl;

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
            std::cerr << "Input must contains only digits" << std::endl;
            return (1);
        }
        nums.push_back(nbr);
        i++;
    }
    

    std::cout << "Before: ";
    for (int i = 1; i < ac; i++)
        std::cout << av[i] << " ";
    std::cout << std::endl;
    VPmergeMe v(nums.begin(), nums.end());
    DPmergeMe d(nums.begin(), nums.end());
 
    SortingInfos(v, d);
    return (0);
}