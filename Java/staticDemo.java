class StaticMain{
	public static void main(String[]args){
		System.out.println("Main Block");
		StaticDemo sd=new StaticDemo();
	}

}
class StaticDemo{
	static{
		System.out.println("Static Block");
	}
}
