#include<iostream>
#include<string>
using namespace std;

class A
{
    char *m_str;
public:
    A(char *str){
        m_str = str;
    }
    void show()
    {
        cout<<m_str<<endl;
    }
};
A * test()
{
    char str[] = "nihao";//栈中
    A *pa = new A(str);
    return pa;
}
int main()
{
    /**
     * why???
     *堆对象A的指针p中的m_str指向一个Stack内存，
     *但是即使Stack内存已经过期了，但是p->m_str依旧合法且数据没有错误。   
     */
    A *p = test(); 
    int i=1;
    int j=1;
    p->show();
    return 0;
}