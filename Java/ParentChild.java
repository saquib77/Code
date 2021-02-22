import java.io.*;
class Parent{
	PrintStream s=new PrintStream(System.out);
	void printer(){
		s.println("Printer of Parent");
	}
}
class Child extends Parent{
	void print(){
		s.println("Printer of Child");
		super.printer();
	}
}
class Imain{
	public static void main(String[]args){
		Child c=new Child();
		c.print();
	}
}
