import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc=new Scanner(System.in);

        String s= sc.next();

        String[] strArr=s.split(":");
        
        int intValue1=Integer.parseInt(strArr[0]);
        int intValue2=Integer.parseInt(strArr[1]);

        System.out.println(intValue1+1+":"+intValue2);
    }
}