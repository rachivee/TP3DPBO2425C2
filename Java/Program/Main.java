public class Main {
    public static void main(String[] args) {
        Store toko = new Store(); // Create a Store object
        toko.setAddress("Jl. Gegerkalong Girang No. 113, Kota Bandung"); // Set store address

        // Print store header
        System.out.println("\nKPOP ALBUM STORE");
        System.out.println("at " + toko.getAddress());

        // Print data before adding
        System.out.println("\n----------------------------------------------------");
        System.out.println("\nDATA SEBELUM DITAMBAHKAN\n");
        toko.printAllData();

        // add album
        toko.addAlbum(new Album("Rich Man", "aespa", 289000, 10));
        toko.addAlbum(new Album("Unlock My World", "fromis_9", 230000, 7));
        toko.addAlbum(new Album("Love Dive", "IVE", 260000, 15));

        // add customer
        toko.addCustomer(new Customer("Ayu", 20, "Perempuan", "C001", "0812345678", "BLACKPINK"));
        toko.addCustomer(new Customer("Rina", 19, "Perempuan", "C002", "0822334455", "aespa"));

        // add employee
        toko.addEmployee(new Employee("Dimas", 25, "Laki-laki", "E001", "Kasir"));

        // add VIP customer
        toko.addVIPCustomer(new VIPCustomer("Siti", 21, "Perempuan", "V001", "08211234567", "BLACKPINK", "Gold", 15.0, 500000));

        // Print data after adding
        System.out.println("\n----------------------------------------------------");
        System.out.println("\nDATA SETELAH DITAMBAHKAN\n");
        toko.printAllData();
    }
}
