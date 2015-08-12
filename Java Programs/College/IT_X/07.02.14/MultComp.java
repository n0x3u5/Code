import java.util.Scanner;
class Complex{
	int real,img;
	Complex(int a, int b){
	  real=a;
	  img=b;
	}
	Complex(){}
	void multiply(Complex ob1, Complex ob2){
	  real=(ob1.real*ob2.real)-(ob1.img*ob2.img);
	  img=(ob1.img*ob2.real)+(ob1.real*ob2.img);
	}
	void display(){
	  System.out.println("The product is "+real+"+i"+img+".");
	}
}
class MyComplex{
	public static void main(String []args){
	  Scanner inp=new Scanner(System.in);
	  System.out.println("For the 1st Imaginary Number:-");
	  System.out.print("Enter the value of the real part: ");
	  int a=inp.nextInt();
	  System.out.print("Enter the value of the imaginary part: ");
	  int b=inp.nextInt();
	  Complex ob1=new Complex(a,b);
/*=======================================================================*/
	  System.out.println("For the 2nd Imaginary Number:-");
          System.out.print("Enter the value of the real part: ");
          a=inp.nextInt();
          System.out.print("Enter the value of the imaginary part: ");
          b=inp.nextInt();
          Complex ob2=new Complex(a,b);
/*=======================================================================*/
	  Complex ob3=new Complex();
	  ob3.multiply(ob1,ob2);
	  ob3.display();
	}	
}
