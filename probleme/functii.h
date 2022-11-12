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

//todo functie ce citeste partea reala si imaginara a unui nr complex

void citireReIm(Complex& z) {
	ifstream f("numarComplex.txt");
	f >> z.pre;
	f >> z.pim;
}

//todo functie ce returneaza modulul unui nr complex

float modul(Complex z) {
	int suma = pow(z.pre, 2) + pow(z.pim, 2);
	return sqrt(suma);
}

//todo functie ce citeste coordonatele varfurilor unui poligon

void citireCoordonate(Poligon& p) {
	ifstream f("coordonate.txt");
	f >> p.nr;
	for (int i = 0; i < p.nr; i++) {
		f >> p.v[i].x;
		f >> p.v[i].y;
	}
}

//todo functie ce returneaza perimetrul poligonului

float perimetru(Poligon p, float& per) {
	per = 0;
	int i;
	for (i = 0; i < p.nr - 1; i++) {
		per = per + sqrt(pow(p.v[i].x-p.v[i+1].x, 2) + pow(p.v[i].y-p.v[i + 1].y, 2));
	}
	per = per + sqrt(pow(p.v[i].x - p.v[0].x, 2) + pow(p.v[i].y - p.v[i].y, 2));
	return per;
}

//todo functie ce citeste coordonatele a 2 puncte

void coordonatePuncte(Punct2& A, Punct2& B) {
	ifstream f("coordPct.txt");
	f >> A.x;
	f >> A.y;
	f >> B.x;
	f >> B.y;
}

//todo functie ce verifica daca un punct apartine axei Ox

bool apartineOx(Punct2 punct) {
	if (punct.y == 0 && punct.x != 0) {
		return true;
	}
	return false;
}

//todo functie ce verifica daca un punct apartine axei Oy

bool apartineOy(Punct2 punct) {
	if (punct.x == 0 && punct.y != 0) {
		return true;
	}
	return false;
}

//todo functie ce verifica daca segmentul determ de A si B se afla pe una dintre axe

bool apartineAxa(Punct2 A, Punct2 B) {
	if (apartineOx(A) && apartineOx(B) || apartineOy(A) && apartineOy(B)) {
		return true;
	}
	return false;
}