int64_t fact(int64_t a) {
	if (a == 1){
		return 1;
	}else {
		return a*fact(a-1);
	}
}

void main(void){
	putchar('0'+fact(3));

}
