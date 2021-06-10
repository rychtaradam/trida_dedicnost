#include "rodne_cislo.h"
#include "osoba.h"
#include "zamestnanec.h"
#include "student.h"
#include <iostream>

int main() {
	Rc rc1;
	Rc rc2("7401225469");
	Rc rc3(rc2);
	Osoba o1;
	Osoba o2("6462191109", "Hana", "Rohanova", "rohanova@sspu-opava.cz");
	Zamestnanec z1;
	Zamestnanec z2("6001011236", "Josef", "Vonasek", "vonasek@sspu-opava.cz", "ucitel odbornych predmetu");
	Student s1;
	Student s2("0355179990", "Marie", "Svobodova", "mariesvobodova@email.cz", "IT3");

	std::cout << "Objekt rc1 vytvoreny vychozim konstruktorem tridy rodne_cislo" << std::endl
		<< "-------------------------------------------------------------" << std::endl
		<< rc1 << std::endl;

	std::cout << "Objekt rc2 vytvoreny konstruktorem s parametry tridy rodne_cislo" << std::endl
		<< "----------------------------------------------------------------" << std::endl
		<< rc2 << std::endl;

	std::cout << "Objekt rc3 vytvoreny kopirovacim konstruktorem tridy rodne_cislo" << std::endl
		<< "----------------------------------------------------------------" << std::endl
		<< rc3 << std::endl;

	std::cout << "Objekt o1 vytvoreny vychozim konstruktorem tridy osoba" << std::endl
		<< "------------------------------------------------------" << std::endl
		<< o1 << std::endl;

	std::cout << "Objekt o2 vytvoreny konstruktorem s parametry tridy osoba" << std::endl
		<< "---------------------------------------------------------" << std::endl
		<< o2 << std::endl;

	std::cout << "Objekt z1 vytvoreny vychozim konstruktorem tridy zamestnanec" << std::endl
		<< "------------------------------------------------------------" << std::endl
		<< z1 << std::endl;

	std::cout << "Objekt z2 vytvoreny konstruktorem s parametry (rc,jmeno,prijmeni,email,funkce) tridy zamestnanec" << std::endl
		<< "------------------------------------------------------------------------------------------------" << std::endl
		<< z2 << std::endl;

	std::cout << "Objekt s1 vytvoreny vychozim konstruktorem tridy student" << std::endl
		<< "--------------------------------------------------------" << std::endl
		<< s1 << std::endl;

	std::cout << "Objekt s2 vytvoreny konstruktorem s parametry (rc,jmeno,prijmeni,email,trida) tridy student" << std::endl
		<< "--------------------------------------------------------" << std::endl
		<< s2 << std::endl;
}