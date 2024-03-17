#include <iostream>

#define INVALID_GRADE(grade) grade < 0 || grade > 100

using namespace std;

int main() {
  int min_grade = 100, max_grade = 0;
  int grade_count = 0;
  int grade_total = 0;
  int current_grade = 0;

  while (true) {
    cout << "Please enter the grade of the next student (-1 to finish "
            "grading): ";
    cin >> current_grade;
    if (current_grade == -1)
      break;
    while (INVALID_GRADE(current_grade)) {
      cout << "The grade you have entered is invalid! Please enter a valid "
              "grade for the current student (0-100): ";
      cin >> current_grade;
    }
    grade_count++;
    grade_total += current_grade;
    min_grade = min(min_grade, current_grade);
    max_grade = max(max_grade, current_grade);
  }
  cout << "Total grades entered: " << grade_count << endl;
  cout << "Grade minimum: " << min_grade << "%" << endl;
  cout << "Grade maximum: " << max_grade << "%" << endl;
  cout << "Average grade: " << (double)grade_total / grade_count << "%" << endl;
  return 0;
}
