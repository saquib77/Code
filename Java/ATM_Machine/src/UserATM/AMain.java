package UserATM;
import java.sql.*;
import java.util.*;
public class AMain {
	//Main Function.
	public static void main(String[] args) throws SQLException {
		try {
			Class.forName("com.mysql.cj.jdbc.Driver");
			String url="jdbc:mysql://localhost:3306/banking";
			String uname="root";
			String pass="Saquib@77";
			welcomePage(url,uname,pass);
		}catch(Exception e) {
			e.printStackTrace();
		}
	}
	
	//User Section
	public static void userSection(String name,int accNum,String url,String uname,String pass,String qry) throws ClassNotFoundException, SQLException {
		Scanner sc = new Scanner(System.in);
		ATMBean ab =new ATMBean();
		System.out.println("Welcome Mr|Mrs "+name);
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
		if(newBal1>=0) {
			String updateBal="update acc_detail set balance="+newBal1+" "+"where(acc_number="+accNum+")";
			Statement st2 =ab.createConnection(url, uname, pass);
			st2.executeUpdate(updateBal);
			System.out.println("Your new Balance is :"+newBal1);
			System.out.println("Thank You For Banking With Us!");
			System.out.println("Press 1 For More Transaction.");
			System.out.println("Press 2 to Cancel");
			int more=sc.nextInt();
			if(more==1) typeOfAccount(accNum,url,uname,pass,qry);
			else {
				System.out.println("Thank You For Banking With Us!");
				welcomePage(url,uname,pass);
			}
			
		}else {
			System.out.println("Insufficent Amount!");
			System.out.println("Current Balance :"+newBal);
			System.out.println("Press 1 to Try Again!");
			System.out.println("Press 2 to Cancel");
			int suff=sc.nextInt();
			if(suff==1) userSection(name,accNum,url,uname,pass,qry);
			else {
				System.out.println("Thank You For Banking With Us!");
				welcomePage(url,uname,pass);
			}
		}
		sc.close();
	}
	
	//Welcome Page
	public static void welcomePage(String url,String uname,String pass) throws SQLException, ClassNotFoundException {
		Scanner sc = new Scanner(System.in);
		ATMBean ab =new ATMBean();
		Statement st = ab.createConnection(url,uname,pass);
		System.out.println("Welcome to ATM");
		System.out.print("Enter Account Number : ");
		int accNum=sc.nextInt();
		String qry="select pin_num,name from acc_holder where(acc_number="+accNum+")";
		ResultSet rs=st.executeQuery(qry);
		if(rs.next()==false) {
			System.out.println("Account Does'nt Exist! With Account Number "+accNum);
			welcomePage(url,uname,pass);
		}
		typeOfAccount(accNum,url,uname,pass,qry);
		sc.close();
	}
	
	public static void  typeOfAccount(int accNum,String url,String uname,String pass,String qry) throws ClassNotFoundException, SQLException {
		ATMBean ab =new ATMBean();
		Statement st = ab.createConnection(url,uname,pass);
		ResultSet rs1=st.executeQuery(qry);
		System.out.print("Enter Your Pin :");
		Scanner sc=new Scanner(System.in);
		int pinNum=sc.nextInt();
		while(rs1.next()) {
			if(pinNum==rs1.getInt(1)) {
				String cname=rs1.getString(2);
				System.out.println("1.Saving");
				System.out.println("2.Current");
				System.out.print("Select Account Type : ");
				int type=sc.nextInt();
				switch(type) {
				case 1:
					withdraw(cname,accNum,url,uname,pass,qry);
					break;
				case 2:
					withdraw(cname,accNum,url,uname,pass,qry);
					break;
				}
			}else {
				System.out.println("Wrong Pin! Try Again");
				typeOfAccount(accNum,url,uname,pass,qry);
			}
		}
		sc.close();
	}
	
	//Deposit Amount
	public static void deposit(String name,int accNum,String url,String uname,String pass) throws ClassNotFoundException, SQLException {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the Amount :");
		int amount=sc.nextInt();
		ATMBean ab =new ATMBean();
		Statement st = ab.createConnection(url,uname,pass);
		String qry="select balance from acc_detail where(acc_number="+accNum+")";
		ResultSet rs=st.executeQuery(qry);
		int curr_amount=0;
		while(rs.next()) {
			curr_amount=rs.getInt(1);
		}
		System.out.println("Current Ammount : "+curr_amount);
		System.out.println("Ammount Deposited");
		curr_amount=curr_amount+amount;
		String updateBal="update acc_detail set balance="+curr_amount+" "+"where(acc_number=+"+accNum+")";
		Statement st2 =ab.createConnection(url, uname, pass);
		st2.executeUpdate(updateBal);
		System.out.println("Current Ammount :"+curr_amount);
		System.out.println("Press 1 For More Transaction.");
		System.out.println("Press 2 to Cancel");
		int more=sc.nextInt();
		if(more==1) typeOfAccount(accNum,url,uname,pass,qry);
		else {
			System.out.println("Thank You For Banking With Us!");
			welcomePage(url,uname,pass);
		}
		sc.close();
	}
	
	//Withdraw Amount
	public static void withdraw(String name,int accNum,String url,String uname,String pass,String qry) throws ClassNotFoundException, SQLException {
		Scanner sc = new Scanner(System.in);
		System.out.println("1.Withdraw");
		System.out.println("2.Deposit");
		System.out.println("3.Cancel");
		System.out.print("Select  : ");
		int type=sc.nextInt();
		switch(type) {
		case 1:
			userSection(name,accNum,url,uname,pass,qry);
			break;
		case 2:
			deposit(name,accNum,url,uname,pass);
			break;
		case 3:
			welcomePage(url,uname,pass);
			break;
		}
		sc.close();
	}
}
