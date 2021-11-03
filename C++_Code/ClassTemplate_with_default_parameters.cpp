#include<iostream>
using namespace std;

template <class T1 = int, class T2 = float>
class Radha{
    public:
        T1 a ;
        T2 b;
        Radha(T1 x, T2 y){
            a = x;
            b = y;
        }
        void display(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
        }

};

int main()
{
    Radha<> obj(4,6.4);
    obj.display();
    cout<<endl;
    Radha <float,char> o(1.4,'g');
    o.display();
    return 0;
}