import java.util.Scanner;
class ExceptionDemo1{
	public static void main(String[]args){
		int x=0,y=0,z=0;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter 2 Number :");
		String ip=sc.nextLine();
		String[]ar=ip.split(" ");
		x=Integer.parseInt(ar[0]);
		y=Integer.parseInt(ar[1]);
		try{
			z=x/y;
			System.out.println(z);
		}catch(ArithmeticException ae){
			System.out.println("Second Value Could not be zero :");
			y=sc.nextInt();
			z=x/y;
		}
		System.out.println(z);
	}
}
