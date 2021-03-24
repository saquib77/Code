import java.util.*;
import java.io.*;
class miniProjDemo{
	public static void main(String[]args){
		Properties prop = new Properties();
		String home = System.getProperty("user.home");
		String pth = "/Code/Java/Collection/";
		File f = new File(home+pth+"employee.properties");
		//HashMap<String,Integer> hm = new HashMap<String,Integer>();
		ArrayList<String> employeeName = new ArrayList<String>();
		Scanner sc = new Scanner(System.in);
		try{
			FileInputStream fis = new FileInputStream(f);
                        prop.load(fis);
			System.out.print("Enter the City Name To Get Member : ");
			String cty = sc.nextLine();
			Enumeration<String> e = (Enumeration<String>) prop.propertyNames();
                        while(e.hasMoreElements()) {
                                String name = e.nextElement();
                                String  filePth = prop.getProperty(name);
				File f1 = new File(filePth+"/"+name+".properties");
				FileInputStream fis1 = new FileInputStream(f1);
				prop.load(fis1);
				String EmpCty = prop.getProperty("City");
				if(cty.equals(EmpCty)){
					String empName = prop.getProperty("Name");
					employeeName.add(empName);
				}
                        }

			for(String i : employeeName){
				System.out.println(i);
			}

		}catch(Exception e){
			e.printStackTrace();
		}
	}
}
