import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        // a가 b보다 크면 두 수의 곱을 아니라면 두 수의 나눗셈을 반환
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        
        if(a>b){
            System.out.println(a*b);
        }
        else{
            System.out.println(b/a);
        }

    }
}