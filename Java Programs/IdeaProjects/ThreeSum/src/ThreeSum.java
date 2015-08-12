/**
 * Problem Statement: Given n distinct inputs, how many triples sum to exactly zero.
 *
 * Created by Nakshatra on 14-06-14.
 */
public class ThreeSum {

    /**
     * @param a Input array containing the elements to be tested
     * @return Returns the number of triples that sum to zero
     */

    public static int count(int[] a) {
        int n = a.length;
        int count = 0;
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
                for (int k = j + 1; k < n; k++)
                    if(a[i] + a[j] + a[k] == 0)
                        count++;
        return count;

    }

    /**
     * @param args takes a String as command line argument
     */

    public static void main(String[] args) {

        int[] a = In.readInts(args[0]);
        Stopwatch stopwatch = new Stopwatch();
        StdOut.println(count(a));
        double time = stopwatch.elapsedTime();
        System.out.println("Elapsed time: "+time);

    }
}