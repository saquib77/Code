package mpkg1;
import mypkg1.varA;
class Var1{
       	public static void main(String[]args){
        	varA va=new varA();
        	System.out.println(va.a+" "+va.b+" "+va.c+" "+va.d);   //Error : Protected ,Default & Private member's cannot call  a.x , a.z , a.k.
       	}
}
