public class ThreadDemo1 extends Thread{
	public void run(){
		for(int i=0;i<5000;i++){
			System.out.println(i);
		}
	}
}
class ThreadMain{
	public static void main(String[]args){
		Thread t1 = new ThreadDemo1();
		Thread t2 = new ThreadDemo1();
		t1.start();
		t2.start();
	}
}
