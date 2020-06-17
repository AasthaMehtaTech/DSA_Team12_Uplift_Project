public class ArmstrongNumber {

	public static void main(String[] args) {
		int lo = 10;
		int hi = 1000;
		printArmstrong(lo, hi);

	}

	public static void printArmstrong(int lo, int hi) {
		for (int i = lo; i <= hi; i++) {
			boolean res = isArmstrong(i);
			if (res)
				System.out.println(i);
		}
	}

	public static boolean isArmstrong(int n) {
		int sum = 0;
		int cnt = numberOfDigits(n);
		int temp = n;
		while (temp > 0) {
			int rem = temp % 10;
			sum = sum + (int) Math.pow(rem, cnt);
			temp = temp / 10;
		}
		if (sum == n)
			return true;
		else
			return false;
	}

	public static int numberOfDigits(int n) {
		int count = 0;
		while (n > 0) {
			count++;
			n = n / 10;
		}

		return count;
	}
}
