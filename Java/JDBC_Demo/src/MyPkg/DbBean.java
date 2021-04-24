package MyPkg;
import java.sql.*;
public class DbBean {
	public Statement createConnection(String url, String uname, String pass ) throws ClassNotFoundException,SQLException {
		Class.forName("com.mysql.cj.jdbc.Driver");
		Connection con = DriverManager.getConnection(url, uname, pass);
		return con.createStatement();
	}
	public boolean insertData(Statement st,String qry) throws SQLException{
		return st.execute(qry);
	}
	public ResultSet selectData(Statement st,String qry) throws SQLException{
		return st.executeQuery(qry);
	}
}
