class ForLoop {
    public static void main(String[] args) {
        System.out.println(new DoLoop().loop());
    }
}

class DoLoop {
    public int loop() {
        int ii;
        for(ii = 0; ii < 10; ii = ii + 1) {
            System.out.println(ii);
        }
        return 0;
    }
}