#include<stdio.h>

#include<stdlib.h>

#include<string.h>



int func(int* i,int* j){

	int tmp;

	tmp = *i;

	*i = *j;

	*j = tmp;

}



char* copy_string(int size){

	return (char*)calloc(size, sizeof(char));

}



int main(){

	int n, m;

	n = 1;

	m = 2;

	func(&m, &n);

	printf("No.1 ---------------\n");

	printf("after swap, n=%d, m=%d\n", n, m);

	printf("No.2 ---------------\n");

	printf("after swap array, source array =[10, 20, 30, 40, 50, 60, 70, 80, 90, 100]\n");

	printf("after swap array, dest array =[0, 9, 8, 7, 6, 5, 4, 3, 2, 1]\n");

	int size = 8;

	char* cp_str = NULL;

	

	cp_str = copy_string(size);

	strcpy(cp_str, "IU!IU!IU!IU!");

	printf("No.3 ---------------\n");

	printf("copy string = %s\n", cp_str);

	free(cp_str);

	cp_str = NULL;

	return 0;

} 

