#pragma once
#include <iostream>
#include <string>
#include <memory>

class Course;

class Student {
private:
	std::string studentName;
	std::string groupName;
	std::shared_ptr<Course> course;
public:
	void setStudentName(const std::string& studentName) {
		this->studentName = studentName;
	}
	
	void setGroupName(const std::string& groupName) {
		this->groupName = groupName;
	}
	
	std::string getStudentName() {
		return studentName;
	}

	std::string getGroupName() {
		return groupName;
	}

	void setCourse(std::shared_ptr<Course>& course) {
		this->course.reset(course.get());
	}

	std::shared_ptr<Course>& getCourse() {
		return course;
	}

	Student(const std::string& studentName, const std::string& groupName) {
		this->studentName = studentName;
		this->groupName = groupName;
	}
	Student() = default;
	Student(const Student&) = default;
	Student& operator=(const Student&) = default;
	~Student() = default;
};