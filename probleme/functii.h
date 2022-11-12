using namespace std;
#include <iostream>
#include <fstream>
#include <string.h>
#include "structuri.h"
#pragma once

//todo functie ce citeste numele si data nasterii a doi elevi

void citireDn(elev&E1, elev&E2) {
	ifstream f("numeDn.txt");
	f >> E1.nume;
	f >> E1.dn.zi;
	f >> E1.dn.luna;
	f >> E1.dn.an;
	f >> E2.nume;
	f >> E2.dn.zi;
	f >> E2.dn.luna;
	f >> E2.dn.an;
}

//todo functie ce verifica daca E1 > E2

bool eMaiMare(elev E1, elev E2) {
	if (E1.dn.luna < E2.dn.luna) {
		return true;
	}
	else {
		if (E1.dn.luna == E2.dn.luna) {
			if (E1.dn.zi < E2.dn.zi) {
				return true;
			}
			else {
				return false;
			}
		}
	}
	return false;
}