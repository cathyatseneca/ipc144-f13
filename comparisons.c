int maxOfThree(int num1,int num2,int num3){
	int rc;
	if(num1 > num2 && num1 > num3){
		rc= num1;
	}
	else if(num2 > num1 && num2 > num3){
		rc= num2;
	}
	else{
		rc= num3;
	}
	return rc;

}
/*alternative
int maxOfThree(int num1,int num2,int num3){
	int rc=num1;
	if(num2 > rc){
		rc = num2;
	}
	if(num3 > rc){
		rc=num3;
	}
	return rc;
}
int main(void){
    int first;
    int second;
    int third;
	printf("enter a number:");
	scanf("%d",&first);
	printf("enter a number:");
	scanf("%d",&second);
	printf("enter a number:");
	scanf("%d",&third);
	printf("The biggest number is: %d",maxOfThree(first,second,third));
}