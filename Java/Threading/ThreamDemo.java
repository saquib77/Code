public class ThreadDemo implements Runnable{
	public void run(){
		for(int i=0;i<5000;i++){
			System.out.println(i);
		}
	}
}
class ThreadMain{
	public static void main(String[]args){
		Runnable r = new ThreadDemo();
		Thread t1 = new Thread(r);
		Thread t2 = new Thread(r);
		t1.start();
		t1.start();
	}
}
