public class PostPre {
  int num;
  PostPre(int num) {
    this.num = num;
  }
  public static void main(String[] args) {
    PostPre postPre = new PostPre(5);
    System.out.println("Original value: " + postPre.num);
    System.out.println("Postfix value: " + postPre.num++);
    System.out.println("Prefix value: " + ++postPre.num);
  }
}
