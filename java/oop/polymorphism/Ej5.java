// 5. Crea una clase Vehicle con un método start(). Luego crea Car, Bike y Truck que sobrescriban ese método. 
// Recorre una lista ArrayList<Vehicle> para llamar a start() en cada uno.    

public class Ej5 {
  public static void main(String[] args) {
    Vehicle myVehicle = new Vehicle();
    Car myCar =  new Car();
    Bike myBike = new Bike();
    Truck myTruck = new Truck();

    myVehicle.start();
    myCar.start();
    myBike.start();
    myTruck.start();
  }
}
