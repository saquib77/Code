import java.io.*;
import java.util.*;
class ImageCopy{
	public static void main(String[]args){
		File f1 = new File("myimg.jpg");
		File f2 = new File("myimgcpy.jpg");
		try{
			FileInputStream fis = new FileInputStream(f1);
			FileOutputStream fos = new FileOutputStream(f2);
			int  b;
			while((b=fis.read())!=-1){
				fos.write(b);
			}
			fos.close();
		}catch(Exception e){
			e.printStackTrace();
		}
	}
}
