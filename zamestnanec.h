#pragma once
#include <string>
#include <iostream>
#include "osoba.h"

class Zamestnanec : public Osoba {
public:
	Zamestnanec();
	Zamestnanec(const std::string, const std::string, const std::string, const std::string, const std::string);

	std::string getFunkce()const;

	friend std::ostream& operator<<(std::ostream&, const Zamestnanec&);

private:
	std::string funkce;

};

