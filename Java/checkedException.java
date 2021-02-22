import java.io.*;
class CheckedException{
	public static void main(String[]args){
		File f=new File("/home/Code/Java/Java.txt");
		FileInputStream fis=new FileInputStream(f);
		int data;
		while((data=fis.read())!=-1){
			System.out.println((char)data);
		}
	}
}
