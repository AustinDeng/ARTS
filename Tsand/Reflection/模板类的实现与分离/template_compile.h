/*************************************************************************
	> File Name: template_compile.h
	> Author: 
	> Mail: 
	> Created Time: 2019年05月01日 星期三 12时28分35秒
 ************************************************************************/

template<class T>
class base
{
    public:
    base(){};
    ~base(){};
    T add_base(T x,T y);
};
#include "template_compile.cpp"
