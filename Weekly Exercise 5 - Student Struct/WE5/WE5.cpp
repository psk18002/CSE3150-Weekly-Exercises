#include "WE5.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

Student::Student() {};

Student::Student(int id, string name, int final_exam, int midterm, vector<int> &hw)
        : id(id), name(name), final_exam(final_exam), midterm(midterm), hw_grades(hw) {

};

void Student::read_Student() {

    cout << "Enter the student's ID:" << endl;
    cin >> id;

    cout << "Enter the student's name:" << endl;
    cin >> name;

    cout << "Enter final exam grade:" << endl;
    cin >> final_exam;

    cout << "Enter midterm grade:" << endl;
    cin >> midterm;

    cout << "Enter the homework grades --Hit EOF (CTRL-D) at the end--:" << endl;
    int x;
    while (cin >> x) {
        hw_grades.push_back(x);
    }
}

void Student::change_id(int new_id) {
    id = new_id;
}

void Student::change_name(string new_name) {
    name = new_name;
}

void Student::change_final(int new_grade) {
    final_exam = new_grade;
}

void Student::change_midterm(int new_grade) {
    midterm = new_grade;
}

void Student::add_hw_grade(int add_grade) {
    hw_grades.push_back(add_grade);
}

void Student::report() const {
    cout << "Your overall grade is: " << overallGrade() << endl;

}

int Student::overallGrade() const {
    int total = 0;
    for (int hw : hw_grades) total += hw;
    vector<int>::size_type sz = hw_grades.size();
    return 0.3 * midterm + 0.3 * final_exam + 0.4 * total / sz;
}

void Student::print_student() const {
    cout << "Student Name: " << name << endl;
    cout << "Student ID: " << id << endl;

    report();
    cout << "Midterm Grade: " << midterm << endl;
    cout << "Final Exam Grade: " << final_exam << endl;
    
    cout << "Homework Grades:" << endl;
    for (int hw : hw_grades) {
        cout << hw << endl;
    }
}

