import java.util.ArrayList;

public class Store { // Store class
    // Attributes containing lists of albums, customers, employees, and VIP customers
    private ArrayList<Album> albums = new ArrayList<>();
    private ArrayList<Customer> customers = new ArrayList<>();
    private ArrayList<Employee> employees = new ArrayList<>();
    private ArrayList<VIPCustomer> vipCustomers = new ArrayList<>();
    // attribute for store address
    private String address;

    // setters and getters
    public void setAddress(String address) { this.address = address; }
    public String getAddress() { return address; }
    // Methods to add data to the lists
    public void addAlbum(Album album) { albums.add(album); }
    public void addCustomer(Customer customer) { customers.add(customer); }
    public void addEmployee(Employee employee) { employees.add(employee); }
    public void addVIPCustomer(VIPCustomer vip) { vipCustomers.add(vip); }
    // Method to print all data in the store
    public void printAllData() {    
        // Print albums
        System.out.println("\n=== Album List ===");
        if(albums.isEmpty()) {
            System.out.println("Belum ada data album\n");
        } else {
            System.out.printf("-----------------------------------------------------\n");
            System.out.printf("%-20s %-15s %-10s %-5s%n", "Title", "Group", "Price", "Stock");
            System.out.printf("-----------------------------------------------------\n");
            for (Album a : albums) a.printAlbum();
            System.out.printf("-----------------------------------------------------\n");
        }

        // Print customers
        System.out.println("\n=== Customer List ===");
        if(customers.isEmpty()) {
            System.out.println("Belum ada data customer\n");
        } else {
            System.out.printf("--------------------------------------------------\n");
            System.out.println("ID\tPhone Number\tName\tAge\tFav. Group");
            System.out.printf("--------------------------------------------------\n");
            for (Customer c : customers) c.printCustomer();
            System.out.printf("--------------------------------------------------\n");
        }

        // Print VIP customers
        System.out.println("\n=== VIP Customer List ===");
        if(vipCustomers.isEmpty()) {
            System.out.println("Belum ada data customer VIP\n");
        } else {
            System.out.printf("-----------------------------------------------------------------------------------------------------\n");
            System.out.printf("%-8s %-16s %-10s %-8s %-15s %-15s %-12s %-12s%n",
                "ID","Phone","Name","Age","Fav.Group","Membership","Discount","TotalSpent");
            System.out.printf("-----------------------------------------------------------------------------------------------------\n");
            for (VIPCustomer v : vipCustomers) v.printVIPCustomer();
            System.out.printf("-----------------------------------------------------------------------------------------------------\n");
        }

        // Print employees
        System.out.println("\n=== Employee List ===");
        if(employees.isEmpty()) {
            System.out.println("Belum ada data employee\n");
        } else {
            System.out.printf("------------------------------------------------\n");
            System.out.println("ID\tName\tGender\t\tAge\tPosition");
            System.out.printf("------------------------------------------------\n");
            for (Employee e : employees) e.printEmployee();
            System.out.printf("------------------------------------------------\n");
        }
    }
}
