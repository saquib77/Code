import java.util.*;
import java.io.*;
class PropertyDemo1{
	public static void main(String[]args){
		Properties prop = new Properties();
		String home = System.getProperty("user.home");
		String pth = "/Code/Java/Collection/";
		File f = new File(home+pth+"abc1.properties");
		prop.setProperty("Name","Saquib");
		prop.setProperty("City","Lucknow");
		prop.setProperty("Age","25");
		prop.setProperty("Branch","CSE");
		try{
			FileOutputStream fos = new FileOutputStream(f);
			prop.store(fos,"Saquib Ahmed Detail");
			fos.close();
			Enumeration<String> e = (Enumeration<String>) prop.propertyNames();
    			while(e.hasMoreElements()) {
      				String key = e.nextElement();
      				String value = prop.getProperty(key);
      				System.out.println(key + " : " + value);
			}
		}catch(Exception e){
			e.printStackTrace();
		}
	}
}
