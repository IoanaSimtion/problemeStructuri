using namespace std;
#include <iostream>
#pragma once

struct punct {
	int x;
	int y;
};

struct poligon {
	int nr_vf;
	punct vf[20];
}p;



struct Data {
	int zi, luna, an;
};

struct elev {
	char nume[21];
	Data dn;
};



struct Complex {
	int pre;
	int pim;
};