#include<iostream>
using namespace std;

int do_before_adding(int* i){
}
int do_after_adding(int* i){
}
void check_result(int x,int z,int t_x,int t_z){
	if((x==t_x)&&(z==t_z))
	printf("pass\n");
	else
	printf("fail\n");
	
}
void test_do_before_adding(){
	int x = 1;
	int z = 5+do_before_adding(&x);
	int t_x = 1;
	int t_z = 5+t_z+1;
	printf("do_before_adding()\n");
	printf("z=%d,x=%d",z,x);
	printf("t_z=%d,t_x=%d",t_z,t_x);
	check_result(x,z,t_x,t_z);
	
	
}
void test_do_after_adding(){
	
}
int main(){
	
	printf("---fun 1.---");
	test_do_before_adding();
	printf("---fun 2.---");
	test_do_after_adding();
	return 0;
}