class Sort{
  static int n[];
  static int size;  
  public static void main (String []args){
	int i;
	size=args.length;
	n=new int [size];
	for(i=0;i<size;i++)
		n[i]=Integer.parseInt(args[i]);
	Sort ob=new Sort();
	ob.bubSort();
	System.out.println("The sorted array:-");
	for(i=0;i<size;i++)
		System.out.println(+n[i]);
  }
  void bubSort(){
	int i,j,temp;
  	for(i=0;i<size;i++)
	  for(j=i+1;j<size;j++)
	    if(n[i]>n[j]){
	      temp=n[i];
	      n[i]=n[j];
	      n[j]=temp;
	    }
  }
}
