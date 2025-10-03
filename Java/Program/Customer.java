public class Customer extends Person { // Subclass from Person
    // Attributes
    private String customerId;
    private String handphoneNumber;
    private String favoriteGroup;
    // Constructors
    public Customer() {}
    // Parameterized Constructor
    public Customer(String name, int age, String gender, String customerId,
                    String handphoneNumber, String favoriteGroup) {
        super(name, age, gender);
        this.customerId = customerId;
        this.handphoneNumber = handphoneNumber;
        this.favoriteGroup = favoriteGroup;
    }
    // Getters & Setters
    public String getCustomerId() { return customerId; }
    public void setCustomerId(String customerId) { this.customerId = customerId; }

    public String getHandphoneNumber() { return handphoneNumber; }
    public void setHandphoneNumber(String handphoneNumber) { this.handphoneNumber = handphoneNumber; }

    public String getFavoriteGroup() { return favoriteGroup; }
    public void setFavoriteGroup(String favoriteGroup) { this.favoriteGroup = favoriteGroup; }
    // Method to print customer details
    public void printCustomer() {
        System.out.printf("%s\t%s\t%s\t%d\t%s%n",
            getCustomerId(), getHandphoneNumber(), getName(), getAge(), getFavoriteGroup());
    }
}
