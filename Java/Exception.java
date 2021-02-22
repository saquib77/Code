import java.util.Scanner;
class ExceptionDemo{
	public static void main(String[]args){
		int x=0,y=0;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter 2 Number :");
		x=sc.nextInt();
		y=sc.nextInt();
		int z=x/y;
		System.out.println(z);
	}
}
