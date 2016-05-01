class One {
  public void show() {
    System.out.println("One");
  }
}

class Two extends One {
  public void show() {
    System.out.println("Two");
  }
}

class Three extends Two {
  public void show() {
    System.out.println("Three");
  }
}

class Four extends Two {
  public void show() {
    System.out.println("Four");
  }
  public static void main(String[] args) {
    Two ob = new Two();
    ob.show();
  }
}
