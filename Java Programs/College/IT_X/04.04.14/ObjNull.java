import java.util.*;
class ObjNull
{
    public static void main(String []args)
    {
        int b;
        System.out.println("Enter a number: ");
        Scanner ob = new Scanner (System.in);
        ob=null;
        try
        {
            b=ob.nextInt();
            System.out.println("The number you input is: "+b);
        }
        catch (NullPointerException ob1)
        {
            System.out.println("Caught the NullPointerException!");
        }
    }
}
