#include "osoba.h"

const std::string defaultRc = "0208145993";
const std::string defaultName = "Adam";
const std::string defaultSurname = "Rychtar";
const std::string defaultEmail = "rychtar.adam@email.cz";


Osoba::Osoba() {
	this->rc = defaultRc;
	this->name = defaultName + " " + defaultSurname;
	this->email = defaultEmail;
}

Osoba::Osoba(const std::string rc, const std::string name, const std::string surname, const std::string email) {
	if (!setRc(rc)) {
		this->rc = defaultRc;
		this->name = defaultName + " " + defaultSurname;
		this->email = defaultEmail;
	}

	else {
		this->name = name + " " + surname;
		this->email = email;
	}
}

std::string Osoba::getName() const {
	return this->name;
}

std::string Osoba::getEmail() const {
	return this->email;
}


std::ostream& operator<<(std::ostream& os, const Osoba& osoba) {
	os << "Jmeno a prijmeni: " << osoba.getName() << std::endl
		<< "RC              : " << osoba.getRc() << std::endl
		<< "Narozen         : " << osoba.datumNarozeni() << std::endl
		<< "Vek             : " << osoba.vek() << std::endl
		<< "Pohlavi         : " << osoba.pohlavi() << std::endl
		<< "Email           : " << osoba.getEmail() << std::endl
		<< std::endl
		<< "V I Z I T K A" << std::endl
		<< "******************************" << std::endl
		<< osoba.getName() << std::endl
		<< osoba.getEmail() << std::endl
		<< "******************************" << std::endl;
	return os;
}
