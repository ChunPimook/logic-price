#include <stdio.h>
int main() {
	float x,b;
	printf("Welcome to Kerry Express\n");
	printf("Enter your Parcel weight : ");
	scanf_s("%f", &x);
	printf("Enter your size Width+long : ");
	scanf_s("%f", &b);
	if (x <= 1 && b <= 40) {
		printf("Your size = Mini\n");
		printf("Bangkok 35 Baht\n");
		printf("Uncountry 59 Baht\n");
	}
	else if (x <= 5 && b <= 60) {
		printf("Your size = S\n");
		printf("Bangkok 79 Baht\n");
		printf("Uncountry 99 Baht\n");
	}
	else if (x <= 5 && b <= 75) {
		printf("Your size = M\n");
		printf("Bangkok 99 Baht\n");
		printf("Uncountry 119 Baht\n");
	}
	else if (x <= 10 && b <= 90) {
		printf("Your size = L\n");
		printf("Bangkok 119 Baht\n");
		printf("Uncountry 139 Baht\n");
	}
	else {
		printf("Overweight!! Unable to transport");
	}
	    printf("--------------------");
		printf("Thank you");
		printf("--------------------");
	return 0;

}