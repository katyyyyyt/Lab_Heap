#include <iostream>
#include <queue>
using namespace std;

int main() {
    // Default priority_queue in C++ is a MaxHeap
    priority_queue<int> maxHeap;

    // Insert elements (push)
    maxHeap.push(10);
    maxHeap.push(4);
    maxHeap.push(20);
    maxHeap.push(15);

    // Get the size of the heap
    cout<<"Size is: "<< maxHeap.size()  << endl;
  
    // The top() element is always the largest
    cout << "Top element: " << maxHeap.top() << endl; // 20

    // Pop elements in descending order
    while (!maxHeap.empty()) {
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }
}
