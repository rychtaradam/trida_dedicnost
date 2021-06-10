#pragma once
#include <string>
#include <iostream>
#include "osoba.h"

class Student : public Osoba {
public:
	Student();
	Student(const std::string, const std::string, const std::string, const std::string, const std::string);

	std::string getTrida()const;

	friend std::ostream& operator<<(std::ostream&, const Student&);

private:
	std::string trida;

};



