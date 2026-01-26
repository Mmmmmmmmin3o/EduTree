import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc=new Scanner(System.in);

        int[] arr=new int[10];
        int[] answer=new int[2];

        for(int i=0; i<10; i++){
            arr[i]=sc.nextInt();
        }

        for(int i=0; i<10; i++){
            if(arr[i]%3==0&&arr[i]%5==0){
                answer[0]+=1;
                answer[1]+=1;
            }
            else if(arr[i]%3==0){
                answer[0]+=1;
            }
            else if(arr[i]%5==0){
                answer[1]+=1;
            }
        }

        for(int i=0; i<2; i++){
            System.out.printf("%d ", answer[i]);
        }
    }
}