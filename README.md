# TP3DPBO2425C2

Saya Farah Maulida dengan NIM 2410024 mengerjakan Tugas Praktikum 3 dalam mata kuliah Desain dan Pemrograman Berbasis Objek untuk keberkahan-Nya maka saya tidak akan melakukan kecurangan seperti yang telah di spesifikasikan Aamiin.

# Diagram
<img width="881" height="584" alt="DPBO-TP3_DPBO24C2 drawio (1)" src="https://github.com/user-attachments/assets/9cf4f8da-a1c4-4571-b1ac-9ad90d82d937" />


Pada tugas praktikum ini, saya membuat sebuah sistem informasi untuk sebuah toko yang menjual barang berupa album fisik dari suatu grup KPOP. Gambar di atas merupakan diagram yang menggambarkan struktur dari keseluruh sistem yang dibuat dengan menggunakan konsep pemrograman berorientasi objek untuk mendefinisikan class dan hubungannya.

1. Person,
   Kelas ini merupakan superclass yang memiliki 3 atribut yaitu name (nama), age (umur), dan gender (jenis kelamin) disertai dengan metode konstruktor untuk membuat objek baru, setter dan getter untuk mengatur dan mengambil nilai atribut, lalu terdapat showDetails yang membuat kelas ini merupakan abstract class.
2. Employee,
   Kelas ini merupakan anak yang mewarisi sifat dari kelas Person yang artinya Employee memiliki atribut yang dimiliki Person dengan ditambahkan atributnya sendiri yaitu employeeId (ID Pegawai) dan position (posisi dalam pekerjaan). Seperti kelas sebelumnya, kelas ini juga memiliki metode konstruktor, setter, dan getter, lalu ditambah dengan showDetails untuk menampilkan data pegawainya.
3. Customer,
   Selain Employee, Customer juga merupakan anak dari kelas Person yang juga mewarisi sifatnya. Namun, untuk kelas Customer atribut tambahannya adalah customerId (ID Customer), handphoneNumber (Nomor Handphone), dan favoriteGroup (Grup kesukaan customer)
4. Membership,
   Kelas ini merupakan kelas yang menggambarkan tingkat keanggotaan dari seseorang, dengan memiliki 2 atribut yaitu level (tingkat keanggotaannya, seperti Silver atau Gold) dan discount (besar diskon yang didapat). Pada kelas ini terdapat metode konsruktor, setter, dan getter, lalu dilengkapi dengan showMembership untuk menampilkan detail datanya.
5. Vip,
    Kelas ini merupakan kelas yang termasuk ke dalam multiple inheritence atau pewarisan ganda yang mewarisi sifat dari dua kelas atau parent yaitu Customer dan Membership. Pada kelas ini mempunyai atribut dari kedua parentnya dan ditambah dengan 1 atribut khusus yaitu totalSpent. Kelas ini memiliki metodde seperti kelas lain yaitu konstruktor, setter, getter, dan printVIPCustomer.
6. Album,
    Kelas ini merupakan kelas yang menggambarkan produk yang dijual di toko ini dengan 4 atribut yaitu title (judul album), group (nama grup atau artis penyanyi), price (harga satuan album), dan stock (jumlah ketersediaan barang).
7. Store,
    Kelas ini merupakan kelas yang mengelola interaksi antara kelas-kelas lain. Kelas ini menggunakan konsep composite dimana kelas Store menggunakan kelas lain yaitu Album, Employee, Customer, dan Vip. Selain itu, di dalam kelas ini terdapat 1 atribut tambahan yaitu address. Lalu, terdapat beberapa metode seperti setter dan getter, addAlbum, addCustomer, addEmployee, addVIPCustomer, dan printAllData (menampilkan seluruh detail data dari album, customer, employee, dan vip customer).

Seperti yang disebutkan di uraian setiap kelasnya, kode program ini menggunakan beberapa konsep OOP, seperti Inheritence yang dalam kode ini menggunakan Single Inheritence untuk kelas Employee dan Customer yang mewarisi sifat dari Person, lalu Multiple inheritence dimana kelas Vip mewarisi sifat dari dua kelas sekaligus yaitu Customer dan Membership. Selain itu, penerapan konsep composition dalam kode program ini ditunjukkan di kelas Store yang dimana sebuah kelas terdiri dari atau memiliki objek dari kelas lain sehingga menciptakan hubungan has-a. Di dalam kelas Store terdapat sekumpulan objek Album, Customer, Employee, dan Vip. Lalu yang terakhir merupakan konsep Abstract Class yaitu pada kelas Person, kelas ini memiliki metode showDetails yang memaksa setiap kelas turunannya untuk mendefinisikan cara showDetails tersebut masing-masing, tetapi dalam kode program ini, konsep Abstract class hanya digunakan di bahasa C++ saja.

Alur dari kode program ini adalah dimulai dengan membuat kelas-kelas yang dibutuhkan dimana di masing-masing sc kelas terdapat atribut yang dimiliki kelas tersebut, lalu dilanjut dengan metode-metode yang dimiliki, seperti konstruktor yang digunakan untuk membuat objek, setter yang digunakan untuk mengatur nilai suatu atribut dari suatu kelas, dan getter yang digunakan untuk mendapatkan nilai suatu atribut dari suatu kelas. Selain itu di beberapa kelas terdapat metode untuk menampilkan detail data dari objek tersebut. 

Selanjutnya, di dalam kelas Store memiliki atribut berupa objek dari kelas lain yang berbentuk vector dan satu atribut khusus lain. Lalu, terdapat metode untuk menambahkan data ke dalam vector album, customer, employee, dan vip customer. Diakhiri dengan metode untuk menampilkan semua data dari berbagai kelas.

Pada main.cpp, dibuat objek dari kelas store yang selanjutnya mengatur nilai address dari objek tersebut. Setelah itu, akan ditampilkan format output dan menjalankan metode print all data yang dimana setiap vectornya masih kosong. Lalu, data sample mulai dimasukkan dan kembali ditampilkan menggunakan metode print all data untuk menunjukkan perbedaan output jika vector memiliki objek di dalamnya atau tidak.

# Dokumentasi

C++
<img width="1920" height="1080" alt="Screenshot (703)" src="https://github.com/user-attachments/assets/230132f1-1a38-493e-bcfe-842191e1db2d" />
<img width="1920" height="1080" alt="Screenshot (704)" src="https://github.com/user-attachments/assets/905818aa-aa99-4eda-ab2a-a572aed6ab45" />

Python
<img width="1920" height="1080" alt="Screenshot (705)" src="https://github.com/user-attachments/assets/5545cb70-08a3-41da-943e-8921b2b973da" />
<img width="1920" height="1080" alt="Screenshot (706)" src="https://github.com/user-attachments/assets/2d1f2b91-ab91-42e6-af25-53c627159956" />



