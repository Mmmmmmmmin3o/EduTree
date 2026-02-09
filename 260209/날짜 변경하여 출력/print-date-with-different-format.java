import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc=new Scanner(System.in);

        String exp=sc.next();

        String[] exp_arr=exp.split("\\.");

        int year=Integer.parseInt(exp_arr[0]);
        int month=Integer.parseInt(exp_arr[1]);
        int day=Integer.parseInt(exp_arr[2]);

        
        System.out.println(month+"-"+day+"-"+year);
    }
}