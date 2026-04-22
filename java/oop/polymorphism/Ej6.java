// 6. Crea una clase Notification con método send(), y subclases EmailNotification, SMSNotification. 
// Luego crea una función sendNotification(Notification n) que reciba cualquier tipo y lo ejecute.

public class Ej6 {
  public static void main(String[] args) {
    Notification myNotification = new Notification();
    EmailNotification myEmailNotification = new EmailNotification();
    SMSNotification mySMSNotification = new SMSNotification();

    sendNotification(myNotification);
    sendNotification(myEmailNotification);
    sendNotification(mySMSNotification);
  }

  public static void sendNotification(Notification n) {
    n.send();
  }
}