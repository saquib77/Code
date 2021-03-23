import java.util.*;
import java.io.*;
class PropertyDemo{
	public static void main(String[]args){
		Properties prop = new Properties();
		String home = System.getProperty("user.home");
		String pth = "/Code/Java/Collection/";
		File f = new File(home+pth+"abc.properties");
		try{
			FileInputStream fis = new FileInputStream(f);
			prop.load(fis);
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
