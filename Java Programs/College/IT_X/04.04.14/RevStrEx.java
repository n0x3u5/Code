import java.util.*;
class StringRev
{
    public static void main (String []args)
    {
        String rev, inp;
        int lb, ub;
        rev = inp = "";

        //Program only executes if number of Cmd Line Arguments is exactly 3.
        if(args.length!=3)
        {
            try
            {
                throw new LengthException();
            }
            catch (LengthException lenex)
            {
                System.out.println(lenex);
                System.exit(0);
            }
        }

        //Program only executes if the user inputs the cmd line arguments in the order String Integer Integer
        try
        {
            inp = args[0];
            lb = Integer.parseInt(args[1]);
            ub = Integer.parseInt(args[2]);

            //Checking if the bounds are correct
            if(lb<0||lb>ub||lb>inp.length()||ub<0||ub<lb||ub>inp.length())
            try
            {
                throw new BoundException();
            }
            catch(BoundException bndex)
            {
                System.out.println(bndex);
                System.exit(0);
            }
        }
        catch(NumberFormatException numex)
        {
            System.out.println("The order of your input is incorrect. Please input a string followed by 2 integers separated by spaces.");
            System.exit(0);
        }

        //Reversing the input string       
        int len = inp.length();
        for (int i=len-2;i>0;i--)
            rev=rev+inp.charAt(i);
        System.out.println("The output: "+rev);
    }
}

class LengthException extends Exception
{
    public String toString()
    {
        return ("Invalid number of inputs.");
    }
}

class BoundException extends Exception
{
    public String toString()
    {
        return ("Ensure that your lower and  upper bounds are less than the length of the string. Also note that the lower bound comes first and is always less than the upper bound. ");
    }
}
