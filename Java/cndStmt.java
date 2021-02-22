class C{
	public static void main(String[]args){
		ab:
		for(int i=1;i<=10;i++){
			for(int j=1;j<=10;j++){
				if(j==5) continue ab;
				System.out.println(i+" "+j);
			}
		}
	}
}
