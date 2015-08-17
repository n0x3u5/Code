import java.util.Scanner;
import java.io.IOException;
import java.util.Arrays;
import java.util.List;
import java.util.ArrayList;
import java.util.Collections;

public class RevWords {
    public static void main(String[] args) throws IOException {
        Scanner input = new Scanner(System.in);
        int n = Integer.parseInt(input.nextLine());
        for(int i = 1; i <= n; i++) {
            String s = input.nextLine();
            String[] sArray = s.split(" ");
            ArrayList<String> sList = new ArrayList<String>(Arrays.asList(sArray));
            Collections.reverse(sList);
            System.out.print("Case #" + i + ": ");
            for(String j : sList) {
                System.out.print(j + " ");
            }
            System.out.println();
        }
    }
}
