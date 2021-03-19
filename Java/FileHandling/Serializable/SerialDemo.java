import java.io.*;
class SerialDemo{
	public static void main(String[]args){
		MyClass m = new MyClass(20);
		try{
			FileOutputStream fos = new FileOutputStream("abc.dat");
			ObjectOutputStream os = new ObjectOutputStream(fos);
			os.writeObject(m);
			FileInputStream fis = new FileInputStream("abc.dat");
			ObjectInputStream is = new ObjectInputStream(fis);
			MyClass m1 = (MyClass) is.readObject();
			System.out.println(m1.toString());
			System.out.println(m==m1);
		}catch(Exception e){
			e.printStackTrace();
		}
	}
}
