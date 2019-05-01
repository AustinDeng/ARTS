/*************************************************************************
	> File Name: use_template.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月01日 星期三 12时24分31秒
 ************************************************************************/

#include<iostream>
#include"template_compile.cpp"
using namespace std;
int main(){
    base<int> bobj;
    cout<<bobj.add_base(2,3)<<endl;
    return 0;
}

