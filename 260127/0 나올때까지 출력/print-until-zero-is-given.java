import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc=new Scanner(System.in);

        int input;
        int i=1;

        while(i>0){
            input=sc.nextInt();
            if(input==0){
                i=0;
            }
            else{
                System.out.println(input);
            }
        }
    }
}