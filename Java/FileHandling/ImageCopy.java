import java.io.*;
import java.util.*;
class ImageCopy{
	public static void main(String[]args){
		String imgFile = "myimg.jpg";
		File f1 = new File(imgFile);
		File f2 = new File("myimgcpy.jpg");
		try{
			FileInputStream fis = new FileInputStream(f1);
			BufferedInputStream bis = new BufferedInputStream(fis,1024);
			FileOutputStream fos = new FileOutputStream(f2);
			BufferedOutputStream bos = new BufferedOutputStream(fos,1024);
			int  b,count=0;
			while((b=bis.read())!=-1){
				bos.write(b);
				count=count+1;
			}
			System.out.println("Size of "+imgFile+" is "+count/1024 +"Kb.");
			bos.close();
		}catch(Exception e){
			e.printStackTrace();
		}
	}
}
