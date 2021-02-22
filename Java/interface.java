interface A{
	void p();
}
interface B extends A{
	void p2();
}

class inter implements A,B{
	public void p(){
		System.out.println("P Method");
	}
	public void p2(){
		System.out.println("P2 Method");
	}
}
class MyClass2{
	public static void main(String[]args){
		B i=new inter();
		i.p();
		i.p2();
	}
}
