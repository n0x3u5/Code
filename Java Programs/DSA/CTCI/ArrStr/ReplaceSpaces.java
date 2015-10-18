public class ReplaceSpaces {

    void charArrReplacer(char[] charArray) {
        int spaces = 0;

        for (char c : charArray) {
            if(c == ' ') {
                spaces++;
            }
        }
        int newLength = charArray.length + (spaces * 2);
        charArray[newLength] = '\0';
        for (char c : charArray) {
            System.out.println(c);
        }
    }

    public static void main(String[] args) {
        String str = "Mr. John Smith      ";
        // String replacedStr = str.trim().replace(" ", "%20");
        // System.out.println(replacedStr);

        ReplaceSpaces rs = new ReplaceSpaces();

        rs.charArrReplacer(str.toCharArray());
    }
}
