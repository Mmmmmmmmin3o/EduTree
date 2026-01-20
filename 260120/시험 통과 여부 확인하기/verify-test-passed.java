import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        // 80이상 pass, 80이하 x more score 출력
        Scanner sc=new Scanner(System.in);
        int x=sc.nextInt();

        if(x>=80){
            System.out.println("pass");
        }
        else{
            System.out.println(80-x+" more score");
        }
    }
}