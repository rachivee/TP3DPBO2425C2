// implementation of multilevel inheritance 
public class VIPCustomer extends Customer { // Subclass from Customer
    private Membership membership; // Composition with Membership class
    // Attributes
    private int totalSpent;

    // Constructors
    public VIPCustomer() {
        super();
        this.membership = new Membership();
        this.totalSpent = 0;
    }
    // Parameterized Constructor
    public VIPCustomer(String name, int age, String gender, String customerId,
                       String handphoneNumber, String favoriteGroup,
                       String level, double discount, int totalSpent) {
        super(name, age, gender, customerId, handphoneNumber, favoriteGroup);
        this.membership = new Membership(level, discount);
        this.totalSpent = totalSpent;
    }
    // Getters & Setters
    public Membership getMembership() { return membership; }
    public void setMembership(Membership membership) { this.membership = membership; }

    public int getTotalSpent() { return totalSpent; }
    public void setTotalSpent(int totalSpent) { this.totalSpent = totalSpent; }
    // Method to print VIP customer details
    public void printVIPCustomer() {
        System.out.printf("%-8s %-16s %-10s %-8d %-15s %-15s %-12.2f %-12d%n",
            getCustomerId(), getHandphoneNumber(), getName(), getAge(),
            getFavoriteGroup(), membership.getLevel(), membership.getDiscount(), getTotalSpent());
    }
}
