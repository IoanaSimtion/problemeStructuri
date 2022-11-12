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



struct Punct {
	float x, y;
};

struct Poligon {
	int nr;
	punct v[101];
};



struct Punct2 {
	float x, y;
};



struct Triunghi {
	float a, b, c;
};