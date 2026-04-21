// 9. Crea una clase Vehicle y tres subclases: Car, Bike y Truck, cada una con un método describe() sobrescrito.

public class Ej9 {
  public static void main(String[] args) {
    VehicleEj9 myVehicle = new VehicleEj9();
    CarEj9 myCar = new CarEj9();
    BikeEj9 myBike = new BikeEj9();
    TruckEj9 myTruck = new TruckEj9();

    myVehicle.describe();
    myCar.describe();
    myBike.describe();
    myTruck.describe();
  }
}
