#include <iostream>
#include <array>

const int NUM_STUDENTS = 2;

class Student {
public:
  int roll;
  std::string name;
  std::string address;
};

int main() {
   std::array<Student, NUM_STUDENTS> students;
   for (int i = 0; i < NUM_STUDENTS; i++) {
    std::cout << "Enter details for student " << i+1 << ":\n";
    std::cout << "Roll number: ";
    std::cin >> students[i].roll;
    std::cout << "Name: ";
    std::cin >> students[i].name;
    std::cout << "Address: ";
    std::cin >> students[i].address;
  }


  int searchRoll;
  std::cout << "Enter the roll number to search for: ";
  std::cin >> searchRoll;

  bool found = false;
  for (int i = 0; i < NUM_STUDENTS; i++) {
    if (students[i].roll == searchRoll) {
      std::cout << "Student found:\n";
      std::cout << "Roll: " << students[i].roll << "\n";
      std::cout << "Name: " << students[i].name << "\n";
      std::cout << "Address: " << students[i].address << "\n";
      found = true;
      break;
    }
  }

  if (!found) {
    std::cout << "Student not found.\n";
  }

  return 0;
}
