// File: PriorityQueue.cpp
#include <iostream>
#include <queue>
#include <functional>
#include <vector>
using namespace std;

void print_queue(priority_queue<int> p_que) {
  while(p_que.empty() == false) {
    cout << p_que.top() << " ";
    p_que.pop();
  }
  cout << endl;
}

void print_queue(priority_queue<int, vector<int>, greater<int>> p_que) {
  while(p_que.empty() == false) {
    cout << p_que.top() << " ";
    p_que.pop();
  }
  cout << endl;
}

int main() {
   //max heap - default
   priority_queue<int> p_que;
   p_que.push(34);
   p_que.push(14);
   p_que.push(38);
   p_que.push(24);
   p_que.push(72);
   p_que.push(49);
   p_que.push(64);
   print_queue(p_que);

   //min heap
   priority_queue<int, vector<int>, greater<int> > q_que;
   q_que.push(34);
   q_que.push(14);
   q_que.push(38);
   q_que.push(24);
   q_que.push(72);
   q_que.push(49);
   q_que.push(64);
   print_queue(q_que);

   return 0;
}
