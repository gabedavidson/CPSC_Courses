import java.net.InetAddress;

public class HelloWorld{
  public static void main(String[] args){
    System.out.println("Hello world!");
    System.out.println("I'm a Java program running on a computer.");
    System.out.println("Here are the details:");
    try{
      InetAddress inetAddress = InetAddress.getLocalHost();
      System.out.println("IP Address:- " + inetAddress.getHostAddress());
      System.out.println("Host name:- " + inetAddress.getHostName());
    } catch (Exception e){
      System.err.println("No details found!");
    }
  }
}
