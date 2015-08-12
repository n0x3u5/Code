import java.util.Scanner;
class Case
{
    String Upper(String s)
    {
        String result="";
        for(int i=0;i<s.length();i++)
        {
            char current = s.charAt(i);
            if(current>='a' && current<='z')
            {
                char currentUpper = (char)(current-32);
                result=result+currentUpper;
            }
            else
                result=result+current;
        }
        return result;
    }
    String Lower(String s)
    {
        String result="";
        for(int i=0;i<s.length();i++)
        {
            char current = s.charAt(i);
            if(current>='A' && current<='Z')
            {
                char currentLower = (char)(current+32);
                result=result+currentLower;
            }
            else
                result=result+current;
        }
        return result;
    }
    String Toggle(String s)
    {
        String result="";
        for(int i=0;i<s.length();i++)
        {
            char current = s.charAt(i);
            if(current>='A' && current<='Z')
            {
                char currentLower = (char)(current+32);
                result=result+currentLower;
            }
            else if(current>='a' && current<='z')
            {
                char currentUpper = (char)(current-32);
                result=result+currentUpper;
            }
            else
                result=result+current;
        }
        return result;
    }
    String Title(String s)
    {
        String result="";
        if(s.length()==0)
            return result;
        char first = s.charAt(0);
        if(first>='a' && first<='z')
        {
            char firstUpper = (char)(first-32);
            result=result+firstUpper;
        }
        else
            result = result+first;
        for(int i=1;i<s.length();i++)
        {
            char current = s.charAt(i);
            char prev = s.charAt(i-1);
            if(prev == ' ')
            {
                if(current>='a' && current<='z')
                {
                    char currentUpper = (char)(current-32);
                    result=result+currentUpper;
                }
                else
                    result = result+current;
            }
            else
                result=result+current;
        }
        return result;
    }
    String Sentence(String s)
    {
        String result="";
        if(s.length()==0)
            return result;
        char first = s.charAt(0);
        if(first>='a' && first<='z')
        {
            char firstUpper = (char)(first-32);
            result=result+firstUpper;
        }
        else
            result = result+first;
        boolean termEnc=false;
        char[] termCh={'.','?','!'};
        for(int i=1;i<s.length();i++)
        {
            char current = s.charAt(i);
            if(termEnc)
            {
                if(current==' ')
                    result=result+current;
                else
                {
                    if(current>='a' && current<='z')
                    {
                        char currentUpper = (char)(current-32);
                        result=result+currentUpper;
                    }
                    else
                        result = result+current;
                    termEnc=false;
                }
            }
            else
                result=result+current;
            for(int j=0;j<termCh.length;j++)
            {
                if(current==termCh[j])
                {
                    termEnc=true;
                    break;
                }
            }
        }
        return result;
    }
}
class MyCase
{
    public static void main (String []args)
    {
        String result;
        Scanner inp=new Scanner(System.in);
        System.out.println("Enter a string: ");
        String s=inp.nextLine();
        Case ob = new Case();
        System.out.println("The string in Upper Case is: "+ ob.Upper(s));
        System.out.println("The string in Lower Case is: "+ ob.Lower(s));
        System.out.println("The string in Toggle Case is: "+ ob.Toggle(s));
        System.out.println("The string in Title Case is: "+ ob.Title(s));
        System.out.println("The string in Sentence Case is: "+ ob.Sentence(s));
    }
}