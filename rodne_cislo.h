#pragma once
#include <string>
#include <iostream>
#include <ctime>

class Rc {
public:
	Rc();
	Rc(const std::string);
	Rc(const Rc&);

	std::string getRc()const;
	bool setRc(const std::string);

	std::string datumNarozeni()const;
	std::string pohlavi()const;
	int vek()const;

	friend std::ostream& operator<<(std::ostream&, const Rc&);

	std::string rc;

private:
	bool checkRc(const std::string)const;
	int ziskejDen()const;
	int ziskejMesic()const;
	int ziskejRok()const;
};

