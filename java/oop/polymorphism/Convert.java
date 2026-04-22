public class Convert {
  public static String convert(int a) {
    return Integer.toHexString(a);
  }

  public static String convert(double b) {
    return Double.toHexString(b);
  }

  public static String convert(String c) {
    return c.toUpperCase();
  }
}