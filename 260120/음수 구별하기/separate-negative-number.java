import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc=new Scanner(System.in);
        int N=sc.nextInt();
        
        System.out.println(N);

        if(N<0){
            System.out.println("minus");
        }
        // else if(N>0){
        //     System.out.println("Plus");
        // }
        // else{
        //     System.out.println("Zero");
        // }
    }
}