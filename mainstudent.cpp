#include <iostream>
#include <string>
#include "student.h"


int main(){
 struct student  stud;
 
 std::cout << "what is the students name & ID?: ";
 std::cin >> stud.name >> stud.id;
 std::cout << "Grades:assignment midterm fin: ";
 std::cin >> stud.assig >> stud,midt >> stud.fin;
 std::cout << "Name: " << stud::endl
         << "student ID: "<< stud.midt <<"Grade:"
         << (stud.midt +stud.fin +stud.assig)
         std::endl
}