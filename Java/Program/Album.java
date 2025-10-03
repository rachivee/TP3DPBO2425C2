public class Album { // Album class
    // Attributes
    private String title;
    private String group;
    private int price;
    private int stock;
    // Constructors
    public Album() {
        this("", "", 0, 0);
    }
    // Parameterized Constructor
    public Album(String title, String group, int price, int stock) {
        this.title = title;
        this.group = group;
        this.price = price;
        this.stock = stock;
    }
    // Getters & Setters
    public String getTitle() { return title; }
    public void setTitle(String title) { this.title = title; }

    public String getGroup() { return group; }
    public void setGroup(String group) { this.group = group; }

    public int getPrice() { return price; }
    public void setPrice(int price) { this.price = price; }

    public int getStock() { return stock; }
    public void setStock(int stock) { this.stock = stock; }
    // Method to print album details
    public void printAlbum() {
        System.out.printf("%-20s %-15s %-10d %-5d%n", getTitle(), getGroup(), getPrice(), getStock());
    }
}