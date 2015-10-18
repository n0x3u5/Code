import java.util.Arrays;

public class PermutationChecker {

    String sortStr(String str) {
        char[] charArr = str.toCharArray();
        Arrays.sort(charArr);
        String sortedStr = new String(charArr);
        return sortedStr;
    }

    boolean isPermutation(String str1, String str2) {
        String sortedStr1 = sortStr(str1);
        String sortedStr2 = sortStr(str2);

        if(sortedStr1.equals(sortedStr2)) {
            return true;
        } else {
            return false;
        }

    }

    public static void main(String[] args) {
        PermutationChecker pc = new PermutationChecker();

        if(pc.isPermutation("aAbaa", "baAaa")) {
            System.out.println("Permutation.");
        } else {
            System.out.println("Not permutation.");
        }
    }
}
