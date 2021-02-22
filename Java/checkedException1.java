import java.io.*;
class CheckedException{
	public static void main(String[]args){
		File f=new File("/home/saquib/Code/Java/Java.txt");
		try{
			FileInputStream fis=new FileInputStream(f);
			int data;
			while((data=fis.read())!=-1){
				System.out.print((char)data);
			}
		}catch(Throwable t){
			System.out.println("File Not Foune || IO Error!");
		}
	}
}
