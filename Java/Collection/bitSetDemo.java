import java.util.BitSet;
class bitSetDemo{
	public static void main(String[]args){
		BitSet b1 = new BitSet(16);
		BitSet b2 = new BitSet(16);
      		for(int i=0;i<7;i++) {
         		if((i%2) == 0) b1.set(i);
        		if((i%3) == 0) b2.set(i);
		}
      		System.out.println("First Bit(B1) : "+b1);
      		System.out.println("Second Bit(B2) : "+b2);

      		// AND bits
      		b2.and(b1);
		long[] bits=b2.toLongArray();
		//for(int i=0;i<bits.length;i++){
			System.out.println("B2 & B1 Array : "+bits[0]);
		//}
      		System.out.println("B2 & B1 : "+b2.toString());

      		// OR bits
		b2.or(b1);
      		System.out.println("B2 || B1 :"+b2);

	      	// XOR bits
	      	b2.xor(b1);
		System.out.println("B2 ^ B1 : "+b2);
	}
}
