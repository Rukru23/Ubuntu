#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>
#include "Bin.h"


class Student
{
public:
    //Default Constructor & constructor med parameter
    Student();
    Student(const std::string& name, const std::string& username);

    //Deklaration af funktioner
    std::string getName() const;
    void setName(const std::string& name);

    std::string getUsername() const;
    void setUsername(const std::string& username);

    void draw (Bin& bin);

    std::string getExam(const std::vector<std::string>& exams) const;


private:
    //Deklaration af objekter
    std::string mName;
    std::string mUsername;
    int mExam = -1;

};







#endif // STUDENT_H
