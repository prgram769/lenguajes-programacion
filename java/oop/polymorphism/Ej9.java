// 9. Crea una clase Product con el método getPrice(). Luego, Book y Electronic deben sobrescribirlo con su propia lógica de descuento. 
// Recorre una lista de Product e imprime el precio final de cada uno.

import java.util.ArrayList;

public class Ej9 {
  public static void main(String[] args) {
    ArrayList<Product> myProductsList = new ArrayList<>();

    Product myProduct = new Product(23);
    Book myBook = new Book(23);
    Electronic myElectronic = new Electronic(23);

    myProductsList.add(myProduct);
    myProductsList.add(myBook);
    myProductsList.add(myElectronic);
    
    for (Product product : myProductsList) {
      System.out.println(product.getPrice());
    }
  } 
}