import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc=new Scanner(System.in);

        String phoneNum=sc.next();

        String[] numArr=phoneNum.split("-");

        String first=numArr[0];
        String second=numArr[1];
        String third=numArr[2];

        System.out.println(first+"-"+third+"-"+second);
    }
}