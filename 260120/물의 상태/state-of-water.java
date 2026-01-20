import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc=new Scanner(System.in);
        int water_temp=sc.nextInt();

        if(water_temp>=100){
            System.out.println("vapor");
        }
        else if(water_temp<0){
            System.out.println("ice");
        }
        else{
            System.out.println("water");
        }
    }
}