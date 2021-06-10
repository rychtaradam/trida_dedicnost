#pragma once
#include <string>
#include <iostream>
#include "rodne_cislo.h"


class Osoba : public Rc {
public:
	Osoba();
	Osoba(const std::string, const std::string, const std::string, const std::string);

	std::string getName()const;
	std::string getEmail()const;

	friend std::ostream& operator<<(std::ostream&, const Osoba&);

	std::string name;
	std::string email;
};

