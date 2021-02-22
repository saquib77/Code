class StaticMain{
	public static void main(String[]args){
		System.out.println("Main Block");
		StaticDemo sd=StaticDemo.factory();
		sd.printer();
	}

}
class StaticDemo{
	private StaticDemo(){}
	private static StaticDemo sd;
	static{
		sd=new StaticDemo();
	}
	static StaticDemo factory(){
		return sd;
	}
	void printer(){
		System.out.println("Printer");
	}
}
