/*************************************************************************
	> File Name: seqlist.h
	> Author: tsand
	> Mail: tsxqc@hotmail.com
	> Created Time: 2019年04月09日 星期二 22时06分06秒
 ************************************************************************/

#ifndef _SEQLIST_H
#define _SEQLIST_H
template<class T>
struct LinkNode{
    T data;
    LinkNode<T> *next;
    LinkNode(LinkNode<T> *ptr=NULL){
        next=ptr;
    }
    LinkNode(const T &item,LinkNode<T> *ptr=NULL){
        next=ptr;
        data=item;
    }
};
template<class T>
class LinkList{
public:
    LinkList(){
        head=new LinkNode<T>;
    }
    LinkList(const T &item){
        head=new LinkNode<T>(item);
    }
    LinkList(LinkList<T> &List);
    LinkList<T>& operator=(LinkList<T> &list);
    void Clear();
    int length() const;
    LinkNode<T>* GetHead() const;
    void SetHead(LinkNode<T> *p);
    LinkNode<T> *Find(T &item);//查找数据位置，返回第一个找到满足该数值的节点指针
    LinkNode<T>* Locate(int pos);
    //定位到指定位置上的节点指针
    bool Insert(T &item,int pos);//在指定位置pos上插入数值为item的节点
    bool Remove(int pos,T &item);
    bool GetData(int pos,T &item);
    bool SetData(int pos,T &item);
    bool IsEnpty() const;
    void Print() const;
    void Sort();
    void Reverse();//链表逆置
private:
    LinkNode<T> *head;
};
template<class T>
LinkNode<T> *LinkList<T>::Locate(int pos){//返回第pos个元素的地址
    int i=0;
    LinkNode<T> *p=head;
    if(pos<0){
        return NULL;
    while(NULL!=p&&i<pos){
        p=p->next;
        ++i;
    }
        return p;
    }
                                         }                                          
template<class T>
bool LinkList<T>::Insert(T &item,int pos){
    LinkNode<T> *p=Locate(pos);
    if(NULL==p)
         return false;
    LinkNode<T> *node=new LinkNode<T>(item);
    if(NULL==node){
        std::cerr<<"分配内存失败！"<<std::endl;
        exit(1);
    }
    node->next=p->next;
    p->next=node;
    return true;
}
template<class T>
bool LinkList<T>::Remove(int pos,T &item){
    LinkNode<T> *p=Locate(pos);
    if(p==NULL||p->next==NULL)
         return false;
    LinkNode<T> *del=p->next;
    p->next=del->next;
    item=del->data;
    delete del;
    return true;
}
template<class T>
void  LinkList<T>::Clear(){
    LinkNode<T> *p=NULL;
    while(head->next!=NULL){
        p=head->next;
        head->next=p->next;
        delete p;
    }
}
template<class T>
void LinkList<T>::Print()const{//打印链表
    int count=0;
    LinkNode<T> *p =head;
    while(p->next!=NULL){
        p=p->next;
        std::cout<<p->data<<" ";
        if(++count%10==0){//每隔十个元素换一行。
            std::cout<<std::endl;
        }
    }
}
template<class T>
int LinkList<T>::length()const{
    int count=0;
    LinkNode<T> *p=head->next;
    while(p!=NULL){
        ++count;
        p=p->next;
    }
    return count;
}
template<class T>
void LinkList<T>::Reverse(){
    LinkNode<T> *pre=head->next;
    LinkNode<T> *curr=pre->next;
    LinkNode<T> *next=NULL;
    head->next->next=NULL;
    while(curr){
        next=curr->next;
        curr->next=pre;
        pre=curr;
        curr=next;
    }
    head->next=pre;
}                             
#endif
