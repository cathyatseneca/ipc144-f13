void order(int a,int b,int c,int* small,int* middle,int* big){
	if(a < b){  //a must be middle or smallest, b is not smallest
		if(a < c){
			*small=a;
			if(b < c){
				*middle=b;
				*big = c;
			}
			else{
				*middle = c;
				*big = b;
			}
		}
		else{
			*middle=a;
			if(b < c){
				*small=b;
				*big = c;
			}
			else{
				*small = c;
				*big = b;
			}

		}
	}
	else{
	//complete this please	
	}
}
int main(void){
	int s,m,b;
	order(10,3,5,&s,&m,&b);
	/*this will print smallest is 3,middle is 5, biggest is 10*/
	printf("the smallest is %d\n",s);
	printf("the middle is %d\n",m);
	printf("the biggest is %d\n",b);


	/*this will print smallest is 1,middle is 6, biggest is 10*/
	order(1,6,10,&s,&m,&b);
	printf("the smallest is %d\n",s);
	printf("the middle is %d\n",m);
	printf("the biggest is %d\n",b);
}