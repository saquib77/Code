class sample implements Runnable {
    private Thread t;
    private String tN;

    sample(String tN) {
        this.tN = tN;
    }

    public void run() {
        while (true) {
            System.out.println(tN);
        }
    }

    public void start() {
        if (t == null) {
            t = new Thread(this, tN);
            t.start();
        }
    }
}

public class tThread {
    public static void main(String args[]) {
        sample a = new sample("A");
        sample b = new sample("B");
        b.start();
        a.start();
    }
}