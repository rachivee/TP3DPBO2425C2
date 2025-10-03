public class Membership { // Membership class
    // Attributes
    private String level;
    private double discount;
    // Constructors
    public Membership() {
        this("Basic", 0.0);
    }
    // Parameterized Constructor
    public Membership(String level, double discount) {
        this.level = level;
        this.discount = discount;
    }
    // Getters & Setters
    public String getLevel() { return level; }
    public void setLevel(String level) { this.level = level; }

    public double getDiscount() { return discount; }
    public void setDiscount(double discount) { this.discount = discount; }
    
    // Method to show membership details
    public void showMembership() {
        System.out.printf("%s\t%.2f%n", getLevel(), getDiscount());
    }
}
