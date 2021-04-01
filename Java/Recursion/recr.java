class RecDemo{
	void call(int k){
		if(k==0) return;
		System.out.println("Hello");
		k=k-2;
		this.call(k);
	}
	public static void main(String[]args){
		RecDemo rd = new RecDemo();
		rd.call(18230);
	}
}
