import java.util.Scanner;
class Gpseries{
  public static void main (String []args){
    Scanner inp = new Scanner(System.in);
    System.out.print("Enter the value of n: ");
    int n = inp.nextInt();
    System.out.print("Enter the value of x: ");
    int x = inp.nextInt();
    double sum = 1;
    for( int i=1;i<=n-1;i++ ){
      sum = sum + Math.pow(x,i);
    }
    System.out.println("The sum of the series is "+sum+".");
  }
}
