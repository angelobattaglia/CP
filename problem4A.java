import java.util.Scanner;

public class Watermelon4A{

	public static void main(String[] args) {

	Scanner sc= new Scanner(System.in);
	System.out.println("Read user input: ");
	Integer w = sc.nextInt();  

        if(w <= 2){
                System.out.println("NO");
        }else if((w % 2) == 0){
                        System.out.println("YES"); 
        }else if((w % 2) !=  0){
                        System.out.println("NO"); 
        }
        sc.close();
	}
}