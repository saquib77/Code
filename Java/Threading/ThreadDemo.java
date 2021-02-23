public class ThreadDemo implements Runnable{
	public void run(){
		for(int i=0;i<5000;i++){
			System.out.println(i);
		}
	}
}
class ThreadMain{
	public static void main(String[]args){
		//Runnable r = new ThreadDemo();
		//Thread t1 = new Thread(r);
		Thread t1 = new Thread(new ThreadDemo(){
			public void run(){
				for(int i=0;i<500;i++){
					System.out.println(i);
				}
			}
		});
		//Thread t2 = new Thread(r);
		Thread t2 = new Thread(new ThreadDemo(){
                        public void run(){
                                for(int i=0;i<500;i++){
                                        System.out.println(i);
                                }
                        }
                });
		t1.start();
		t2.start();
	}
}
