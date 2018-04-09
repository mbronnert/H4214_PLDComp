
int64_t toto(int64_t a, int64_t b, int64_t c, int64_t d, int64_t e, int64_t f) {
	int64_t s;
	s = a + b + c + d + e + f;
	return s;
}
void main(void){
	int64_t a;
	int64_t b;
	int64_t c;
	int64_t d;
	int64_t e;
	int64_t f;
	int64_t g;
	b=1;
	c=1;
	d=1;
	e=1;
	f=1;
	g=1;
	a = toto(b,c,d,e,f,g);
	if(a == 6) {
		putchar('O');
	}

}
