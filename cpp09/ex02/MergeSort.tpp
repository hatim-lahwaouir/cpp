/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MergeSort.tpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:05:50 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/27 08:43:40 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef MERGESORT_TPP
#define MERGESORT_TPP


template<typename T>
class MergeSort
{
    T &_v;
    MergeSort();
    MergeSort(MergeSort const &);
    MergeSort operator=(MergeSort const &);
    public:
    
    // merging static method
        static void merge(T &r, T &l, T &v)
        {
            size_t i = 0;
            size_t _r = 0;
            size_t _l = 0;
            while (_r < r.size() && _l < l.size())
            {
                if (r[_r] < l[_l])
                    v[i++] = r[_r++];
                else
                    v[i++] = l[_l++];
            }
            while (_r < r.size())
                v[i++] = r[_r++];            
            while (_l < l.size())
                v[i++] = l[_l++]; 
        }
    // merge_sort
        static void merge_sort(T &v)
        {
            if (v.size() <= 1)
                return;
            T r;
            T l;
            for (size_t i = 0; i < v.size(); i++)
            {
                if (i < v.size() / 2)
                    l.push_back(v[i]);
                else
                    r.push_back(v[i]);
            }
            merge_sort(l);
            merge_sort(r);
            merge(r, l, v);
        }
        MergeSort(T &v) : _v(v) {}
        // calling sort if you want you container to be sorted
        void    sort()
        {
            MergeSort::merge_sort(_v);
        };
        ~MergeSort(){}
};


#endif