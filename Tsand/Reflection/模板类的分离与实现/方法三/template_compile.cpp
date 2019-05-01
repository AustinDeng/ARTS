/*************************************************************************
	> File Name: template_compile.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月01日 星期三 12时22分32秒
 ************************************************************************/

#include<iostream>
#include"template_compile.h"
using namespace std;
template<class T>
T base<T>::add_base(T x,T y)
{
    return x+y;
}
