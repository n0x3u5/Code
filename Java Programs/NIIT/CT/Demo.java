public class Demo {
  public float average(int...nums) {
    int sum = 0;
    for (int x : nums) {
      sum += x;
    }
    return ((float)sum/nums.length);
  }
  public static void main(String[] args) {
    Demo d = new Demo();
    float avg = d.average(2, 5, 5);
    System.out.println(avg);
  }
}
