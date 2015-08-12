public class PrintB
{
    public static void main(String []args)
    {
        Thread a = new PrintA();
        a.run();
        System.out.print("B");
    }
}    