#pragma once
#include <iostream>
#include <string>

class Student {
private:
	std::string studentName;
	std::string groupName;
public:
	void setStudentName(std::string studentName) {
		this->studentName = studentName;
	}
	
	void setGroupName(std::string groupName) {
		this->groupName = groupName;
	}
	
	std::string getStudentName() {
		return studentName;
	}

	std::string getGroupName() {
		return groupName;
	}

	Student(std::string studentName, std::string groupName) {
		this->studentName = studentName;
		this->groupName = groupName;
	}
	Student() = default;
	Student(const Student&) = default;
	Student& operator=(const Student&) = default;
	~Student() = default;
};