import java.util.Scanner;
class Scan{
	public static void main(String[]args){
		Scanner sc=new Scanner(System.in);
		String in=sc.nextLine();
		String[]a=in.split(" ");
		for(int i=0;i<a.length;i++){
			int x=Integer.parseInt(a[i]);
			System.out.println(x);
		}
	}
}
