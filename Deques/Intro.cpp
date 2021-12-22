// deque doubly ended queue ..insert delete from both ends
#include<iostream>
#include<deque>
using namespace std;

int main()
{
        deque<int> dq;
        dq.push_back(1); //pushes from end
        dq.push_back(2);
        dq.push_back(3);
        dq.push_back(4);

        dq.push_front(5);//pushes from front
        cout<<dq.front()<<endl;//returns element at front

        cout<<dq.back()<<endl;//returns last element i.e at back
        dq.pop_back(); //removes from back
        cout<<dq.back()<<endl;

        dq.pop_front(); //removes from front;
        cout<<dq.front()<<endl;

}