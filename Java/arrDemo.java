class Arr{
	void arrPrint(int[]a){
		for(int i=0;i<a.length;i++){
			System.out.print(a[i]+" ");
		}
		System.out.println();
	}
}

class ArrDemo{
	public static void main(String[]args){
		Arr a=new Arr();
		int[]ar={2,3,4,5,6};
		a.arrPrint(ar);
	}
}
