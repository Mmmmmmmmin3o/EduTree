import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc=new Scanner(System.in);

        String RRN=sc.next();

        String[] RRN_arr=RRN.split("-");

        for(int i=0; i<2; i++){
            System.out.print(RRN_arr[i]);
        }
    }
}