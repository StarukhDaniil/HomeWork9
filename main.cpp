#include <iostream>
#include <memory>
#include <algorithm>
#include <vector>
#include <set>
#include "Course.h"
#include "Student.h"

int main() {
	std::shared_ptr<Student> petrenko(new Student("Petrenko", "A1"));
	std::shared_ptr<Student> pupko(new Student("Pupko", "A2"));
	std::shared_ptr<Student> ivanenko(new Student("Ivanenko", "A1"));
	std::shared_ptr<Student> shevchenko(new Student("Shevchenko", "A3"));
	std::shared_ptr<Course> math(new Course("math"));
	math.get()->getStudents().push_back(petrenko);
	math.get()->getStudents().push_back(pupko);
	math.get()->getStudents().push_back(ivanenko);
	math.get()->getStudents().push_back(shevchenko);

	std::set<std::string> groups = math.get()->getGroups();

	std::for_each(groups.begin(), groups.end(), [](const std::string& groupName) {
		std::cout << groupName << std::endl;
		});
	return 0;
}