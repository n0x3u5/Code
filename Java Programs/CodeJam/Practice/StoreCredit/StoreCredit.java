import java.io.Console;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

class StoreCredit {

    private int n;
    private int c;
    private int i;
    ArrayList<Integer> p;
    ArrayList<Integer> q;

    StoreCredit() {
        n = 0;
        c = 0;
        i = 0;
    }

    private void getInput() {
        Scanner input = new Scanner(System.in);

        n = input.nextInt();

        for(int j = 1;j <= n;j++) {

            c = input.nextInt();
            i = input.nextInt();

            p = new ArrayList<Integer>();
            q = new ArrayList<Integer>();

            for(int k = 0;k < i;k++) {
                int inp = input.nextInt();
                p.add(inp);
                q.add(inp);
            }

            System.out.print("Case #" + j + ": ");
            findIndices();

        }

    }

    private int binarySearch(int key, ArrayList<Integer> arr) {
        int first, last, mid;
        first = 0;
        last = arr.size() - 1;
        mid = (first + last) / 2;
        while(first <= last) {
            if(arr.get(mid) < key) {
                first = mid + 1;
            } else if(arr.get(mid) > key) {
                last = mid - 1;
            } else {
                return mid;
            }
            mid = (first + last) / 2;
        }
        if(first > last) {
            return -1;
        }
        return -1;
    }

    private int findIndices() {
        int pos, j_comp, counter = 0;
        ArrayList<Integer> soln = new ArrayList<Integer>();
        Collections.sort(p);
        for(int j : p) {
            j_comp = c - j;
            pos = binarySearch(j_comp, p);
            if(pos != -1) {
                System.out.println("j: " + j + " p.get(pos): " + p.get(pos) + " tot: " + (j + p.get(pos)));
                int i = 0;
                for(int k : q) {
                    if(k == p.get(pos)) {
                        soln.add(i+1);
                    }
                    i++;
                }
            }
        }
        Collections.sort(soln);
        int sum = 0;
        for (int j : soln) {
            System.out.print(j + " ");
            sum = sum + q.get(j-1);
        }
        System.out.println();
        System.out.println("Sum: " + sum);
        return 0;
    }

    public static void main(String[] args) throws IOException {

        StoreCredit credit = new StoreCredit();

        credit.getInput();

    }
}
