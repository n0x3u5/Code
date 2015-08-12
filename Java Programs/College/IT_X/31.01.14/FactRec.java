class FactRec{
  public static void main (String []args){
	int n=Integer.parseInt(args[0]);
	FactRec ob = new FactRec();
	int f=ob.fact(n);
	System.out.println("The factorial of "+n+" is "+f+".");
  }
  int fact(int n){
  	if(n>1)
		return(n*fact(n-1));
	else
		return(1);
 }
}
