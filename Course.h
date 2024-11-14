#pragma once
#include "Student.h"
#include <vector>
#include <memory>

class Course {
private:
	std::string courseName;
	std::vector<std::shared_ptr<Student>> students;
public:
	void setCourseName(std::string courseName) {
		this->courseName = courseName;
	}
	std::string getCourseName() {
		return courseName;
	}
	std::vector<std::shared_ptr<Student>>& getStudents() {
		return students;
	}

	Course(std::string courseName) {
		this->courseName = courseName;
	}
	Course() = default;
	Course(const Course&) = default;
	Course& operator=(const Course&) = default;
	~Course() = default;
};