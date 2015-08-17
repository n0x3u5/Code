import java.io.IOException;
import java.util.Arrays;
import java.util.ArrayList;
import java.util.Scanner;
import java.util.HashMap;
import java.util.Map;

public class T9Spell {

    public static boolean belongsToSameKey(char letter, char lastLetter) {
        ArrayList<String> Key2 =
        new ArrayList<String>(Arrays.asList("A", "B", "C"));
        ArrayList<String> Key3 =
        new ArrayList<String>(Arrays.asList("D", "E", "F"));
        ArrayList<String> Key4 =
        new ArrayList<String>(Arrays.asList("G", "H", "I"));
        ArrayList<String> Key5 =
        new ArrayList<String>(Arrays.asList("J", "K", "L"));
        ArrayList<String> Key6 =
        new ArrayList<String>(Arrays.asList("M", "N", "O"));
        ArrayList<String> Key7 =
        new ArrayList<String>(Arrays.asList("P", "Q", "R", "S"));
        ArrayList<String> Key8 =
        new ArrayList<String>(Arrays.asList("T", "U", "V"));
        ArrayList<String> Key9 =
        new ArrayList<String>(Arrays.asList("W", "X", "Y", "Z"));
        ArrayList<String> Key0 =
        new ArrayList<String>(Arrays.asList(" "));

        String sLetter = String.valueOf(letter);
        String sLastLetter = String.valueOf(lastLetter);
        if(sLetter.equals(sLastLetter)) {
            return true;
        } else if (Key2.contains(sLetter) && Key2.contains(sLastLetter)) {
            return true;
        } else if (Key3.contains(sLetter) && Key3.contains(sLastLetter)) {
            return true;
        } else if (Key4.contains(sLetter) && Key4.contains(sLastLetter)) {
            return true;
        } else if (Key5.contains(sLetter) && Key5.contains(sLastLetter)) {
            return true;
        } else if (Key6.contains(sLetter) && Key6.contains(sLastLetter)) {
            return true;
        } else if (Key7.contains(sLetter) && Key7.contains(sLastLetter)) {
            return true;
        } else if (Key8.contains(sLetter) && Key8.contains(sLastLetter)) {
            return true;
        } else if (Key9.contains(sLetter) && Key9.contains(sLastLetter)) {
            return true;
        } else if (Key0.contains(sLetter) && Key0.contains(sLastLetter)) {
            return true;
        }
        return false;
    }

    public static void main(String[] args) {
        Map<String, String> dictionary = new HashMap<String, String>();
        dictionary.put("A", "2");
        dictionary.put("B", "22");
        dictionary.put("C", "222");
        dictionary.put("D", "3");
        dictionary.put("E", "33");
        dictionary.put("F", "333");
        dictionary.put("G", "4");
        dictionary.put("H", "44");
        dictionary.put("I", "444");
        dictionary.put("J", "5");
        dictionary.put("K", "55");
        dictionary.put("L", "555");
        dictionary.put("M", "6");
        dictionary.put("N", "66");
        dictionary.put("O", "666");
        dictionary.put("P", "7");
        dictionary.put("Q", "77");
        dictionary.put("R", "777");
        dictionary.put("S", "7777");
        dictionary.put("T", "8");
        dictionary.put("U", "88");
        dictionary.put("V", "888");
        dictionary.put("W", "9");
        dictionary.put("X", "99");
        dictionary.put("Y", "999");
        dictionary.put("Z", "9999");
        dictionary.put(" ", "0");

        Scanner input = new Scanner(System.in);
        int n = Integer.parseInt(input.nextLine());

        for (int i = 1; i <= n; i++) {
            String keys = "";
            char prevLetter = '\0';
            String message = input.nextLine();
            String upperMessage = message.toUpperCase();
            for (int j = 0;j < upperMessage.length();j++) {
                char letter = upperMessage.charAt(j);
                if(belongsToSameKey(prevLetter, letter)) {
                    keys += " ";
                }
                keys += dictionary.get(String.valueOf(letter));
                prevLetter = letter;
            }
            System.out.println("Case #" + i + ": " + keys);
        }
    }
}
