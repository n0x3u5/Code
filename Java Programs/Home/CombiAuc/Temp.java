/*class Combinations {
    private StringBuilder output = new StringBuilder();
    private final String inputstring;
    public Combinations( final String str ){
        inputstring = str;
        System.out.println("The input string  is  : " + inputstring);
    }
    
    
    public static void main (String args[])
    {
        Combinations combobj= new Combinations("abc");
        System.out.println("");
        System.out.println("");
        System.out.println("All possible combinations are :  ");
        System.out.println("");
        System.out.println("");
        combobj.combine();
    }
    
    public void combine() { combine( 0 ); }
    private void combine(int start ){
        for( int i = start; i < inputstring.length(); ++i ){
            output.append( inputstring.charAt(i) );
            System.out.println( output );
            if ( i < inputstring.length() )
            combine( i + 1);
            output.setLength( output.length() - 1 );
        }
    }
}*/

import java.io.*;

class FileDemo{
        public static void main(String args[])
        {
            int c=1,i=0,j=0;
            String arr1[] = new String[6];
            String arr2[] = new String[6];
            int arr3[] = new int[6];
            try
            {
                FileInputStream fstream = new FileInputStream("Input.txt");
                DataInputStream in = new DataInputStream(fstream);
                BufferedReader br = new BufferedReader( new InputStreamReader(in));
                String line="";
                while((line = br.readLine()) != null)
                {
                    if(c%2!=0)
                    {
                        arr1[i] = line;
                        i++;
                    }
                    else
                    {
                        arr2[j] = line;
                        j++;
                    }
                    c++;
                }
                in.close();
            }
            catch(Exception e)
            {
                System.out.println("Error while reading the file:" + e.getMessage());
            }
            for(i=0;i<arr1.length;i++)
            {
                System.out.println(arr1[i]);
                //System.out.println(arr2[i]);

            }
            for(i=0;i<arr1.length;i++)
                if(arr1[i].contains(arr1[0])==true)
                {
                    System.out.println("Found at "+i);
                    arr3[i]=Integer.parseInt(arr2[0]);
                }
            for(int x:arr3)
                System.out.println(x);
        }

}