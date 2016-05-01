package nox.niit.prime;

public class PrimeNumbers {
	public static void main(String[] args) {
		int c = 0;
        for(int i = 2; i <= 20; i++) {
            for (int j = 1; j <= i; j++) {
                if(i % j == 0) {
                    c++;
                }
            }
            if(c == 2) {
                System.out.println(i);
            }
            c = 0;
        }
	}
}
