public class Person { // Superclass
    // Attributes
    private String name;
    private int age;
    private String gender;

    // Constructors
    public Person() {
        this.name = "";
        this.age = 0;
        this.gender = "";
    }

    // Parameterized Constructor
    public Person(String name, int age, String gender) {
        this.name = name;
        this.age = age;
        this.gender = gender;
    }

    // Getters & Setters
    public String getName() { return name; }
    public void setName(String name) { this.name = name; }

    public int getAge() { return age; }
    public void setAge(int age) { this.age = age; }

    public String getGender() { return gender; }
    public void setGender(String gender) { this.gender = gender; }
}
