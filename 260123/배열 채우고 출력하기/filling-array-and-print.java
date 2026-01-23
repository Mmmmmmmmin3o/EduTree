import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc=new Scanner(System.in);

        String input=sc.nextLine();
        char[] arr=input.toCharArray();

        int size=arr.length;

        for(int i=size-1; i>-1; i--){
            if(arr[i]!=' ') System.out.printf("%c",arr[i]);
        }
    }
}