package heartbeat.heartbeat;

public class Heartbeat {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int t = 0;
		while (true) {
			try{
			Thread.sleep(1000);
			t += 1;
			System.out.println("Time elapsed: " + t + " sec");
			}
			catch(InterruptedException e) {
				e.printStackTrace();
			}
		}
	}

}
