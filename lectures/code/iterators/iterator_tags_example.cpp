#include <iostream>
#include "linked_list.h"
#include "dynamic_array.h"
#include <iterator>

using namespace std;


template<typename Iter>
void advance_helper(Iter& p, int n, std::random_access_iterator_tag)
{
    cout << "called efficient advance" << endl;
    p+=n;

}

template<typename Iter>
void advance_helper(Iter& p, int n, std::forward_iterator_tag)
{
    cout << "called slow advance" << endl;
    if (0<n)
        while (n--) ++p;
}

template<typename Iter>
void advance(Iter& p, int n)
// use the optimal algorithm
{
    advance_helper(p,n,typename iterator_traits<Iter>::iterator_category{});
}


int main(int argc, char const *argv[])
{
    Vector<int> arr = {1, 2, 3, 4, 5};

    // max

    auto it = arr.begin();
    cout << *it << endl;
    advance(it, 2);
    cout << *it << endl;
    ForwardList<int> fl = {1, 2, 3, 4, 5};
    auto it2 = fl.begin();
    advance(it2, 2);
    cout << *it2 << endl;

    return 0;
}