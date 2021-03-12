import java.io.*;
import java.util.*;
class fileDemo{
	public static void main(String[]args){
		String H = System.getProperty("user.home");
		String sep = File.separator;
		File f = new File(H+sep+"fileDemo"+sep+"fileText.txt");
		Scanner sc = new Scanner(System.in);
		try{
			char data;
			FileOutputStream fos = new FileOutputStream(f);
			while((data=sc.next().charAt(0))!='#') {
				fos.write(data);
			}
			fos.close();
		}catch(IOException ioe){
			ioe.printStackTrace();
		}
	}
}
