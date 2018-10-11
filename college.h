//********************
//Matthew Aberegg
//Project 3
//CS 2401
//10/8/2015
//********************

	/*
		file college.h
		This file defines the college class.
		author Matthew Aberegg
		note This is the file that contains all of the class information for the college class. 
	*/
	
#include <iostream>
#include <fstream>
#include <string>
#include "course.h"
#include "node.h"


#ifndef COLLEGE_H
#define COLLEGE_H


class College{
	public:
	College(std::string s);
	~College();
	College(const College& other);
	College& operator =(const College& other);
	void add(course& c);
	void remove(std::string coursename);
	void display(std::ostream& outs);
	double hours();
	double gpa();
	void save(std::ostream& outs);
	void load(std::istream& ins);
	private:
	std::string name;
	node * head;




};
#endif
