#include <iostream>
#include <fstream>
#include <stack>
#include <queue>

#include "stl.h"

using namespace std;

int main() {
    
    stack<int> s;
    queue<int> q;
    int length = s.size();

    string txt_file_name;
    cout << "Please enter the target text file:" << endl;
    cin >> txt_file_name;

    file_input_stack(txt_file_name, s);
    file_input_queue(txt_file_name, q);
    
    int stack_array[length];
    int queue_array[length];
    stack_array_copy(s, stack_array);
    queue_array_copy(q, queue_array);

    non_neg_prefix_sum(stack_array, s.size());
    non_neg_prefix_sum(queue_array, q.size());

}