#include "rodne_cislo.h"
#pragma warning(disable : 4996)

const std::string defaultRc = "0208145993";

Rc::Rc() {
	this->rc = defaultRc;
}

Rc::Rc(const std::string rc) {
	if (!setRc(rc)) {
		this->rc = defaultRc;
	}
}

Rc::Rc(const Rc& rc) {
	this->rc = rc.getRc();
}

std::string Rc::getRc() const {
	return this->rc;
}

bool Rc::setRc(const std::string rc) {
	if (checkRc(rc)) {
		this->rc = rc;
		return true;
	}

	else {
		return false;
	}
}

bool Rc::checkRc(const std::string rc) const {
	if (rc.length() != 10) {
		return false;
	}

	for (int i = 0; i < rc.length(); i++) {
		if (rc[i] < '0' || rc[i] > '9') {
			return false;
		}
	}

	int zbytek = std::stoi(rc.substr(0, 9)) % 11;

	if (std::stoi(rc.substr(9, 1)) == zbytek) {
		return true;
	}

	else if (zbytek == 10 && rc.substr(9, 1) == "0") {
		return true;
	}

	else {
		return false;
	}
}

std::string Rc::datumNarozeni() const {
	return std::to_string(ziskejDen()) + ". " + std::to_string(ziskejMesic()) + ". " + std::to_string(ziskejRok());
}

std::string Rc::pohlavi() const {
	return (std::stoi(this->rc.substr(2, 2)) > 50 ? "zena" : "muz");
}

int Rc::vek() const {

	time_t t = time(0);
	struct tm* now = localtime(&t);

	int rok = now->tm_year + 1900;
	int mesic = now->tm_mon + 1;
	int den = now->tm_mday;

	int vek = rok - ziskejRok();
	if (ziskejMesic() > mesic) {
		vek -= 1;
	}
	if (ziskejMesic() == mesic && ziskejDen() > den) {
		vek -= 1;
	}

	return vek;
}

int Rc::ziskejDen() const {
	return std::stoi(this->rc.substr(4, 2));
}

int Rc::ziskejMesic() const {
	int mesic = std::stoi(this->rc.substr(2, 2));
	// u žen se k mesíci pøipoèítává 50
	return mesic > 50 ? mesic - 50 : mesic;
}

int Rc::ziskejRok() const {
	int rok = std::stoi(this->rc.substr(0, 2));
	return rok < 54 ? rok + 2000 : rok + 1900;
}

std::ostream& operator<<(std::ostream& os, const Rc& rc) {
	os << "RC              : " << rc.getRc() << std::endl
		<< "Narozen         : " << rc.datumNarozeni() << std::endl
		<< "Vek             : " << rc.vek() << std::endl
		<< "Pohlavi         : " << rc.pohlavi() << std::endl;
	return os;
}