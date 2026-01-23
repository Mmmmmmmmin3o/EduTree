import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc=new Scanner(System.in);
        char sex=sc.next().charAt(0);
        int age=sc.nextInt();

        if(sex=='1'){
            if(age>18)  System.out.println("WOMAN");
            else    System.out.println("GIRL");
        }
        else if(sex=='0'){
            if(age>18)  System.out.println("MAN");
            else System.out.println("BOY");
        }
    }
}