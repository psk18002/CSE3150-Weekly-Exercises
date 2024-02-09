#include <iostream>
#include <fstream>
#include <string>
#include <stack>
#include <queue>

using namespace std;

void file_input_stack(String txt_file, stack<int> s) {

  ifstream input_file;
  input_file.open(txt_file);

    while (!input_file.eof()) {
      string in_str;
      input_file >> in_str;
      int x = stoi(in_str);
      s.push(x);
      cout << in_str << endl;
    }

  input_file.close();   
}

void file_input_queue(String txt_file, queue<int> q) {

  ifstream input_file;
  input_file.open(txt_file);

    while (!input_file.eof()) {
      string in_str;
      input_file >> in_str;
      int x = stoi(in_str);
      q.push(x);
      cout << in_str << endl;
    }

  input_file.close();   
}