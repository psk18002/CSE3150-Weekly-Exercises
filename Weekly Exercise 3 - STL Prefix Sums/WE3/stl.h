#ifndef _STL_H
#define _STL_H

#include <stack>
#include <queue>
#include <string>

using namespace std;

int* stack_array_copy(stack<int> s, int array[]);
int* queue_array_copy(queue<int> q, int array[]);
void file_input_queue(string txt_file, queue<int>& q);
void file_input_stack(string txt_file, stack<int>& s);
bool non_neg_prefix_sum(int array[], int length);
int* sum_prefix(int array[], int length, int prefix_sums[]);

#endif