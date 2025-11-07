#include <iostream>
#include "linked_list.h"
#include "dynamic_array.h"
#include "algorithm"
using namespace std;

void print_array(Vector<int> v){
    for(int i = 0;i<v.getSize();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void print_ll(ForwardList<int> fl){
    auto current = fl.head;
    while(current!=nullptr){
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

template<typename Iterator>
void print_common(Iterator begin, Iterator end){
    for (auto iter = begin; iter != end; ++iter) {
        cout << *iter << " ";
    }
    cout << endl;
}


template<typename Iterator>
typename Iterator::value_type sum_common(Iterator begin, Iterator end){
    auto sum = *begin;
    for (auto iter = begin; iter != end; ++iter) {
        sum+=*iter;
    }
    cout << "Sum: "<< sum << endl;
    return sum;
}

template<typename Iterator>
typename Iterator::value_type max_common(Iterator begin, Iterator end){
    auto max = *begin;
    for (auto iter = begin; iter != end; ++iter) {
        if(max < *iter) {
           max = *iter;
        };
    }
    cout << "Max: "<< max << endl;
    return max;
}

int main(int argc, char const *argv[])
{
    Vector<int> v = {10, 25,  20, 35, 30, 40, 50};
    // print_array(v);
    print_common(v.begin(), v.end());
    sum_common(v.begin(), v.end());
    max_common(v.begin(), v.end());
    sort(v.begin(), v.end());

    // ForwardList<int> fl = {100, 200, 300, 400, 500};
    // sum_common(fl.begin(), fl.end());
    // max_common(fl.begin(), fl.end());
    // // print_ll(fl);
    // print_common(fl.begin(), fl.end());

      /* code */
    return 0;
}
