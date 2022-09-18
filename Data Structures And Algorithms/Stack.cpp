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
	int a, x;
   cout<<"1) Push in stack";
   cout<<"2) Pop from stack";
   cout<<"3) Display stack";
   cout<<"4) Exit";
   do {
      cout<<"Enter choice: ";
      cin>>a;
      switch(a) {
         case 1: {
            cout<<"Enter value to be pushed:";
            cin>>x;
            push(x);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            show();
            break;
         }
         case 4: {
            cout<<"Exit";
            break;
         }
         default: {
            cout<<"Invalid Choice";
         }
      }
   }while(a!=4);
   return 0;
}

