class Combinations 
{

    String output="";
    String inputstring;
    static String[]arr = new String[7];
    static int c = 0;

    Combinations( final String str )
    {
        inputstring = str;
    }
    
    void combine() 
    { 
        combine( 0 ); 
    }

    void combine(int start )
    {
        for( int i = start; i < inputstring.length(); i++ )
        {
            output=output+inputstring.charAt(i);
            arr[c]=output;
            c++;
            if ( i < inputstring.length() )
                combine( i + 1);
            output=output.substring(0,output.length()-1);
        }
    }

    public static void main (String args[])
    {
        Combinations combobj= new Combinations("abc");
        combobj.combine();
        for(int i=0;i<arr.length;i++)
            System.out.println(arr[i]);
    }

}