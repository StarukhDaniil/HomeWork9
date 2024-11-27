#pragma once
#include "Student.h"
#include <vector>
#include <memory>
#include <set>
#include <algorithm>

class Course {
private:
	std::string courseName;
	std::vector<std::weak_ptr<Student>> students;
public:
	void setCourseName(std::string courseName) {
		this->courseName = courseName;
	}

	std::string getCourseName() {
		return courseName;
	}

	std::vector<std::weak_ptr<Student>>& getStudents() {
		return students;
	}

	std::set<std::string> getGroups() {
		std::set<std::string> groups;
		std::for_each(students.begin(), students.end(), [&groups](std::weak_ptr<Student> student) {
			groups.insert(student.lock().get()->getGroupName());
		});
		return groups;
	}

	Course(std::string courseName) {
		this->courseName = courseName;
	}
	Course() = default;
	Course(const Course&) = default;
	Course& operator=(const Course&) = default;
	~Course() = default;
};