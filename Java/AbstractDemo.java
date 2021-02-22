abstract class AbstractDemo{
	void printer(){
		System.out.println("Printer");
	}
	abstract void p();
}
class Achild extends AbstractDemo{
	void p(){
		System.out.println("P Method");
	}
}
class AbstractMain{
	public static void main(String[]args){
		Achild ab=new Achild();
		ab.printer();
		ab.p();
	}
}
