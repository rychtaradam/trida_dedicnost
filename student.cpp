#include "student.h"

const std::string defaultRc = "6803020070";
const std::string defaultName = "James";
const std::string defaultSurname = "Bond";
const std::string defaultEmail = "bond@sspu-opava.cz";
const std::string defaultTrida = "IT1";

Student::Student() {
	this->rc = defaultRc;
	this->name = defaultName + " " + defaultSurname;
	this->email = defaultEmail;
	this->trida = defaultTrida;
}

Student::Student(const std::string rc, const std::string name, const std::string surname, const std::string email, const std::string trida) {
	if (!setRc(rc)) {
		this->rc = defaultRc;
		this->name = defaultName + " " + defaultSurname;
		this->email = defaultEmail;
		this->trida = defaultTrida;
	}

	else {
		this->name = name + " " + surname;
		this->email = email;
		this->trida = trida;
	}
}

std::string Student::getTrida() const {
	return this->trida;
}

std::ostream& operator<<(std::ostream& os, const Student& student) {
	os << "Jmeno a prijmeni: " << student.getName() << std::endl
		<< "RC              : " << student.getRc() << std::endl
		<< "Narozen         : " << student.datumNarozeni() << std::endl
		<< "Vek             : " << student.vek() << std::endl
		<< "Pohlavi         : " << student.pohlavi() << std::endl
		<< "Email           : " << student.getEmail() << std::endl
		<< "Funkce          : " << student.getTrida() << std::endl
		<< std::endl
		<< "P R U K A Z  S T U D E N T A" << std::endl
		<< "******************************" << std::endl
		<< student.getName() << ", "
		<< student.getTrida() << std::endl
		<< student.getEmail() << std::endl
		<< "******************************" << std::endl;
	return os;
}