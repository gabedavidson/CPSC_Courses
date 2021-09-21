import java.util.Scanner;

public class Examples {
  public static void main(String args[]){

    Scanner scnr = new Scanner(System.in);

    // printCharsInString("Hello world");
    // System.out.println("Input integer: ");
    // int i = scnr.nextInt();
    // int indexer = 0;
    // int sum = 0;
    //
    // while (indexer < i){
    //   sum += i - indexer;
    //   System.out.println(sum);
    //   ++indexer;
    // }

    // String s = "Hello world";
    // for (int i = 0; i < s.length(); ++i){
    //   System.out.println(s.charAt(i));
    // }

    int x = 5;
    int sum = 0;
    for (int i = 1; i <= x; ++i){
      sum += i;
      System.out.println(sum);
    }

  }

  // public static void printCharsInString(String s){
  //   int indexer = 0;
  //
  //   while (indexer < s.length()){
  //     System.out.println(s.charAt(indexer));
  //     ++indexer;
  //   }
  // }
  //
  // public static void doGradeSwitch(){
  //   System.out.print("What is your grade letter?: ");
  //   char letterGrade = scnr.next().toUpperCase().charAt(0);
  //
  //   switch (letterGrade){
  //     case 'A':
  //       System.out.println("Good job!");
  //       break;
  //     case 'B':
  //       System.out.println("Well done!");
  //       break;
  //     case 'C':
  //       System.out.println("Good enough");
  //       break;
  //     case 'D':
  //       System.out.println("Aight");
  //       break;
  //     case 'F':
  //       System.out.println("Nice try.");
  //       break;
  //     default:
  //       System.out.println("No idea what you just said.");
  //       break;
  //
  //   }
  // }

  // public static void getSumOfSeries(){
  //   System.out.println("Input integer: ");
  //   int i = scnr.nextInt();
  //   int indexer = 0;
  //   int sum = 0;
  //
  //   while (indexer < i){
  //     sum += i - indexer;
  //     System.out.println(sum);
  //     ++indexer;
  //   }
  // }
}
