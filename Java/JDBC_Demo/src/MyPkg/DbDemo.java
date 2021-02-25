package MyPkg;
import java.sql.*;
public class DbDemo {

	public static void main(String[] args) {
		try {
			Class.forName("com.mysql.cj.jdbc.Driver");
			String url="jdbc:mysql://localhost:3306/test";
			String uname="root";
			String pass="Saquib@77";
			DbBean db=new DbBean();
			Statement st = db.createConnection(url,uname,pass);
			String qry= "select id,name from jdbc_demo";
			ResultSet rs = db.selectData(st,qry);
			while(rs.next()) {
				System.out.println(rs.getString(1)+" "+rs.getString(2));
			}
		}catch(ClassNotFoundException cnf){
			cnf.printStackTrace();
		}catch(SQLException cnf) {
			cnf.printStackTrace();
		}
		
	}
}
