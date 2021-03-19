import java.io.*;
class DataFileInput{
	public static void main(String[]args){
		try{
			DataInputStream di = new DataInputStream(System.in);
			String in = di.readLine();
			File fis = new File("data.txt");
			FileOutputStream os=new FileOutputStream(fis);
			DataOutputStream dos=new DataOutputStream(os);
			dos.writeBytes(in);
			dos.close();
		}catch(Exception e){
			e.printStackTrace();
		}
	}
}
