import java.util.*;
class Shape{
	int s1,s2,s3;
	Shape(int a, int b, int c){
	  s1=a;
	  s2=b;
	  s3=c;
	}
	Shape(int a, int b){
	  s1=a;
	  s2=b;
	  s3=0;
	}
	Shape(int a){
	  s1=a;
	  s2=s3=0;
	}
	int Area(){
	  double area;
	  if(s1>0 && s2==0 && s3==0){
	    double pi=3.14;
	    area= pi*s1*s1;
	  }
	  if(s1>0 && s2>0 && s3==0)
	    area=s1*s3;
	  if(s1>0 && s2>0 && s3>0){
	    double s=(s1+s2+s3)/2.0;
	    area=Math.sqrt(s*(s-s1)*(s-s2)*(s-s3));
	  }
	  display(area);
	  System.out.println("The area is: "+area);
	}
}
class MyShape{
	public static void main (String []args){
	  Scanner inp=new Scanner(System.in);
	  System.out.println("Enter a value: ");
	  int a=inp.nextInt();
	  System.out.println("Enter next value: ");
	  int b=inp.nextInt();
	  System.out.println("Enter another value: ");
	  int c=inp.nextInt();
	  Shape cir= new Shape (a);
	  Shape rec= new Shape (a,b);
	  Shape tri=new Shape (a,b,c);
	}
}
