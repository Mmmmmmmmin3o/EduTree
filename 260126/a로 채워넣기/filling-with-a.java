import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc=new Scanner(System.in);

        String arr = sc.next();
        char[] arr_to_char = arr.toCharArray();

        int len=arr_to_char.length;

        for(int i=0; i<len; i++){
            if(i==1||i==len-2){
                arr_to_char[i]='a';
            }
            System.out.printf("%c",arr_to_char[i]);
        }
    }
}