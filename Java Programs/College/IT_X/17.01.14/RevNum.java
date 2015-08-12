class RevCmd{
  public static void main (String []args){
    int n = Integer.parseInt(args[0]);
    int rev=0, temp=n;
    while(n!=0){
      int rem=n%10;
      rev=rev*10+rem;
      n=n/10;
    }
    System.out.println("The reverse of the number "+temp+" is "+rev+".");
  }
}
