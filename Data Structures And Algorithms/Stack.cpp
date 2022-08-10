#include <iostream>
using namespace std;
int top=-1;
int s[5];
void push(int x){
	if(top>=4){
		cout<<"stack overflow";
	}
	else{
		top=top+1;
		s[top]=x;
	}
}
void pop(){
	if(top<=0){
		cout<<"stack underflow";
	}
	else{
		cout<<"element is popped: "<<s[top];
		top=top-1;
	}
}
void stack_top(){
	cout<<"Element at top of stack is: "<<s[top];
}
void show(){
	int i;
	cout<<"The stack is: ";
	for(i=0;i<top+1;i++){
		cout<<s[i];
	}
}
int main(){
	int x,a,b=0;
	cout<<"Enter your choice";
	cin>>a;
	if(a==1){
		cin>>x;
		push(x);
	}
	else if(a==2){
		pop();
		show();
	}
	else if(a==3){
		stack_top();
	}
	else if(a==4){
		b=1;
		show();
	}
}

