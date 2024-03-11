#include "Student.h"

//Konstructore
Student::Student() = default;
Student::Student(const std::string& name, const std::string& username){
    setName(name);
    setUsername(username);
}

//Setter og getter til navn
std::string Student::getName() const{
    return mName;
}
void Student::setName(const std::string& name){
    mName = name;
}

//setter og getter til brugernavn
std::string Student::getUsername() const{
    return mUsername;
}
void Student::setUsername(const std::string& username){
    mUsername = username;
}

//trækker en eksamen fra beholderen
void Student::draw (Bin& bin){
    mExam = bin.drawAndRemove(); //sætter det trukne som mExam
}

//Tager eksamen og retunere hvis den er inden for vector størrelsen
std::string Student::getExam(const std::vector<std::string>& exams) const{
    if (mExam >= 0 && mExam < exams.size()){
        return exams[mExam];
    }else
        return "Invalid exam index";
}

sk





