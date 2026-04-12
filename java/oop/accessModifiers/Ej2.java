// 2. Crea una clase Product con el atributo privado price. Añade el método setPrice(double price) que solo permita precios mayores a 0.

public class Ej2 {
  public static void main(String[] args) {
    Product myProduct = new Product("milk", 1.99);

    System.out.printf("This product is %s and it cost %.2f$\n", myProduct.getName(), myProduct.getPrice());

    myProduct.setName("lettuce");
    myProduct.setPrice(0.99);

    System.out.printf("This product is %s and it cost %.2f$\n", myProduct.getName(), myProduct.getPrice());

    myProduct.setName("tomatoes");
    myProduct.setPrice(-3.2);

    System.out.printf("This product is %s and it cost %.2f$\n", myProduct.getName(), myProduct.getPrice());
  }
}
