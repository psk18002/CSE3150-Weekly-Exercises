#include <iostream>
#include <fstream>
#include <stack>
#include <queue>
#include <string>

#include "stl.h"

using namespace std;

int* sum_prefix(int array[], int length, int prefix_sums[]) {
    int sum = 0;
    cout << "{ ";
    if (length != 0) {
        for (int i = 0; i < length; i++) {
            sum += array[i];
            prefix_sums[i] = sum;
            cout << prefix_sums[i] << " ";
        }
    } else {
        prefix_sums[0] = 0;
    }
    cout << "}" << endl;

    return prefix_sums;
}

bool non_neg_prefix_sum(int array[], int length) {

  try {
    int prefix_sums[length];

    sum_prefix(array, length, prefix_sums);

    cout << "For Non-negative Prefix Sums:" << endl;
    for (int i = 0; i < length; i++){
        if (prefix_sums[i] < 0) throw (i);
    }

    cout << "TRUE!\n" << endl;
    return true;

  } catch (int i) {
        cout << "EXCEPTION CAUGHT:" << endl;
        cout << "FALSE @ Index " << i << "\n" << endl;
        return false;
  }
}

int* stack_array_copy(stack<int> s, int array[]) {

    int position = s.size() - 1;
    while(!s.empty()) {
        array[position] = s.top();
        position -= 1;
        s.pop();
    }

    return array;
}

int* queue_array_copy(queue<int> q, int array[]) {
    
    int position = 0;
    while (!q.empty()) {
        array[position] = q.front();
        position += 1;
        q.pop();
    }

    return array;
}

void file_input_stack(string txt_file, stack<int>& s) {

  ifstream input_file;
  input_file.open(txt_file);
  cout << "Loading the following values into stack" << endl;

    while (!input_file.eof()) {
      string in_str;
      input_file >> in_str;
      int x = stoi(in_str);
      s.push(x);
      cout << x << endl;
    }
    cout << endl;

  input_file.close();   
}

void file_input_queue(string txt_file, queue<int>& q) {

  ifstream input_file;
  input_file.open(txt_file);
  cout << "Loading the following values into queue" << endl;

    while (!input_file.eof()) {
      string in_str;
      input_file >> in_str;
      int x = stoi(in_str);
      q.push(x);
      cout << x << endl;
    }
    cout << endl;

  input_file.close();   
}
