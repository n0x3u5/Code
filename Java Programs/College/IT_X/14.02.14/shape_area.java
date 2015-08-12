import java.util.*;
class MyShape
{
	public static void main(String args[])
	{
		Scanner inp= new Scanner(System.in);		
	while(true)	
	{	
			System.out.println("enter 1 to calculate the area of cicle,2 for triangle,3 for rectangle 4 to 					   exit :");	
		int n=inp.nextInt();
		switch(n)
		{
			case 1: {	 System.out.println("enter the radius:");
					 int r=inp.nextInt();
					 if(r<0)
					 	System.out.println("radius is invalid");
					else
					{
						Shape circle=new Shape(r);
						circle.ac();
						circle.display();		
					}break; 
			        }
			case 2:{
					
					System.out.println("enter three sides");
					int s1=inp.nextInt();
					int s2=inp.nextInt();
					int s3=inp.nextInt();
					if((s1<0) || (s2<0) || (s3<0))
					{
						System.out.println("sides are invalid");
					}
					else if((s1+s2)>s3 &&(s1+s3)>s2 && (s3+s2)>s1)
					{
						Shape triangle=new Shape(s1,s2,s3);
						triangle.ac();
						triangle.display();	
					}
					else
						{System.out.println("sides are invalid");} break;
				}
			case 3:{	
					System.out.println("enter two sides");
					int a=inp.nextInt();
					int b=inp.nextInt();
					if((a<0) || (b<0))
					{
						System.out.println("sides are invalid");
					}
					else 
					{
						Shape rectangle=new Shape(a,b);
						rectangle.ac();
						rectangle.display();	
					}break;
				}
			case 4: System.exit(0);
												
		}
	}						
			
	}
}
 
class Shape
{	
	int s1,s2,s3;
	double s,res,inter;
		Shape(int r)
		{
			s1=r;
		}
		Shape(int s1,int s2,int s3)
		{
			this.s1=s1;			
			this.s2=s2;
			this.s3=s3;
		}
		Shape(int a,int b)
		{
			s1=a;
			s2=b;
		}
		void areaCalc()
		{
			if(s1>0 && s2==0&& s3==0)
			res=(3.14*s1*s1); 
			else if(s1>0 && s2>0&& s3>0)
			{
				s=(s1+s2+s3)/2.0;
				inter=s*(s-s1)*(s-s2)*(s-s3);
				res=Math.sqrt(inter);	
				
			}
			else
			{
				res=s1*s2;
			}						
		}
		void display()
		{	
			System.out.println(res);
		}

}
