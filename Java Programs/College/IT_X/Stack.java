import java.util.Scanner;
class Stack{
	int []a,top,max;
	Stack(){
	  a=new int [50];
	  top=-1;
	  max=n;
	}
	void push(int item){
	  if(top==max-1)
	    System.out.println("Stack is full.");
	  else
	    a[++top]=item;
	}
	int pop(){
	  if(top==-1)
	    System.out.println("Stack is empty.");
	  else{
	    System.out.println("The popped element: "+a[top--]);
	  }
	}
}
class MyStack{
	int top=-1;
	public static void main(String []args){
	  int n;
	  Scanner inp= new Scanner(System.in);
	  while(true){
	    System.out.println("Press\n [1]To Push\n [2]To Pop\nEnter choice: ");
	    int ch=inp.nextInt();
	    switch(ch){
	      case 1:
		System.out.println("Enter the value to push into the stack: ");
		n=inp.nextInt();
	        push(n);
	    }
	} 
	}
}
