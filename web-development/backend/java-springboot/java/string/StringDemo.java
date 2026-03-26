public class StringDemo {

    public static void main(String[] args) {
        // Example with String (Immutable)
        String str = "Hello";
        str = str + " World"; // Creates a new String object
        System.out.println("String result: " + str);

        // Example with StringBuilder (Mutable, not synchronized)
        StringBuilder sb = new StringBuilder("Hello");
        sb.append(" World"); // Updates the same object
        System.out.println("StringBuilder result: " + sb);

        // Example with StringBuffer (Mutable, synchronized)
        StringBuffer sbf = new StringBuffer("Hello");
        sbf.append(" World"); // Updates the same object
        System.out.println("StringBuffer result: " + sbf);

        // Performance test (optional)
        long startTime, endTime;

        // StringBuilder performance
        startTime = System.nanoTime();
        StringBuilder builderTest = new StringBuilder();
        for (int i = 0; i < 100000; i++) {
            builderTest.append("a");
        }
        endTime = System.nanoTime();
        System.out.println("StringBuilder time: " + (endTime - startTime) + " ns");

        // StringBuffer performance
        startTime = System.nanoTime();
        StringBuffer bufferTest = new StringBuffer();
        for (int i = 0; i < 100000; i++) {
            bufferTest.append("a");
        }
        endTime = System.nanoTime();
        System.out.println("StringBuffer time: " + (endTime - startTime) + " ns");

        // String performance
        startTime = System.nanoTime();
        String stringTest = "";
        for (int i = 0; i < 100000; i++) {
            stringTest = stringTest + "a"; // Creates new object each time
        }
        endTime = System.nanoTime();
        System.out.println("String time: " + (endTime - startTime) + " ns");
    }
}
