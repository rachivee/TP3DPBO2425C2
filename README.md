# TP3DPBO2425C2

Saya Farah Maulida dengan NIM 2410024 mengerjakan Tugas Praktikum 3 dalam mata kuliah Desain dan Pemrograman Berbasis Objek untuk keberkahan-Nya maka saya tidak akan melakukan kecurangan seperti yang telah di spesifikasikan Aamiin.

# Diagram
<img width="882" height="584" alt="DPBO-TP3_DPBO24C2 drawio" src="https://github.com/user-attachments/assets/5ef6f202-526f-452b-ab5b-c7ee74a713f4" />

Pada tugas praktikum ini, saya membuat sebuah sistem informasi untuk sebuah toko yang menjual barang berupa album fisik dari suatu grup KPOP. Gambar di atas merupakan diagram yang menggambarkan struktur dari keseluruh sistem yang dibuat dengan menggunakan konsep pemrograman berorientasi objek untuk mendefinisikan class dan hubungannya.

1. Person
   Kelas ini merupakan superclass yang memiliki 3 atribut yaitu name (nama), age (umur), dan gender (jenis kelamin) disertai dengan metode konstruktor untuk membuat objek baru, setter dan getter untuk mengatur dan mengambil nilai atribut.
2. Employee
   Kelas ini merupakan anak yang mewarisi sifat dari kelas Person yang artinya Employee memiliki atribut yang dimiliki Person dengan ditambahkan atributnya sendiri yaitu employeeId (ID Pegawai) dan position (posisi dalam pekerjaan). Seperti kelas sebelumnya, kelas ini juga memiliki metode konstruktor, setter, dan getter, lalu ditambah dengan printEmployee untuk menampilkan data pegawainya.
3. Customer
   Selain Employee, Customer juga merupakan anak dari kelas Person yang juga mewarisi sifatnya. Namun, untuk kelas Customer atribut tambahannya adalah customerId (ID Customer), handphoneNumber (Nomor Handphone), dan favoriteGroup (Grup kesukaan customer)
4. Membership
   Kelas ini merupakan kelas yang menggambarkan tingkat keanggotaan dari seseorang, dengan memiliki 2 atribut yaitu level (tingkat keanggotaannya, seperti Silver atau Gold) dan discount (besar diskon yang didapat). Pada kelas ini terdapat metode konsruktor, setter, dan getter, lalu dilengkapi dengan showMembership untuk menampilkan detail datanya.
5. Vip
    Kelas ini merupakan kelas yang termasuk ke dalam multiple inheritence atau pewarisan ganda yang mewarisi sifat dari dua kelas atau parent yaitu Customer dan Membership. Pada kelas ini mempunyai atribut dari kedua parentnya dan ditambah dengan 1 atribut khusus yaitu totalSpent. Kelas ini memiliki metodde seperti kelas lain yaitu konstruktor, setter, getter, dan printVIPCustomer.
6. Album
    Kelas ini merupakan kelas yang menggambarkan produk yang dijual di toko ini dengan 4 atribut yaitu title (judul album), group (nama grup atau artis penyanyi), price (harga satuan album), dan stock (jumlah ketersediaan barang).
7. Store
    Kelas ini merupakan kelas yang mengelola interaksi antara kelas-kelas lain. Kelas ini menggunakan konsep composite dimana kelas Store menggunakan kelas lain yaitu Album, Employee, Customer, dan Vip. Selain itu, di dalam kelas ini terdapat 1 atribut tambahan yaitu address. Lalu, terdapat beberapa metode seperti setter dan getter, addAlbum, addCustomer, addEmployee, addVIPCustomer, dan printAllData (menampilkan seluruh detail data dari album, customer, employee, dan vip customer).
