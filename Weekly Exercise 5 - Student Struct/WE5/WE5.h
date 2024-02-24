#ifndef __WE5_H
#define __WE5_H

#include <string>
#include <vector>

using namespace std;

struct Student {
    public:
        Student();
        Student(int id, string name, int final_exam, int midterm, vector<int> & hw);
        void read_Student();

        //SEPARATE FIELD SETTERS
        void change_id(int id);
        void change_name(string name);
        void change_final(int grade);
        void change_midterm(int grade);
        void add_hw_grade(int grade);

        void report() const;
        int overallGrade() const;
        void print_student() const;
        
    private: 
        int id;
        string name;
        int final_exam;
        int midterm;
        vector<int> hw_grades;
};

#endif