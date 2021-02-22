abstract class Parent{
	Parent(){
		System.out.println("Parent of Constructor");
	}
	 void printer(){
		System.out.println("Parent");
	}
}
class Child extends Parent{
	Child(){
		System.out.println("Child Of Constructor");
	}
	void print(){
		System.out.println("Child");
	}
}
class Main{
	public static void main(String[]args){
		Child c=new Child();
		c.printer();
	}
}
