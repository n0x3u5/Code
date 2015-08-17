import java.io.BufferedReader;
import java.io.DataInputStream;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;


class StoreCredit {

    public static Object[] getItems(int items[], int total) {
        int index = 0;
        ArrayList<Integer> selectedItems = new ArrayList<Integer>();

        for (int i = 0; i<items.length; i++) {
            for (int j = i+1; j < items.length; j++) {
                if (items[i] + items[j] == total) {
                    selectedItems.add(index, i);
                    selectedItems.add(index+1,j);
                }
            }
        }

        return selectedItems.toArray();
    }
    public static int[] convertStringToInt(String array[]) {
        int intArray[] = new int[array.length];

        for (int i = 0; i < array.length; i++) {
            intArray[i] = Integer.parseInt(array[i]);
        }

        return intArray;
    }
    public static void main(String[] args) throws IOException {

        FileInputStream fis = new FileInputStream("A-sample.in");
        DataInputStream in = new DataInputStream(fis);
        BufferedReader br = new BufferedReader(new InputStreamReader(in));

        String N = br.readLine();

        String line = null;
        int caseNo = 1;

        while((line = br.readLine()) != null ) {
            int credits = Integer.parseInt(line);
            int totalItems = Integer.parseInt(br.readLine());
            String strItems[] = br.readLine().split(" ");

            int Items[] = convertStringToInt(strItems);
            Object selectedItems[] = getItems(Items, credits);

            for(Object item : selectedItems) {
                System.out.println(item);
            }

            System.out.println("Case #"+caseNo+":"+printArray(selectedItems));
            caseNo++;
        }
    }
    public static String printArray(Object[] selectedItems) {
        String result = "";

        for (int i=0; i<selectedItems.length; i++)
            result = result +" "+((int)selectedItems[i]+1);

        return result;
    }

}
