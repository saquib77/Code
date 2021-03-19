class Coffee{
	public static void main(String[]args){
		Mocha m = new Mocha(new Expresso());
		System.out.println("Beverage : "+m.getDescription()+" | Cost : "+m.cost());

		Mocha m1 = new Mocha(new HouseBlend());
		System.out.println("Beverage : "+m1.getDescription()+" | Cost : "+m1.cost());
	}
}
