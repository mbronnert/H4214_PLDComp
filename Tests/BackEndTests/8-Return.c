
int64_t toto(int64_t a){
	return 2*a;
}
void main(void){
	int64_t a;
	a = toto(1);
	if(a == 2) {
		putchar('O');
	}

}
