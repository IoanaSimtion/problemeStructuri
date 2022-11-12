#include "functii.h"
#include "structuri.h"
#pragma once

//Teza 2, S2, 2:

//sa se ilocuiasca punctele de suspensie ai sa se citeasca de la tastatura coordonatele varfurilor poligonului p

void sol1() {
	poligon p;
	cin >> p.nr_vf;
	for (int i = 0; i < p.nr_vf; i++) {
		cin >> p.vf->x;
		cin >> p.vf->y;
	}
}

//Teza 3, S2, 2:

//sa se afiseze numele elevului mai mare, stiind ca ambii elevi sunt nascuti in acelasi an, in zile diferite

void sol2() {
	elev E1, E2;
	citireDn(E1, E2);
	//cout << E1.nume << endl;
	//cout << E2.nume << endl;
	//cout << E2.dn.an;
	if (eMaiMare(E1, E2)) {
		cout << E1.nume;
	}
	else {
		cout << E2.nume;
	}
}


//Teza 4, S2, 2:

//sa se afiseze modului numarului complex z

void sol3() {
	Complex z;
	citireReIm(z);
	//cout << z.pre << ' ' << z.pim;
	cout << modul(z);
}