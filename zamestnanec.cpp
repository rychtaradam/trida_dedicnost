#include "zamestnanec.h"

const std::string defaultRc = "6803020070";
const std::string defaultName = "James";
const std::string defaultSurname = "Bond";
const std::string defaultEmail = "bond@sspu-opava.cz";
const std::string defaultFunkce = "agent 007";

Zamestnanec::Zamestnanec() {
	this->rc = defaultRc;
	this->name = defaultName + " " + defaultSurname;
	this->email = defaultEmail;
	this->funkce = defaultFunkce;
}

Zamestnanec::Zamestnanec(const std::string rc, const std::string name, const std::string surname, const std::string email, const std::string funkce) {
	if (!setRc(rc)) {
		this->rc = defaultRc;
		this->name = defaultName + " " + defaultSurname;
		this->email = defaultEmail;
		this->funkce = defaultFunkce;
	}

	else {
		this->name = name + " " + surname;
		this->email = email;
		this->funkce = funkce;
	}
}

std::string Zamestnanec::getFunkce() const {
	return this->funkce;
}

std::ostream& operator<<(std::ostream& os, const Zamestnanec& zamestnanec) {
	os << "K A R T A  Z A M E S T N A N C E" << std::endl
		<< "********************************" << std::endl
		<< "Jmeno a prijmeni: " << zamestnanec.getName() << std::endl
		<< "RC              : " << zamestnanec.getRc() << std::endl
		<< "Narozen         : " << zamestnanec.datumNarozeni() << std::endl
		<< "Vek             : " << zamestnanec.vek() << std::endl
		<< "Pohlavi         : " << zamestnanec.pohlavi() << std::endl
		<< "Email           : " << zamestnanec.getEmail() << std::endl
		<< "Funkce          : " << zamestnanec.getFunkce() << std::endl
		<< std::endl
		<< "V I Z I T K A" << std::endl
		<< "******************************" << std::endl
		<< zamestnanec.getName() << std::endl
		<< zamestnanec.getFunkce() << std::endl
		<< zamestnanec.getEmail() << std::endl
		<< "******************************" << std::endl;
	return os;
}