public class Employee extends Person { // Subclass from Person
    // Attributes
    private String employeeId;
    private String position;
    // Constructors
    public Employee() {}
    // Parameterized Constructor
    public Employee(String name, int age, String gender, String employeeId, String position) {
        super(name, age, gender);
        this.employeeId = employeeId;
        this.position = position;
    }
    // Getters & Setters
    public String getEmployeeId() { return employeeId; }
    public void setEmployeeId(String employeeId) { this.employeeId = employeeId; }

    public String getPosition() { return position; }
    public void setPosition(String position) { this.position = position; }
    // Method to print employee details
    public void printEmployee() {
        System.out.printf("%s\t%s\t%s\t%d\t%s%n",
            getEmployeeId(), getName(), getGender(), getAge(), getPosition());
    }
}
