import java.util.Scanner;
	/*
	From:
 	https://codeforces.com/problemset/problem/71/A
	*/
public class WTLW71A {

	public static void main(String[] args) {
		
		/** 
		*	I use Scanner
		*/
		Scanner sc= new Scanner(System.in);

		/* Read user input for the Integer */
	    Integer res = sc.nextInt();  
		/*
		* hacky work-a-round to know: https://stackoverflow.com/questions/13102045/scanner-is-skipping-nextline-after-using-next-or-nextfoo
		*/
		String str = null;

		for(int i = 0; i <=/*this should fix it*/res; i++){
			str = sc.nextLine();	
			if(str.length() > 10){
				System.out.print(str.charAt(0));	
				System.out.print(str.length() - 2);	
				System.out.print(str.charAt(str.length() - 1));	
			}else{
				System.out.print(str);
			}
			System.out.print("\n");
		}
		/**
		 *	Is it worth it to close a Scanner file? 
		 */
	    sc.close();
	}
}
