#include <vector>
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1,Node* next1)
    {
        data=data1;
        next=next1;
    }
    public:
    Node(int data1)
    {
        data=data1;
        next=nullptr;
    }
};
int main() {
    // Write C++ code here
    vector<int>arr={2,5,8,7};
    Node* y=new Node(arr[0]);
    cout<<y->data;

    return 0;
}