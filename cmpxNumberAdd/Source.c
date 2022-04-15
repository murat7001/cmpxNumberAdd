#include<stdio.h>

typedef struct {
	float a;
	float b;
}cmplx_t;

//struct complex 
//{
//	float a;
//	float b;
//};

void myPrint(cmplx_t x);
void myScan(cmplx_t* x);
cmplx_t myAdd(cmplx_t x, cmplx_t y);


int main() {
	cmplx_t cmplx1,cmplx2;
	cmplx_t* p = &cmplx1;

	myScan(p);
	myScan(&cmplx2);
	myPrint(myAdd(cmplx1,cmplx2));
	
}

void myScan(cmplx_t* x) {
	printf("Please enter complex numbers real: ");
	scanf("%f", &x->a);
	printf("Please enter complex numbers image: ");
	scanf("%f", &(*x).b);
}

void myPrint(cmplx_t x) {
	printf("%.2f+%.2fi\n", x.a, x.b);
	
}

cmplx_t myAdd(cmplx_t x, cmplx_t y) {
	float a, b;
	a = x.a + y.a;
	b = x.b + y.b;
	cmplx_t cmplx3 = { a,b };
	return cmplx3;
}