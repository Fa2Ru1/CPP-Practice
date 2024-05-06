//Structures in C++:
//There are 3 students, each student include: student ID, name, Engish grades, Math grades and Physics grades
//Input information above
//Output average grades of 3 subjects, and top student's info
//References: https://www.runoob.com/cplusplus/cpp-data-structures.html; https://www.w3schools.com/cpp/cpp_structs.asp

#include <iostream>
using namespace std;

//create a structure variable called student
struct Student{

    long studentID;
    string name;
    int englishGrades;
    int mathGrades;
    int physicsGrades;

};  //do not forget semicolon

int main(){

    Student s[3];
    double englishTotal;
    double mathTotal;
    double physicsTotal;
    double gradesTotal[3];
    double maxGrades = 0;
    int maxGradesIndex = 0;

    //information input
    for(int i = 0; i < 3; i++){
        cout << "Please enter student " << i + 1 << " information: " << endl;
        cin >> s[i].studentID;
        cin >> s[i].name;
        cin >> s[i].englishGrades;
        cin >> s[i].mathGrades;
        cin >> s[i].physicsGrades;
    }

    //total english grades
    for(int i = 0; i < 3; i++){
        englishTotal = englishTotal + s[i].englishGrades;
    }

    //total math grades
    for(int i = 0; i < 3; i++){
        mathTotal = mathTotal + s[i].mathGrades;
    }

    //total physics grades
    for(int i = 0; i < 3; i++){
        physicsTotal = physicsTotal + s[i].physicsGrades;
    }

    //average grades output
    cout << "The average grades of English is: " << englishTotal / 3.0 << endl;
    cout << "The average grades of Math is: " << mathTotal / 3.0 << endl; 
    cout << "The average grades of Physics is: " << physicsTotal / 3.0 << endl;

    //calculate top student
    for(int i =0; i < 3; i++){
        gradesTotal[i] = s[i].englishGrades + s[i].mathGrades + s[i].physicsGrades;
        if(maxGrades >= gradesTotal[i]){
            maxGrades;
        }else{
            maxGrades = gradesTotal[i];
            maxGradesIndex = i; //flag
        }
    }
    cout << "The top student is: " << s[maxGradesIndex].name << endl;

}