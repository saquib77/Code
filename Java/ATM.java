package UserATM;
import java.sql.*;
import java.util.*;
public class AMain {
	public static void main(String[] args) throws SQLException {
			Scanner sc = new Scanner(System.in);
		try {
			Class.forName("com.mysql.cj.jdbc.Driver");
			String url="jdbc:mysql://localhost:3306/banking";
			String uname="root";
			String pass="Saquib@77";
			ATMBean ab =new ATMBean();
			Statement st = ab.createConnection(url,uname,pass);
			System.out.println("Welcome to ATM");
			System.out.print("Enter Account Number : ");
			int accNum=sc.nextInt();
			System.out.print("Enter Your Pin :");
			int pinNum=sc.nextInt();
			String qry="select pin_num,name from acc_holder where(acc_number="+accNum+")";
			ResultSet rs=st.executeQuery(qry);
			while(rs.next()) {
				if(pinNum==rs.getInt(1)) {
					System.out.println("Welcome Mr|Mrs "+rs.getString(2));
					System.out.print("Enter Ammount :");
					int amount=sc.nextInt();
					String bal="select balance from acc_detail where(acc_number="+accNum+")";
					Statement st1 =ab.createConnection(url, uname, pass);
					ResultSet rs1=st1.executeQuery(bal);
					int newBal=0;
					while(rs1.next()) {
						newBal=rs1.getInt(1);
					}
					int newBal1=newBal-amount;
					String updateBal="update acc_detail set balance="+newBal1+" "+"where(acc_number="+accNum+")";
					Statement st2 =ab.createConnection(url, uname, pass);
					st2.executeUpdate(updateBal);
					System.out.println("Your new Balance is :"+newBal1);
				}else {
					System.out.println("Wrong Pin!");
				}
			}
		}catch(Exception e) {
			e.printStackTrace();
		}
	}
}
