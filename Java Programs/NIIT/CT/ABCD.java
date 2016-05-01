// class A {}
// class B {}
// class C extends A {}
// class D extends A {}
//
// class InstanceOf {
//   public static void main(String[] args) {
//     A a = new A();
//     C c = new C();
//     D d = new D();
//
//     if (a instanceof A) {
//       System.out.println("a instance of A");
//     }
//
//     if (c instanceof A) {
//       System.out.println("c cast to A");
//     }
//
//     if (a instanceof C) {
//       System.out.println("a instance of C");
//     }
//   }
// }

class A {
  String display() {
    System.out.println("displaying A");
  }
}
class B extends A {
  String display() {
    System.out.println("displaying B");
  }
}

class MainAB {
  public static void main(String[] args) {
    B bb = new A();
    bb.display();
  }
}
